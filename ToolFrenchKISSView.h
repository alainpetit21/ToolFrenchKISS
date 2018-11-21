// ToolFrenchKISSView.h : interface of the CToolFrenchKISSView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TOOLFRENCHKISSVIEW_H__89E6D6B7_72F9_42C1_B908_A53B9D20F866__INCLUDED_)
#define AFX_TOOLFRENCHKISSVIEW_H__89E6D6B7_72F9_42C1_B908_A53B9D20F866__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ViewPropertyPage/ViewPropertySheet.h"
#include "ViewPropertyPage/ViewPropertyPage.h"

class CToolFrenchKISSView : public CFormView
{
protected: // create from serialization only
	CToolFrenchKISSView();
	DECLARE_DYNCREATE(CToolFrenchKISSView)

public:
	//{{AFX_DATA(CToolFrenchKISSView)
	enum { IDD = IDD_TOOLFRENCHKISS_FORM };
	//}}AFX_DATA

// Attributes
public:
	static CToolFrenchKISSView* ceci;
	CToolFrenchKISSDoc* GetDocument();

// Operations
public:
	CViewPropertySheet	*m_ctrlPropertySheet;
	CViewPropertyPage	*m_ctrlPropertyPage1;
	CViewPropertyPage	*m_ctrlPropertyPage2;
	CViewPropertyPage	*m_ctrlPropertyPage3;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CToolFrenchKISSView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CToolFrenchKISSView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CToolFrenchKISSView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

inline CToolFrenchKISSView* GetRightView(){return CToolFrenchKISSView::ceci;}

#ifndef _DEBUG  // debug version in ToolFrenchKISSView.cpp
inline CToolFrenchKISSDoc* CToolFrenchKISSView::GetDocument()
   { return (CToolFrenchKISSDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TOOLFRENCHKISSVIEW_H__89E6D6B7_72F9_42C1_B908_A53B9D20F866__INCLUDED_)
