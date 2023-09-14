// WinMainDoc.cpp : implementation of the CWinMainDoc class
//

#include "stdafx.h"
#include "WinMain.h"

#include "WinMainDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CWinMainDoc

IMPLEMENT_DYNCREATE(CWinMainDoc, CDocument)

BEGIN_MESSAGE_MAP(CWinMainDoc, CDocument)
	//{{AFX_MSG_MAP(CWinMainDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWinMainDoc construction/destruction

CWinMainDoc::CWinMainDoc()
{
	// TODO: add one-time construction code here

}

CWinMainDoc::~CWinMainDoc()
{
}

BOOL CWinMainDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CWinMainDoc serialization

void CWinMainDoc::Serialize(CArchive& ar)
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
// CWinMainDoc diagnostics

#ifdef _DEBUG
void CWinMainDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CWinMainDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CWinMainDoc commands
