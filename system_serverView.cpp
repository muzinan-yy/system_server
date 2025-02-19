﻿
// system_serverView.cpp: CsystemserverView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "system_server.h"
#endif

#include "system_serverDoc.h"
#include "system_serverView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CsystemserverView

IMPLEMENT_DYNCREATE(CsystemserverView, CView)

BEGIN_MESSAGE_MAP(CsystemserverView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CsystemserverView 构造/析构

CsystemserverView::CsystemserverView() noexcept
{
	// TODO: 在此处添加构造代码

}

CsystemserverView::~CsystemserverView()
{
}

BOOL CsystemserverView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CsystemserverView 绘图

void CsystemserverView::OnDraw(CDC* /*pDC*/)
{
	CsystemserverDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CsystemserverView 打印

BOOL CsystemserverView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CsystemserverView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CsystemserverView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CsystemserverView 诊断

#ifdef _DEBUG
void CsystemserverView::AssertValid() const
{
	CView::AssertValid();
}

void CsystemserverView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CsystemserverDoc* CsystemserverView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CsystemserverDoc)));
	return (CsystemserverDoc*)m_pDocument;
}
#endif //_DEBUG


// CsystemserverView 消息处理程序
