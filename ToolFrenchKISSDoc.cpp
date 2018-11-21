// ToolFrenchKISSDoc.cpp : implementation of the CToolFrenchKISSDoc class
//

#include "stdafx.h"
#include "ToolFrenchKISS.h"

#include "ToolFrenchKISSDoc.h"
#include "ResImage.h"
#include "ResSound.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

CToolFrenchKISSDoc* CToolFrenchKISSDoc::ceci=0;
/////////////////////////////////////////////////////////////////////////////
// CToolFrenchKISSDoc

IMPLEMENT_DYNCREATE(CToolFrenchKISSDoc, CDocument)

BEGIN_MESSAGE_MAP(CToolFrenchKISSDoc, CDocument)
	//{{AFX_MSG_MAP(CToolFrenchKISSDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CToolFrenchKISSDoc construction/destruction

CToolFrenchKISSDoc::CToolFrenchKISSDoc()
{
	CToolFrenchKISSDoc::ceci= this;

	//Add registered ressources types
	m_nbRegistration= 2;
	m_resTypeRegistered= new CRessource*[m_nbRegistration];
	m_resTypeRegistered[0]= new CResImage("RES_IMAGES");
	m_resTypeRegistered[1]= new CResSound("RES_SOUNDS");
}

CToolFrenchKISSDoc::~CToolFrenchKISSDoc()
{
	for(int i=0; i < m_nbRegistration; ++i){
		delete m_resTypeRegistered[i];
	}
	delete []m_resTypeRegistered;
}

BOOL CToolFrenchKISSDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CToolFrenchKISSDoc serialization

void CToolFrenchKISSDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CToolFrenchKISSDoc diagnostics

#ifdef _DEBUG
void CToolFrenchKISSDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CToolFrenchKISSDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CToolFrenchKISSDoc commands
