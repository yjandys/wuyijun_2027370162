// NO_BUTTON.cpp: 实现文件
//

#include "pch.h"
#include "MFC_Test.h"
#include "afxdialogex.h"
#include "NO_BUTTON.h"


// NO_BUTTON 对话框

IMPLEMENT_DYNAMIC(NO_BUTTON, CDialogEx)

NO_BUTTON::NO_BUTTON(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_WIN1, pParent)
{

}

NO_BUTTON::~NO_BUTTON()
{
}

void NO_BUTTON::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(NO_BUTTON, CDialogEx)
END_MESSAGE_MAP()


// NO_BUTTON 消息处理程序
