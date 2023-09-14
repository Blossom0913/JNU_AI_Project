#if !defined(AFX_MODULEDIALOG_H__76AE5D5D_87E7_44C1_9F87_C935B81F4E22__INCLUDED_)
#define AFX_MODULEDIALOG_H__76AE5D5D_87E7_44C1_9F87_C935B81F4E22__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ModuleDIalog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ModuleDIalog dialog

class ModuleDIalog : public CDialog
{
// Construction
public:
	ModuleDIalog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ModuleDIalog)
	enum { IDD = IDD_MODULEDIALOG_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ModuleDIalog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ModuleDIalog)
	afx_msg void OnChangeEdit1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MODULEDIALOG_H__76AE5D5D_87E7_44C1_9F87_C935B81F4E22__INCLUDED_)
