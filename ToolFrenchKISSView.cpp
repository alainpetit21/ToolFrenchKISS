// ToolFrenchKISSView.cpp : implementation of the CToolFrenchKISSView class
//

#include "stdafx.h"
#include "ToolFrenchKISS.h"

#include "ToolFrenchKISSDoc.h"
#include "ToolFrenchKISSView.h"
#include "LeftView.h"
#include "global.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


CToolFrenchKISSView* CToolFrenchKISSView::ceci=0;
/////////////////////////////////////////////////////////////////////////////
// CToolFrenchKISSView

IMPLEMENT_DYNCREATE(CToolFrenchKISSView, CFormView)

BEGIN_MESSAGE_MAP(CToolFrenchKISSView, CFormView)
	//{{AFX_MSG_MAP(CToolFrenchKISSView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CToolFrenchKISSView construction/destruction

CToolFrenchKISSView::CToolFrenchKISSView()
	: CFormView(CToolFrenchKISSView::IDD),
	m_ctrlPropertySheet(0),
	m_ctrlPropertyPage1(0),
	m_ctrlPropertyPage2(0),
	m_ctrlPropertyPage3(0)
{
	//{{AFX_DATA_INIT(CToolFrenchKISSView)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// TODO: add construction code here

	CToolFrenchKISSView::ceci= this;
}

CToolFrenchKISSView::~CToolFrenchKISSView()
{
	if(m_ctrlPropertySheet)	{delete m_ctrlPropertySheet;m_ctrlPropertySheet=0;}
	if(m_ctrlPropertyPage1)	{delete m_ctrlPropertyPage1;m_ctrlPropertyPage1=0;}
	if(m_ctrlPropertyPage2)	{delete m_ctrlPropertyPage2;m_ctrlPropertyPage2=0;}
	if(m_ctrlPropertyPage3)	{delete m_ctrlPropertyPage3;m_ctrlPropertyPage3=0;}
}

void CToolFrenchKISSView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CToolFrenchKISSView)
	//}}AFX_DATA_MAP
}

BOOL CToolFrenchKISSView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

DLGTEMPLATE* apRes[3];
void CToolFrenchKISSView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();
}

/////////////////////////////////////////////////////////////////////////////
// CToolFrenchKISSView printing

BOOL CToolFrenchKISSView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CToolFrenchKISSView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CToolFrenchKISSView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CToolFrenchKISSView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CToolFrenchKISSView diagnostics

#ifdef _DEBUG
void CToolFrenchKISSView::AssertValid() const
{
	CFormView::AssertValid();
}

void CToolFrenchKISSView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CToolFrenchKISSDoc* CToolFrenchKISSView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CToolFrenchKISSDoc)));
	return (CToolFrenchKISSDoc*)m_pDocument;
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CToolFrenchKISSView message handlers

void CToolFrenchKISSView::OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint) 
{
	if(pSender == CLeftView::ceci){
		if(m_ctrlPropertyPage1)	{delete m_ctrlPropertyPage1;m_ctrlPropertyPage1=0;}
		if(m_ctrlPropertyPage2)	{delete m_ctrlPropertyPage2;m_ctrlPropertyPage2=0;}
		if(m_ctrlPropertyPage3)	{delete m_ctrlPropertyPage3;m_ctrlPropertyPage3=0;}
		if(m_ctrlPropertySheet)	{delete m_ctrlPropertySheet;m_ctrlPropertySheet=0;}
		
		m_ctrlPropertySheet= new CViewPropertySheet("Heuu", this, 0);
		m_ctrlPropertySheet->AddPage(m_ctrlPropertyPage1= new CViewPropertyPage(((CRessource*)lHint)->m_idPaneInput));
		m_ctrlPropertySheet->AddPage(m_ctrlPropertyPage2= new CViewPropertyPage(((CRessource*)lHint)->m_idPaneOutput));
		m_ctrlPropertySheet->AddPage(m_ctrlPropertyPage3= new CViewPropertyPage(((CRessource*)lHint)->m_idPanePreview));
		m_ctrlPropertySheet->Create(this);

		this->GetWindow(GW_CHILD)->SetWindowPos(&wndTop, 5, 5, 0, 0, SWP_NOSIZE);
	}
}

BOOL CToolFrenchKISSView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	BOOL ret= CFormView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);

	return ret;
}
