// duihua.cpp : implementation file
//

#include "stdafx.h"
#include "WinMain.h"
#include "duihua.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// duihua dialog


duihua::duihua(CWnd* pParent /*=NULL*/)
	: CDialog(duihua::IDD, pParent)
{
	//{{AFX_DATA_INIT(duihua)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void duihua::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(duihua)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(duihua, CDialog)
	//{{AFX_MSG_MAP(duihua)
	ON_COMMAND(ID_FILE_PRINT, OnFilePrint)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// duihua message handlers

void duihua::OnFilePrint() 
{
	// TODO: Add your command handler code here
	
}
