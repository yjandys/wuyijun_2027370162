// YES_BUTTON.cpp: 实现文件
//

#include "pch.h"
#include "MFC_Test.h"
#include "afxdialogex.h"
#include "YES_BUTTON.h"


// YES_BUTTON 对话框

IMPLEMENT_DYNAMIC(YES_BUTTON, CDialogEx)

YES_BUTTON::YES_BUTTON(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_WIN1, pParent)
{

}

YES_BUTTON::~YES_BUTTON()
{
}

void YES_BUTTON::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(YES_BUTTON, CDialogEx)
END_MESSAGE_MAP()


// YES_BUTTON 消息处理程序
