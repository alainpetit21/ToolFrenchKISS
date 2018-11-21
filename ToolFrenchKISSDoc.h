// ToolFrenchKISSDoc.h : interface of the CToolFrenchKISSDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TOOLFRENCHKISSDOC_H__29498BFA_88FE_4971_B734_954E298D4299__INCLUDED_)
#define AFX_TOOLFRENCHKISSDOC_H__29498BFA_88FE_4971_B734_954E298D4299__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <vector>
#include "Ressource.h"

using namespace std;

class CToolFrenchKISSDoc : public CDocument
{
protected: // create from serialization only
	CToolFrenchKISSDoc();
	DECLARE_DYNCREATE(CToolFrenchKISSDoc)

// Attributes
public:
	static CToolFrenchKISSDoc* ceci;
	CRessource**	m_resTypeRegistered;
	int				m_nbRegistration;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CToolFrenchKISSDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CToolFrenchKISSDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CToolFrenchKISSDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

inline CToolFrenchKISSDoc* GetDoc(){return CToolFrenchKISSDoc::ceci;}
/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TOOLFRENCHKISSDOC_H__29498BFA_88FE_4971_B734_954E298D4299__INCLUDED_)
