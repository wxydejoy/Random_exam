// Math.cpp: 实现文件
//

#include "pch.h"
#include "Random_exam.h"
#include "Math.h"
#include "afxdialogex.h"


// Math 对话框

IMPLEMENT_DYNAMIC(Math, CDialogEx)

Math::Math(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Math, pParent)
{

}

Math::~Math()
{
}

void Math::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Math, CDialogEx)
END_MESSAGE_MAP()


// Math 消息处理程序
