// HistogramDoc.cpp : implementation of the CHistogramDoc class
//

#include "stdafx.h"
#include "Histogram.h"
#include "MainFrm.h"
#include "HistogramDoc.h"
#include "HistogramView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHistogramDoc

IMPLEMENT_DYNCREATE(CHistogramDoc, CDocument)

BEGIN_MESSAGE_MAP(CHistogramDoc, CDocument)
	//{{AFX_MSG_MAP(CHistogramDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHistogramDoc construction/destruction

CHistogramDoc::CHistogramDoc()
{
	// TODO: add one-time construction code here

}

CHistogramDoc::~CHistogramDoc()
{
}

BOOL CHistogramDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CHistogramDoc serialization

void CHistogramDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CHistogramDoc diagnostics

#ifdef _DEBUG
void CHistogramDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CHistogramDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CHistogramDoc commands

extern BITMAPINFO* lpGrey;

extern BITMAPINFO* lpSrc;
extern BITMAPINFO* lpEqua;
extern BITMAPINFO* lpDest;
extern BITMAPINFO* lpSpec;

BITMAPINFO* LoadBmpFile(char* BmpFileName);

extern double Src_H[3][256];
extern CDC dcMemSrc_H[3];

void Histogram24(double H[][256], const LPBITMAPINFO lpDIB);
void DrawHistogram(CDC& dcMem, const double H[]);

extern LONG size;
LONG srcSize = 0;

BOOL CHistogramDoc::OnOpenDocument(LPCTSTR lpszPathName) 
{
	if (!CDocument::OnOpenDocument(lpszPathName))
		return FALSE;
	
	// TODO: Add your specialized creation code here
	if(lpGrey)
	{
		free(lpGrey);
		lpGrey = NULL;
	}

	if (lpSrc) 
	{
		free(lpSrc);
		lpSrc = NULL;
	}
	if (lpEqua) 
	{
		free(lpEqua);
		lpEqua = NULL;
	}
	if (lpDest) 
	{
		free(lpDest);
		lpDest = NULL;
	}
	if (lpSpec) 
	{
		free(lpSpec);
		lpSpec = NULL;
	}
	CMainFrame* pFrame = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	CHistogramView* pView = (CHistogramView*)pFrame->GetActiveView();
	pView->bTag = FALSE;

	//加载原始图像
	lpSrc = LoadBmpFile((char*) lpszPathName);
	srcSize = size;
	//计算原始图像的直方图
	Histogram24(Src_H,lpSrc);

	//（在内存中）绘制原始图像的直方图
	DrawHistogram(dcMemSrc_H[0], Src_H[0]);
	DrawHistogram(dcMemSrc_H[1], Src_H[1]);
	DrawHistogram(dcMemSrc_H[2], Src_H[2]);

	return TRUE;
}
