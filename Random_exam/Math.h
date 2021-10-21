#pragma once


// Math 对话框

class Math : public CDialogEx
{
	DECLARE_DYNAMIC(Math)

public:
	Math(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Math();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Math };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
