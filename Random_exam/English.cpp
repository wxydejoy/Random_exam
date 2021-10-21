// English.cpp: 实现文件
//

#include "pch.h"
#include "Random_exam.h"
#include "English.h"
#include "afxdialogex.h"


// English 对话框

IMPLEMENT_DYNAMIC(English, CDialogEx)

English::English(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_English, pParent)
{

}

English::~English()
{
}

void English::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(English, CDialogEx)
END_MESSAGE_MAP()


// English 消息处理程序
