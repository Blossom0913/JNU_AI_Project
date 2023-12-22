// Histogram.h : main header file for the HISTOGRAM application
//

#if !defined(AFX_HISTOGRAM_H__7BB2637E_A909_4270_837E_7C19E42AF7C7__INCLUDED_)
#define AFX_HISTOGRAM_H__7BB2637E_A909_4270_837E_7C19E42AF7C7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CHistogramApp:
// See Histogram.cpp for the implementation of this class
//

class CHistogramApp : public CWinApp
{
public:
	CHistogramApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHistogramApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CHistogramApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HISTOGRAM_H__7BB2637E_A909_4270_837E_7C19E42AF7C7__INCLUDED_)
