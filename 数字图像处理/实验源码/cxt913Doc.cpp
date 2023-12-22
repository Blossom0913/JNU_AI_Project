// cxt913Doc.cpp : implementation of the CCxt913Doc class
//

#include "stdafx.h"
#include "cxt913.h"

#include "cxt913Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCxt913Doc

IMPLEMENT_DYNCREATE(CCxt913Doc, CDocument)

BEGIN_MESSAGE_MAP(CCxt913Doc, CDocument)
	//{{AFX_MSG_MAP(CCxt913Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCxt913Doc construction/destruction

CCxt913Doc::CCxt913Doc()
{
	// TODO: add one-time construction code here

}

CCxt913Doc::~CCxt913Doc()
{
}

BOOL CCxt913Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCxt913Doc serialization

void CCxt913Doc::Serialize(CArchive& ar)
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
// CCxt913Doc diagnostics

#ifdef _DEBUG
void CCxt913Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCxt913Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCxt913Doc commands
BOOL LoadBmpFile(char* BmpFile);
BOOL CCxt913Doc::OnOpenDocument(LPCTSTR lpszPathName) 
{
	if (!CDocument::OnOpenDocument(lpszPathName))
		return FALSE;
	
	// TODO: Add your specialized creation code here
	LoadBmpFile((char*) lpszPathName);
	
	return TRUE;
}
