// Dynamic.h : main header file for the DYNAMIC DLL
//

#if !defined(AFX_DYNAMIC_H__3A0A48DD_5565_4561_933A_0150FFDD5F23__INCLUDED_)
#define AFX_DYNAMIC_H__3A0A48DD_5565_4561_933A_0150FFDD5F23__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDynamicApp
// See Dynamic.cpp for the implementation of this class
//

class CDynamicApp : public CWinApp
{
public:
	CDynamicApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDynamicApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CDynamicApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DYNAMIC_H__3A0A48DD_5565_4561_933A_0150FFDD5F23__INCLUDED_)
