// ModuleDIalog.cpp : implementation file
//

#include "stdafx.h"
#include "WinMain.h"
#include "ModuleDIalog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ModuleDIalog dialog


ModuleDIalog::ModuleDIalog(CWnd* pParent /*=NULL*/)
	: CDialog(ModuleDIalog::IDD, pParent)
{
	//{{AFX_DATA_INIT(ModuleDIalog)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void ModuleDIalog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ModuleDIalog)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ModuleDIalog, CDialog)
	//{{AFX_MSG_MAP(ModuleDIalog)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ModuleDIalog message handlers

void ModuleDIalog::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}
