// HistogramView.h : interface of the CHistogramView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_HISTOGRAMVIEW_H__D59625E3_210E_4B4E_85C4_D6A25C598F43__INCLUDED_)
#define AFX_HISTOGRAMVIEW_H__D59625E3_210E_4B4E_85C4_D6A25C598F43__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CHistogramView : public CScrollView
{
protected: // create from serialization only
	CHistogramView();
	DECLARE_DYNCREATE(CHistogramView)

// Attributes
public:
	CHistogramDoc* GetDocument();

// Operations
public:
	BOOL bTag;
	BOOL gTag;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHistogramView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CHistogramView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	
// Generated message map functions
protected:
	//{{AFX_MSG(CHistogramView)
	afx_msg void OnGrey();
	afx_msg void OnSpec();
	afx_msg void OnDest();
	afx_msg void OnEqua();
	afx_msg void OnUpdateGrey(CCmdUI* pCmdUI);
	afx_msg void OnUpdateSpec(CCmdUI* pCmdUI);
	afx_msg void OnUpdateDest(CCmdUI* pCmdUI);
	afx_msg void OnUpdateEqua(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in HistogramView.cpp
inline CHistogramDoc* CHistogramView::GetDocument()
   { return (CHistogramDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HISTOGRAMVIEW_H__D59625E3_210E_4B4E_85C4_D6A25C598F43__INCLUDED_)
