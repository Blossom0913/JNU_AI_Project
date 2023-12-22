// cxt913Doc.h : interface of the CCxt913Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CXT913DOC_H__7DE10472_B893_4A32_BB94_082357ED9BA4__INCLUDED_)
#define AFX_CXT913DOC_H__7DE10472_B893_4A32_BB94_082357ED9BA4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCxt913Doc : public CDocument
{
protected: // create from serialization only
	CCxt913Doc();
	DECLARE_DYNCREATE(CCxt913Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCxt913Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCxt913Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCxt913Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CXT913DOC_H__7DE10472_B893_4A32_BB94_082357ED9BA4__INCLUDED_)
