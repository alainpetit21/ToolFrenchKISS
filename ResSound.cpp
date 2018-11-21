#include "stdafx.h"
#include "ToolFrenchKISS.h"
#include "ResSound.h"

CResSound::CResSound(const char* p_szName):
CRessource(p_szName)
{
	m_idPaneInput= IDD_SOUND_INPUT;
	m_idPaneOutput= IDD_SOUND_OUTPUT;
	m_idPanePreview= IDD_SOUND_PREVIEW;
}

CResSound::~CResSound()
{

}
