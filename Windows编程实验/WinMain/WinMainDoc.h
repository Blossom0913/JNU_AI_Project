// WinMainDoc.h : interface of the CWinMainDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_WINMAINDOC_H__6947B5CC_B995_4F17_8223_4C80A9F7CAA4__INCLUDED_)
#define AFX_WINMAINDOC_H__6947B5CC_B995_4F17_8223_4C80A9F7CAA4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CWinMainDoc : public CDocument
{
protected: // create from serialization only
	CWinMainDoc();
	DECLARE_DYNCREATE(CWinMainDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWinMainDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CWinMainDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CWinMainDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WINMAINDOC_H__6947B5CC_B995_4F17_8223_4C80A9F7CAA4__INCLUDED_)
