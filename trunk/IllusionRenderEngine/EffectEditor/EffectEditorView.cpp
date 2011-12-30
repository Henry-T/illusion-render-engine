
// EffectEditorView.cpp : CEffectEditorView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EffectEditor.h"
#endif

#include "EffectEditorDoc.h"
#include "EffectEditorView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEffectEditorView

IMPLEMENT_DYNCREATE(CEffectEditorView, CView)

BEGIN_MESSAGE_MAP(CEffectEditorView, CView)
END_MESSAGE_MAP()

// CEffectEditorView ����/����

CEffectEditorView::CEffectEditorView()
{
	// TODO: �ڴ˴���ӹ������

}

CEffectEditorView::~CEffectEditorView()
{
}

BOOL CEffectEditorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEffectEditorView ����

void CEffectEditorView::OnDraw(CDC* /*pDC*/)
{
	CEffectEditorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEffectEditorView ���

#ifdef _DEBUG
void CEffectEditorView::AssertValid() const
{
	CView::AssertValid();
}

void CEffectEditorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEffectEditorDoc* CEffectEditorView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEffectEditorDoc)));
	return (CEffectEditorDoc*)m_pDocument;
}
#endif //_DEBUG


// CEffectEditorView ��Ϣ�������
