
// EffectEditor.h : EffectEditor Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CEffectEditorApp:
// �йش����ʵ�֣������ EffectEditor.cpp
//

class CEffectEditorApp : public CWinApp
{
public:
	CEffectEditorApp();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEffectEditorApp theApp;
