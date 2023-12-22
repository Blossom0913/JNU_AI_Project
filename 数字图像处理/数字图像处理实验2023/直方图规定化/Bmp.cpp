#include "stdafx.h"
#include "math.h"
LONG size = 0;

// 载入和读取bmp文件的位图信息，返回一个lpDIP

BITMAPINFO* LoadBmpFile(char* BmpFileName)
{
	FILE* fp;
	if (NULL == (fp = fopen(BmpFileName,"rb")))
		return NULL;

	BITMAPFILEHEADER bf;  //文件头结构
	BITMAPINFOHEADER bi;  //信息头结构

	//将文件头BITMAPFILEHEADER结构从文件中读出，填写到bf中
	fread(&bf, sizeof(BITMAPFILEHEADER), 1, fp);

	//将信息头BITMAPINFOHEADER结构从文件中读出，填写到bi中
	fread(&bi, sizeof(BITMAPINFOHEADER), 1, fp);

	//计算图像中每一行像素共占多少字节
	DWORD LineBytes = (bi.biWidth * bi.biBitCount + 31)/32 * 4;

	//计算实际图象数据占用的字节数
	DWORD ImgSize = LineBytes * bi.biHeight;

	DWORD NumColors;  //实际用到的颜色数，即调色板数组中的颜色个数
	if (bi.biClrUsed != 0)
		NumColors = bi.biClrUsed; //如果bi.biClrUsed不为零，就是本图象实际用到的颜色数
	else {
		switch(bi.biBitCount) {
		case 1:
			NumColors = 2;
			break;
		case 4:
			NumColors = 16;
			break;
		case 8:
			NumColors = 256;
			break;
		case 24:
			NumColors = 0; //对于真彩色图，没用到调色板
			break;
		}
	}

	//分配内存，大小为BITMAPINFOHEADER结构长度+调色板+实际位图数据
	size = sizeof(BITMAPINFOHEADER) + NumColors * sizeof(RGBQUAD) + ImgSize;
	BITMAPINFO* lpDIB = (LPBITMAPINFO) malloc(size);
	if (NULL == lpDIB)
		return NULL;

	//文件指针重新定位到BITMAPINFOHEADER开始处
	fseek(fp, sizeof(BITMAPFILEHEADER),SEEK_SET);

	//将文件内容读入lpDIB
	fread((char*)lpDIB, size, 1, fp);
	fclose(fp);

	lpDIB->bmiHeader.biClrUsed = NumColors;

	return lpDIB;
}

//计算灰度直方图数组（统计各灰度级的像素个数）
//红色通道直方图H[0][255]
//绿色通道直方图H[1][255]
//蓝色通道直方图H[2][255]
void Histogram24(double H[][256], const LPBITMAPINFO lpDIB)
{
	// 图像的宽度和高度
	int w = lpDIB->bmiHeader.biWidth;
	int h = lpDIB->bmiHeader.biHeight;

	// 计算源图像中每行的字节数（必须是4的倍数）
	int LineBytes = (w * lpDIB->bmiHeader.biBitCount + 31)/32 * 4;

	// 指向图像数据的指针
	BYTE *lpBits = (BYTE*)&lpDIB->bmiColors[lpDIB->bmiHeader.biClrUsed];

	int i, j;
	BYTE *r, *g, *b;

	// 重置计数为0
	for (i = 0; i < 3; i ++)
		for (j = 0; j < 256; j ++)
			H[i][j] = 0;

	for (i = 0; i < h; i ++)
	{
		for (j = 0; j < w; j ++)
		{
			// 指向像素点(i,j)的指针
			b = lpBits + LineBytes * (h - 1 - i) + j * 3;
			g = b + 1;
			r = g + 1;

			// 计数加1
			H[0][*r] ++;
			H[1][*g] ++;
			H[2][*b] ++;
		}
	}

	//归一化
	for (i = 0; i < 3; i ++)
		for (j = 0; j < 256; j ++)
			H[i][j] = H[i][j] /(w * h);
}

#define H_HISTOGRAM 100

void DrawHistogram(CDC& dcMem, const double H[])
{
	CClientDC dc(NULL);

	CBitmap bmp; //定义内存中加载临时图象的位图对象
	bmp.CreateCompatibleBitmap(&dc,256,H_HISTOGRAM);//创建兼容位图

	dcMem.DeleteDC();
	dcMem.CreateCompatibleDC(&dc); //依附窗口DC创建兼容内存DC 
	dcMem.SelectObject(&bmp); //将位图选择进内存DC 

	CRect rect(0,0,256,H_HISTOGRAM);
	CBrush brush(RGB(200,200,200));
	dcMem.FillRect(rect, &brush);

	//在dcMem中绘制直方图
	int i;
	double max = 0;

	//求出H数组中的最大值
	for (i = 0; i < 256; i ++)
	{
		if (H[i] > max)
			max = H[i];
	}

	for (i = 0; i < 256; i ++)
	{
		dcMem.MoveTo(i, H_HISTOGRAM);
		dcMem.LineTo(i, H_HISTOGRAM - (int)(H[i] * H_HISTOGRAM / max));
	}
}

void Equalize(BYTE map[], const double h[])
{
	int i, j;
	double temp;

	// 计算灰度映射表
	for (i = 0; i < 256; i++)
	{
		// 初始为0
		temp = 0;
		//累加求和		
		for (j = 0; j <= i ; j++)
			temp += h[j];
		
		// 计算对应的新灰度值
		map[i] = (BYTE) (temp * 255);
	}
}

void Specify(BYTE map[], const double src[], const double dst[])
{
	//累加直方图
	double accum_scr[256];
	double accum_dst[256];

	int i,j;
	double temp;
	// 计算累加直方图
	for (i = 0; i < 256; i++)
	{
		temp = 0;
		for (j = 0; j <= i ; j++)
			temp += src[j];
		accum_scr[i] = temp;
	}
	for (i = 0; i < 256; i++)
	{
		temp = 0;
		for (j = 0; j <= i ; j++)
			temp += dst[j];
		accum_dst[i] = temp;
	}

	//计算原始图像到目标图像累积直方图各灰度级的差的绝对值 
	double diff[256][256]; 
    for (j = 0; j < 256; j++)   
    {   
        for (i = 0; i < 256; i++)   
        {   
            diff[i][j] = fabs(accum_scr[j] - accum_dst[i]);   
        }   
    }   

    /*************************** GML ****************************/
    double minValue = 0;   
    short lastStartY = 0, lastEndY = 0, startY = 0, endY = 0; 
	int k;
    for (i = 0; i < 256; i++)  //i对应dst
    {   
        minValue = diff[i][0];   
        for (j = 0; j < 256; j++) //j对应src  
        {   
            if (minValue > diff[i][j])   
            {   
                endY = j;   
                minValue = diff[i][j];   
            }   
        }   
   
        if (startY != lastStartY || endY != lastEndY)   
        {   
            for (k = startY; k <= endY; k++)   
            {   
                map[k] = i;//建立映射关系   
            }   
            lastStartY = startY;   
            lastEndY = endY;   
            startY = lastEndY + 1;   
        }   
    }   

	/*************************** SML ****************************/
/*	DWORD minX = 0;
	for (j = 0; j < 256; j ++) //j对应src
	{
		minX = 0;
		minValue = diff[0][j];
		for (i = 1; i < 256; i++) //i对应dst
		{
			if (minValue > diff[i][j])
			{
				minValue = diff[i][j];
				minX = i; //找出最小值对应的下标
			}
		}
		map[j] = minX;
	}
*/
}

void Mapping24(LPBITMAPINFO lpDIB, const BYTE map[][256])
{
	int w = lpDIB->bmiHeader.biWidth;
	int h = lpDIB->bmiHeader.biHeight;
	int LineBytes = (w * lpDIB->bmiHeader.biBitCount + 31)/32 * 4;
	BYTE *lpBits = (BYTE*)&lpDIB->bmiColors[lpDIB->bmiHeader.biClrUsed];

	int i,j;
	BYTE *r,*g,*b;
	for (i = 0; i < h; i ++)
	{
		for (j = 0; j < w; j ++)
		{
			// 指向像素点(i,j)的指针
			b = lpBits + LineBytes * (h - 1 - i) + j * 3;
			g = b + 1;
			r = g + 1;
			// 计算新的灰度值
			*r = map[0][*r];
			*g = map[1][*g];
			*b = map[2][*b];
		}
	}
}