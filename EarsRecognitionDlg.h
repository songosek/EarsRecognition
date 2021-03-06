
#pragma once
#include "ImgWnd.h"
#include "opencv2/opencv.hpp"

using namespace cv;

// CDetectorDlg dialog
class CEarsRecognitionDlg : public CDialogEx
{
	// Construction
public:
	CEarsRecognitionDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EARSRECOGNITION_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	Mat* image; // zmienna, do której jest wczytywane zdjecie po wcisnieciu Otworz
	Mat* imageGray;
	CImgWnd displayedImage; // zmienna wyswietlajaca zdjecie

	// Generated message map functions
	virtual BOOL OnInitDialog();
	void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedRozpoznaj();
};
