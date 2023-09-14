#if !defined(AFX_DUIHUA_H__97DF3A26_B81A_4A8A_9CED_BB172EC7AC74__INCLUDED_)
#define AFX_DUIHUA_H__97DF3A26_B81A_4A8A_9CED_BB172EC7AC74__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// duihua.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// duihua dialog

class duihua : public CDialog
{
// Construction
public:
	duihua(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(duihua)
	enum { IDD = IDD_DIALOGBAR };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(duihua)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(duihua)
	afx_msg void OnFilePrint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DUIHUA_H__97DF3A26_B81A_4A8A_9CED_BB172EC7AC74__INCLUDED_)
