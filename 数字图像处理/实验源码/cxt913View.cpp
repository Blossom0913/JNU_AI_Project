// cxt913View.cpp : implementation of the CCxt913View class
//

#include "stdafx.h"
#include "cxt913.h"

#include "cxt913Doc.h"
#include "cxt913View.h"
#include "HistogramDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCxt913View

IMPLEMENT_DYNCREATE(CCxt913View, CScrollView)

BEGIN_MESSAGE_MAP(CCxt913View, CScrollView)
	//{{AFX_MSG_MAP(CCxt913View)
	ON_COMMAND(ID_GRAY, OnGray)
	ON_UPDATE_COMMAND_UI(ID_GRAY, OnUpdateGray)
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_HISTOGRAM, OnHistogram)
	ON_UPDATE_COMMAND_UI(ID_HISTOGRAM, OnUpdateHistogram)
	ON_COMMAND(ID_LINETRANS, OnLinetrans)
	ON_UPDATE_COMMAND_UI(ID_LINETRANS, OnUpdateLinetrans)
	ON_COMMAND(ID_EQUALIZE, OnEqualize)
	ON_UPDATE_COMMAND_UI(ID_EQUALIZE, OnUpdateEqualize)
	ON_COMMAND(ID_FT, OnFt)
	ON_UPDATE_COMMAND_UI(ID_FT, OnUpdateFt)
	ON_COMMAND(ID_IFT, OnIft)
	ON_UPDATE_COMMAND_UI(ID_IFT, OnUpdateIft)
	ON_COMMAND(ID_FFT, OnFft)
	ON_UPDATE_COMMAND_UI(ID_FFT, OnUpdateFft)
	ON_COMMAND(ID_IFFT, OnIfft)
	ON_UPDATE_COMMAND_UI(ID_IFFT, OnUpdateIfft)
	ON_COMMAND(ID_RAPLAS_SHARP, OnRaplasSharp)
	ON_UPDATE_COMMAND_UI(ID_RAPLAS_SHARP, OnUpdateRaplasSharp)
	ON_COMMAND(ID_MID_SMOOTH, OnMidSmooth)
	ON_UPDATE_COMMAND_UI(ID_MID_SMOOTH, OnUpdateMidSmooth)
	ON_COMMAND(ID_GRAD_SHARP, OnGradSharp)
	ON_UPDATE_COMMAND_UI(ID_GRAD_SHARP, OnUpdateGradSharp)
	ON_COMMAND(ID_AVG_SMOOTH, OnAvgSmooth)
	ON_UPDATE_COMMAND_UI(ID_AVG_SMOOTH, OnUpdateAvgSmooth)
	ON_COMMAND(ID_FFT_FILTER_IDEA, OnFftFilterIdea)
	ON_UPDATE_COMMAND_UI(ID_FFT_FILTER_IDEA, OnUpdateFftFilterIdea)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCxt913View construction/destruction

CCxt913View::CCxt913View()
{
	// TODO: add construction code here

}

CCxt913View::~CCxt913View()
{
}

BOOL CCxt913View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCxt913View drawing

extern BITMAPINFO* lpBitsInfo;
extern BITMAPINFO*  lpDIB_FT;
extern BITMAPINFO* lpDIB_IFT;


void CCxt913View::OnDraw(CDC* pDC)
{
	CCxt913Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	if(NULL == lpBitsInfo)
		return;
	
	void* lpBits = &lpBitsInfo->bmiColors[lpBitsInfo->bmiHeader.biClrUsed];

	StretchDIBits(pDC->GetSafeHdc(),
		0,0, lpBitsInfo->bmiHeader.biWidth,lpBitsInfo->bmiHeader.biHeight,
		0,0, lpBitsInfo->bmiHeader.biWidth,lpBitsInfo->bmiHeader.biHeight,
		lpBits, lpBitsInfo,
		DIB_RGB_COLORS,
		SRCCOPY);
	if(lpDIB_FT)
	{
		void* lpBits = &lpDIB_FT->bmiColors[lpDIB_FT->bmiHeader.biClrUsed];

	StretchDIBits(pDC->GetSafeHdc(),
		600,0, lpDIB_FT->bmiHeader.biWidth,lpDIB_FT->bmiHeader.biHeight,
		0,0, lpDIB_FT->bmiHeader.biWidth,lpDIB_FT->bmiHeader.biHeight,
		lpBits, lpDIB_FT,
		DIB_RGB_COLORS,
		SRCCOPY);
	}
	
	// TODO: add draw code for native data here
}	

void CCxt913View::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 1200;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

/////////////////////////////////////////////////////////////////////////////
// CCxt913View printing

BOOL CCxt913View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCxt913View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCxt913View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCxt913View diagnostics

#ifdef _DEBUG
void CCxt913View::AssertValid() const
{
	CScrollView::AssertValid();
}

void CCxt913View::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CCxt913Doc* CCxt913View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCxt913Doc)));
	return (CCxt913Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCxt913View message handlers
void gray();
void CCxt913View::OnGray() 
{
	// TODO: Add your command handler code here
	gray();
	Invalidate();
}

void CCxt913View::OnUpdateGray(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	
}
void pixel(int i,int j, char* str);
void CCxt913View::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	// 坐标原点位于左上角
	char xy[100];
	memset(xy,0,100);
	sprintf(xy,"x:%d y:%d ", point.x,point.y);

	char rgb[100];
	memset(rgb,0,100);
	pixel(point.y, point.x,rgb);

	strcat(xy,rgb);

	((CFrameWnd*)GetParent())->SetMessageText(xy);

	CScrollView::OnMouseMove(nFlags, point);
}

void CCxt913View::OnHistogram() 
{
	// TODO: Add your command handler code here
	CHistogramDlg dlg;
	dlg.DoModal();
	
}

void CCxt913View::OnUpdateHistogram(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}

void LineTrans(float,float);

void CCxt913View::OnLinetrans() 
{
	// TODO: Add your command handler code here
	LineTrans(2,-100);
	Invalidate();
}
BOOL IsGray();
void CCxt913View::OnUpdateLinetrans(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && IsGray());

}
void Equalize();
void CCxt913View::OnEqualize() 
{
	// TODO: Add your command handler code here
	Equalize();
	Invalidate();
}

void CCxt913View::OnUpdateEqualize(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && IsGray());
}

void Fourier();

void CCxt913View::OnFt() 
{
	Fourier();
	Invalidate();
	// TODO: Add your command handler code here
	
}

void CCxt913View::OnUpdateFt(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && IsGray());
}

void IFourier();

void CCxt913View::OnIft() 
{
	IFourier();
	Invalidate();
	
	// TODO: Add your command handler code here
	
}
BOOL FD_Available();

void CCxt913View::OnUpdateIft(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(FD_Available() && NULL == lpDIB_IFT);
}

BOOL is_gFD_OK();
void FFourier();


void CCxt913View::OnFft() 
{
	// TODO: Add your command handler code here
	if (lpDIB_FT)
	{
		free(lpDIB_FT);
		lpDIB_FT = NULL;
	}

	if (lpDIB_IFT)
	{
		free(lpDIB_IFT);
		lpDIB_IFT = NULL;
	} 

	FFourier();
	Invalidate();

}

void CCxt913View::OnUpdateFft(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && IsGray()); 
}



void IFFourier();
void CCxt913View::OnIfft() 
{
	// TODO: Add your command handler code here
	if (lpDIB_IFT)
{
		free(lpDIB_IFT);
lpDIB_IFT = NULL;
	}

	IFFourier();
	Invalidate();
}


void CCxt913View:: OnUpdateIfft (CCmdUI* pCmdUI) 
{
	pCmdUI->Enable(is_gFD_OK());
}

void RaplasSharp();

void CCxt913View::OnRaplasSharp() 
{
	// TODO: Add your command handler code here
	RaplasSharp();
	Invalidate();
	
}

void CCxt913View::OnUpdateRaplasSharp(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	
}

void MidSmooth();

void CCxt913View::OnMidSmooth() 
{
	// TODO: Add your command handler code here
	MidSmooth();
	Invalidate();
}

void CCxt913View::OnUpdateMidSmooth(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && IsGray()); 
	
}

void GradSharp();

void CCxt913View::OnGradSharp() 
{
	// TODO: Add your command handler code here
	GradSharp();
	Invalidate();
	
}

void CCxt913View::OnUpdateGradSharp(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	
}
void AvgSmooth();
void CCxt913View::OnAvgSmooth() 
{
	// TODO: Add your command handler code here
	AvgSmooth();
	Invalidate();
}

void CCxt913View::OnUpdateAvgSmooth(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && IsGray()); 
	
}

void FFT_Filter(int D);
void CCxt913View::OnFftFilterIdea() 
{
	// TODO: Add your command handler code here
	Invalidate();
}

void CCxt913View::OnUpdateFftFilterIdea(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	
}
