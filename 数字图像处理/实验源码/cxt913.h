// cxt913.h : main header file for the CXT913 application
//

#if !defined(AFX_CXT913_H__D65A24AA_9D65_4DDF_A3EE_60E20480FE0B__INCLUDED_)
#define AFX_CXT913_H__D65A24AA_9D65_4DDF_A3EE_60E20480FE0B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCxt913App:
// See cxt913.cpp for the implementation of this class
//

class CCxt913App : public CWinApp
{
public:
	CCxt913App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCxt913App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CCxt913App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CXT913_H__D65A24AA_9D65_4DDF_A3EE_60E20480FE0B__INCLUDED_)
