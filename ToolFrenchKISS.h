// ToolFrenchKISS.h : main header file for the TOOLFRENCHKISS application
//

#if !defined(AFX_TOOLFRENCHKISS_H__1B4A896B_AF0D_48BE_BAF9_B51EF74C7D6B__INCLUDED_)
#define AFX_TOOLFRENCHKISS_H__1B4A896B_AF0D_48BE_BAF9_B51EF74C7D6B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CToolFrenchKISSApp:
// See ToolFrenchKISS.cpp for the implementation of this class
//

class CToolFrenchKISSApp : public CWinApp
{
public:
	CToolFrenchKISSApp();
	static CToolFrenchKISSApp* ceci;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CToolFrenchKISSApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CToolFrenchKISSApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

inline CToolFrenchKISSApp* GetApp(){return CToolFrenchKISSApp::ceci;}

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TOOLFRENCHKISS_H__1B4A896B_AF0D_48BE_BAF9_B51EF74C7D6B__INCLUDED_)
