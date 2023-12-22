// HistogramView.cpp : implementation of the CHistogramView class
//

#include "stdafx.h"
#include "Histogram.h"

#include "HistogramDoc.h"
#include "HistogramView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHistogramView

IMPLEMENT_DYNCREATE(CHistogramView, CScrollView)

BEGIN_MESSAGE_MAP(CHistogramView, CScrollView)
	//{{AFX_MSG_MAP(CHistogramView)

	// TODO: ADD ID_GREY
	ON_COMMAND(ID_GREY, OnGrey)
	ON_COMMAND(ID_SPEC, OnSpec)
	ON_COMMAND(ID_DEST, OnDest)
	ON_COMMAND(ID_EQUA, OnEqua)
	ON_UPDATE_COMMAND_UI(ID_SPEC, OnUpdateSpec)
	ON_UPDATE_COMMAND_UI(ID_DEST, OnUpdateDest)
	ON_UPDATE_COMMAND_UI(ID_EQUA, OnUpdateEqua)
	ON_UPDATE_COMMAND_UI(ID_GREY, OnUpdateGrey)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHistogramView construction/destruction

CHistogramView::CHistogramView()
{
	// TODO: add construction code here
	bTag = FALSE;
	// tag for if Grey Button is pressed
	gTag = FALSE;
}

LPBITMAPINFO lpSrc  = NULL;
LPBITMAPINFO lpEqua = NULL;
LPBITMAPINFO lpDest = NULL;
LPBITMAPINFO lpSpec = NULL;
// TODO: Create a lpGrey, Grey_H,dcMemGrey_H
LPBITMAPINFO lpGrey = NULL;

double Src_H[3][256];
double Equa_H[3][256];
double Dest_H[3][256];
double Spec_H[3][256];
// 
double Grey_H[3][256];

CDC dcMemSrc_H[3];
CDC dcMemEqua_H[3];
CDC dcMemDest_H[3];
CDC dcMemSpec_H[3];
// 
CDC dcMemGrey_H[3];

#define GAP 4

CHistogramView::~CHistogramView()
{
		// TODO: Add your specialized creation code here
	if(lpGrey)
		free(lpGrey);

	if (lpSrc) 
		free(lpSrc);

	if (lpEqua) 
		free(lpEqua);

	if (lpDest) 
		free(lpDest);

	if (lpSpec) 
		free(lpSpec);
}

BOOL CHistogramView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CHistogramView drawing

void CHistogramView::OnDraw(CDC* pDC)
{
	CHistogramDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	LPVOID lpBits;
	int w1,h1,w2,h2;
	w1 = w2 = h1 = h2 = 0;

	int tag = 0;
	if (bTag || gTag) 
		tag = 1; 
	else 
		tag = 0;

	if (lpSrc)
	{
		w1 = lpSrc->bmiHeader.biWidth;
		h1 = lpSrc->bmiHeader.biHeight;
		lpBits = (LPVOID)&lpSrc->bmiColors[lpSrc->bmiHeader.biClrUsed];

		StretchDIBits( 
			pDC->GetSafeHdc(),
			0,0,w1,h1,
			0,0,w1,h1,
			lpBits, // bitmap bits 
			lpSrc, // bitmap data 
			DIB_RGB_COLORS,
			SRCCOPY
			);

		pDC->BitBlt(w1 + GAP, GAP, 256, 100, &dcMemSrc_H[0],0,0,SRCCOPY);
		pDC->BitBlt(w1 + 2 * GAP + 256, GAP, 256, 100, &dcMemSrc_H[1],0,0,SRCCOPY);
		pDC->BitBlt(w1 + 3 * GAP + 256 * 2, GAP, 256, 100, &dcMemSrc_H[2],0,0,SRCCOPY);
	}
	//��ʾ��ɫͼ��
	if (lpGrey && gTag)
	{
		w1 = lpGrey->bmiHeader.biWidth;
		h1 = lpGrey->bmiHeader.biHeight;
		lpBits = (LPVOID)&lpGrey->bmiColors[lpGrey->bmiHeader.biClrUsed];

		StretchDIBits( 
			pDC->GetSafeHdc(),
			0,h1+GAP,w1,h1,
			0,0,w1,h1,
			lpBits, // bitmap bits 
			lpGrey, // bitmap data 
			DIB_RGB_COLORS,
			SRCCOPY
			);

		pDC->BitBlt(w1 + GAP, h1 + GAP, 256, 100, &dcMemGrey_H[0],0,0,SRCCOPY);
		pDC->BitBlt(w1 + 2 * GAP + 256, h1 + GAP, 256, 100, &dcMemGrey_H[1],0,0,SRCCOPY);
		pDC->BitBlt(w1 + 3 * GAP + 256 * 2,h1 + GAP, 256, 100, &dcMemGrey_H[2],0,0,SRCCOPY);
	}

	if (lpEqua && bTag)
	{
		lpBits = (LPVOID)&lpEqua->bmiColors[lpEqua->bmiHeader.biClrUsed];

		StretchDIBits( 
			pDC->GetSafeHdc(),
			0, h1 + GAP, w1, h1,
			0,0,w1,h1,
			lpBits, // bitmap bits 
			lpSrc, // bitmap data 
			DIB_RGB_COLORS,
			SRCCOPY
			);

		pDC->BitBlt(w1 + GAP, h1 + GAP, 256, 100, &dcMemEqua_H[0], 0, 0, SRCCOPY);
		pDC->BitBlt(w1 + 2 * GAP + 256, h1 + GAP, 256, 100, &dcMemEqua_H[1], 0, 0, SRCCOPY);
		pDC->BitBlt(w1 + 3 * GAP + 256 * 2, h1 + GAP, 256, 100, &dcMemEqua_H[2], 0, 0,SRCCOPY);
	}

	if (lpDest)
	{
		w2 = lpDest->bmiHeader.biWidth;
		h2 = lpDest->bmiHeader.biHeight;

		lpBits = (LPVOID)&lpDest->bmiColors[lpDest->bmiHeader.biClrUsed];

		StretchDIBits( 
			pDC->GetSafeHdc(),
			0, (h1 + GAP) + tag * (h1 + GAP), w2, h2,
			0, 0, w2, h2,
			lpBits, // bitmap bits 
			lpDest, // bitmap data 
			DIB_RGB_COLORS,
			SRCCOPY
			);

		pDC->BitBlt(w2 + GAP, (h1 + GAP) + tag * (h1 + GAP), 256, 100, &dcMemDest_H[0], 0, 0, SRCCOPY);
		pDC->BitBlt(w2 + 2 * GAP + 256, (h1 + GAP) + tag * (h1 + GAP), 256, 100, &dcMemDest_H[1], 0, 0, SRCCOPY);
		pDC->BitBlt(w2 + 3 * GAP + 256 * 2, (h1 + GAP) + tag * (h1 + GAP), 256, 100, &dcMemDest_H[2], 0, 0, SRCCOPY);
	}

	if (lpSpec)
	{
		lpBits = (LPVOID)&lpSpec->bmiColors[lpSpec->bmiHeader.biClrUsed];

		StretchDIBits( 
			pDC->GetSafeHdc(),
			0, (h1 + GAP) + tag * (h1 + GAP) + h2 + GAP, w1, h1,
			0, 0, w1, h1,
			lpBits, // bitmap bits 
			lpSpec, // bitmap data 
			DIB_RGB_COLORS,
			SRCCOPY
			);

		pDC->BitBlt(w1 + GAP, (h1 + GAP) + tag * (h1 + GAP) + h2 + GAP, 256, 100, &dcMemSpec_H[0], 0, 0, SRCCOPY);
		pDC->BitBlt(w1 + 2 * GAP + 256, (h1 + GAP) + tag * (h1 + GAP) + h2 + GAP, 256, 100, &dcMemSpec_H[1], 0, 0, SRCCOPY);
		pDC->BitBlt(w1 + 3 * GAP + 256 * 2, (h1 + GAP) + tag * (h1 + GAP) + h2 + GAP, 256, 100, &dcMemSpec_H[2], 0, 0, SRCCOPY);
	}
}

void CHistogramView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = 1300;
	sizeTotal.cy = 2550;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

/////////////////////////////////////////////////////////////////////////////
// CHistogramView printing

BOOL CHistogramView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CHistogramView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CHistogramView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CHistogramView diagnostics

#ifdef _DEBUG
void CHistogramView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CHistogramView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CHistogramDoc* CHistogramView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHistogramDoc)));
	return (CHistogramDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CHistogramView message handlers
BITMAPINFO* LoadBmpFile(char* BmpFileName);

void Histogram24(double H[][256], const LPBITMAPINFO lpDIB);
void DrawHistogram(CDC& dcMem, const double H[]);

void Equalize(BYTE map[], const double h[]);
void Specify(BYTE map[], const double src[], const double dst[]);

void Mapping24(LPBITMAPINFO lpDIB, const BYTE map[][256]);

extern LONG srcSize;


void CHistogramView::OnGrey(){
	
	if(NULL == lpGrey)
	{
		lpGrey = (LPBITMAPINFO)malloc(srcSize);
		memcpy(lpGrey, lpSrc, srcSize);
		
		int w = lpGrey->bmiHeader.biWidth;
		int h = lpGrey->bmiHeader.biHeight;
		
		

		BYTE* lpBits = (BYTE*)&lpGrey->bmiColors[lpGrey->bmiHeader.biClrUsed];
		
		int bit = lpGrey->bmiHeader.biBitCount;
		if (bit != 24){
			
		// this code can only make 16bits Grey.
			for(int i = 0;i < lpGrey->bmiHeader.biClrUsed;i++){
				int aver = (lpGrey->bmiColors[i].rgbRed + lpGrey->bmiColors[i].rgbGreen + lpGrey->bmiColors[i].rgbBlue)/3;
				lpGrey->bmiColors[i].rgbRed = aver;
				lpGrey->bmiColors[i].rgbGreen = aver;
				lpGrey->bmiColors[i].rgbBlue = aver;
			}
		}
		else{
			lpGrey->bmiHeader.biBitCount = 8;
			int LineBytes = (w*8+31)/32*4;
			int oldLineBytes = (w*24+31)/32*4;
			int oldSize = lpGrey->bmiHeader.biSizeImage;
			lpGrey->bmiHeader.biSizeImage = LineBytes * lpGrey->bmiHeader.biHeight;
			/*
			pColorTable = new RGBQUAD[256];
			for(int i = 0; i < 256; i++ )  
			 {  
			(*(pColorTable + i)).rgbBlue = i;  
			(*(pColorTable + i)).rgbGreen = i;  
			(*(pColorTable + i)).rgbRed = i;  
			(*(pColorTable + i)).rgbReserved = 0;  
			}
			*/
			
			int i, j;
			BYTE gray;
			int red, green, blue;
			for (i = 0; i < h; i ++)
			{
				for (j = 0; j < w; j ++)
				{
					red = *(lpBits + i*oldLineBytes + 3*j );  
					green = *(lpBits + i*oldLineBytes + 3*j + 1);  
					blue = *(lpBits + i*oldLineBytes + 3*j + 2);  
					gray = (BYTE)((77 * red + 151 * green + 28 * blue) >> 8);
					*(lpBits + i*LineBytes + j) = gray;

				/* ָ�����ص�(i,j)��ָ��
				pixel = lpBits + LineBytes * (h - 1 - i) + j;
				
				*/
				}
			}
		
		}
		
		/*
		BYTE map[3][256];
		Equalize(map[0], Grey_H[0]);
		Equalize(map[1], Grey_H[1]);
		Equalize(map[2], Grey_H[2]);
		Mapping24(lpGrey, map);
		*/
		
		//���㲢����ֱ��ͼ
		Histogram24(Grey_H, lpGrey);
		DrawHistogram(dcMemGrey_H[0], Grey_H[0]);
		DrawHistogram(dcMemGrey_H[1], Grey_H[1]);
		DrawHistogram(dcMemGrey_H[2], Grey_H[2]);

		gTag = TRUE;
	}
	else
		gTag = !gTag;

	Invalidate();
	
	
}


void CHistogramView::OnEqua() 
{
	// TODO: Add your command handler code here
	if (NULL == lpEqua)
	{
		lpEqua = (LPBITMAPINFO)malloc(srcSize);
		memcpy(lpEqua, lpSrc, srcSize);
		
		int w = lpEqua->bmiHeader.biWidth;
		int h = lpEqua->bmiHeader.biHeight;
		
		//���⻯
		BYTE map[3][256];
		Equalize(map[0], Src_H[0]);
		Equalize(map[1], Src_H[1]);
		Equalize(map[2], Src_H[2]);
		Mapping24(lpEqua, map);
		
		//���㲢����ֱ��ͼ
		Histogram24(Equa_H, lpEqua);
		DrawHistogram(dcMemEqua_H[0], Equa_H[0]);
		DrawHistogram(dcMemEqua_H[1], Equa_H[1]);
		DrawHistogram(dcMemEqua_H[2], Equa_H[2]);

		bTag = TRUE;
	}
	else 
		bTag = !bTag;

	Invalidate();
}

void CHistogramView::OnDest() 
{
	// TODO: Add your command handler code here
	static char BASED_CODE szFilter[]=
	"OMR Files(*.bmp)|*.bmp|All Files(*.*)|*.*||";
									   
	CFileDialog dlg(TRUE,NULL,NULL,NULL,szFilter,NULL);
	if (IDOK == dlg.DoModal())
	{
		CString csRPathName = dlg.GetPathName();
			// TODO: Add your specialized creation code here
		if (lpSpec) 
		{
			free(lpSpec);
			lpSpec = NULL;
		}

		if (lpDest) 
			free(lpDest);
		lpDest = LoadBmpFile((char*)(LPCTSTR(csRPathName)));

		//���㲢����ֱ��ͼ
		Histogram24(Dest_H, lpDest);
		DrawHistogram(dcMemDest_H[0], Dest_H[0]);
		DrawHistogram(dcMemDest_H[1], Dest_H[1]);
		DrawHistogram(dcMemDest_H[2], Dest_H[2]);
	}

	Invalidate();
}

void CHistogramView::OnSpec() 
{
	// TODO: Add your command handler code here
	if (lpSpec) 
		free(lpSpec);

	//����ԭͼ�񵽹涨��ͼ��
	lpSpec = (LPBITMAPINFO)malloc(srcSize);
	memcpy(lpSpec, lpSrc, srcSize);

	//�涨��
	BYTE map[3][256];
	Specify(map[0], Src_H[0], Dest_H[0]);
	Specify(map[1], Src_H[1], Dest_H[1]);
	Specify(map[2], Src_H[2], Dest_H[2]);
	Mapping24(lpSpec, map);

	//���㲢����ֱ��ͼ
	Histogram24(Spec_H, lpSpec);
	DrawHistogram(dcMemSpec_H[0], Spec_H[0]);
	DrawHistogram(dcMemSpec_H[1], Spec_H[1]);
	DrawHistogram(dcMemSpec_H[2], Spec_H[2]);

	Invalidate();	
}

void CHistogramView::OnUpdateGrey(CCmdUI* pCmdUI){
	// when image doesn't load yet,the G button is unable to press.
	pCmdUI->Enable(NULL != lpSrc);
	pCmdUI->SetCheck(gTag);
}

void CHistogramView::OnUpdateSpec(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(NULL != lpDest);
}

void CHistogramView::OnUpdateDest(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(NULL != lpSrc);
}

void CHistogramView::OnUpdateEqua(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(NULL != lpSrc);
	pCmdUI->SetCheck(bTag);
}
