// WinMainView.cpp : implementation of the CWinMainView class
//

#include "stdafx.h"
#include "WinMain.h"

#include "WinMainDoc.h"
#include "WinMainView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWinMainView

IMPLEMENT_DYNCREATE(CWinMainView, CView)

BEGIN_MESSAGE_MAP(CWinMainView, CView)
	//{{AFX_MSG_MAP(CWinMainView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWinMainView construction/destruction

CWinMainView::CWinMainView()
{
	// TODO: add construction code here

}

CWinMainView::~CWinMainView()
{
}

BOOL CWinMainView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CWinMainView drawing

void CWinMainView::OnDraw(CDC* pDC)
{
	CWinMainDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CWinMainView printing

BOOL CWinMainView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CWinMainView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
	CDialog dlg;
		dlg.DoModal();
}

void CWinMainView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}




/////////////////////////////////////////////////////////////////////////////
// CWinMainView diagnostics

#ifdef _DEBUG
void CWinMainView::AssertValid() const
{
	CView::AssertValid();
}

void CWinMainView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWinMainDoc* CWinMainView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWinMainDoc)));
	return (CWinMainDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CWinMainView message handlers
