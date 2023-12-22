// HistogramDoc.h : interface of the CHistogramDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_HISTOGRAMDOC_H__69F6836F_4A8B_4F08_95D4_140515CC0619__INCLUDED_)
#define AFX_HISTOGRAMDOC_H__69F6836F_4A8B_4F08_95D4_140515CC0619__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CHistogramDoc : public CDocument
{
protected: // create from serialization only
	CHistogramDoc();
	DECLARE_DYNCREATE(CHistogramDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHistogramDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CHistogramDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CHistogramDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HISTOGRAMDOC_H__69F6836F_4A8B_4F08_95D4_140515CC0619__INCLUDED_)
