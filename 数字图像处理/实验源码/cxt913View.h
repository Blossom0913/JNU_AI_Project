// cxt913View.h : interface of the CCxt913View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CXT913VIEW_H__3943AF9D_4C5C_4596_B3D1_FE13794E666F__INCLUDED_)
#define AFX_CXT913VIEW_H__3943AF9D_4C5C_4596_B3D1_FE13794E666F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCxt913View : public CScrollView
{
protected: // create from serialization only
	CCxt913View();
	DECLARE_DYNCREATE(CCxt913View)

// Attributes
public:
	CCxt913Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCxt913View)
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
	virtual ~CCxt913View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCxt913View)
	afx_msg void OnGray();
	afx_msg void OnUpdateGray(CCmdUI* pCmdUI);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnHistogram();
	afx_msg void OnUpdateHistogram(CCmdUI* pCmdUI);
	afx_msg void OnLinetrans();
	afx_msg void OnUpdateLinetrans(CCmdUI* pCmdUI);
	afx_msg void OnEqualize();
	afx_msg void OnUpdateEqualize(CCmdUI* pCmdUI);
	afx_msg void OnFt();
	afx_msg void OnUpdateFt(CCmdUI* pCmdUI);
	afx_msg void OnIft();
	afx_msg void OnUpdateIft(CCmdUI* pCmdUI);
	afx_msg void OnFft();
	afx_msg void OnUpdateFft(CCmdUI* pCmdUI);
	afx_msg void OnIfft();
	afx_msg void OnUpdateIfft(CCmdUI* pCmdUI);
	afx_msg void OnRaplasSharp();
	afx_msg void OnUpdateRaplasSharp(CCmdUI* pCmdUI);
	afx_msg void OnMidSmooth();
	afx_msg void OnUpdateMidSmooth(CCmdUI* pCmdUI);
	afx_msg void OnGradSharp();
	afx_msg void OnUpdateGradSharp(CCmdUI* pCmdUI);
	afx_msg void OnAvgSmooth();
	afx_msg void OnUpdateAvgSmooth(CCmdUI* pCmdUI);
	afx_msg void OnFftFilterIdea();
	afx_msg void OnUpdateFftFilterIdea(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in cxt913View.cpp
inline CCxt913Doc* CCxt913View::GetDocument()
   { return (CCxt913Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CXT913VIEW_H__3943AF9D_4C5C_4596_B3D1_FE13794E666F__INCLUDED_)
