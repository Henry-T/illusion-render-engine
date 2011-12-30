
// EffectEditorView.h : CEffectEditorView ��Ľӿ�
//

#pragma once


class CEffectEditorView : public CView
{
protected: // �������л�����
	CEffectEditorView();
	DECLARE_DYNCREATE(CEffectEditorView)

// ����
public:
	CEffectEditorDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEffectEditorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // EffectEditorView.cpp �еĵ��԰汾
inline CEffectEditorDoc* CEffectEditorView::GetDocument() const
   { return reinterpret_cast<CEffectEditorDoc*>(m_pDocument); }
#endif

