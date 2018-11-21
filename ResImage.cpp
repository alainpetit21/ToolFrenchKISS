#include "stdafx.h"
#include "ToolFrenchKISS.h"
#include "ResImage.h"

CResImage::CResImage(const char* p_szName):
CRessource(p_szName)
{
	m_idPaneInput= IDD_IMAGE_INPUT;
	m_idPaneOutput= IDD_IMAGE_OUTPUT;
	m_idPanePreview= IDD_IMAGE_PREVIEW;
}

CResImage::~CResImage()
{

}
