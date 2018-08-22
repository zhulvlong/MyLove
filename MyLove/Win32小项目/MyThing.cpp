#include "stdafx.h"
#include "MyThing.h"


CMyThing::CMyThing()
{
	m_pos = NULL;
	m_side = 0;

}

CMyThing::~CMyThing()
{
	clear();
}

void CMyThing::InitThing( HDC &hdc)
{
	//给时间赋值
	m_time = 80;
	//给坐标赋值
	m_pos = new MyPoint;
	m_pos->row = rand() % 600;
	m_pos->col = rand() % 1200;
	//给边长赋值
	int temp;
	while (true)
	{
		temp = rand() % 300;
		if (temp > 150)
			break;
	}
	m_side = temp;										//边长
	
	heartDC = CreateCompatibleDC(hdc);
}

void CMyThing::RenderThing(HDC &hdc ,HINSTANCE& hInst )
{
	TCHAR Str[30] = { 0 };
	for (int i = 1; i <= 12; ++i)
	{
		Sleep(m_time);
		_stprintf_s(Str, 20, _T("1.%d.bmp"), i);
		heartBit = (HBITMAP)LoadImage(hInst, Str, IMAGE_BITMAP, m_side, m_side, LR_LOADFROMFILE);
		SelectObject(heartDC, heartBit);
		TransparentBlt(hdc, m_pos->col, m_pos->row, m_side, m_side, heartDC, 0, 0, m_side, m_side, RGB(7, 7, 7));
		DeleteObject(heartBit);
 	}
}

void CMyThing::SetAttribute(int side, MyPoint pos, size_t time)
{
	m_side = side;
	*m_pos = pos;
	m_time = time;
}

void CMyThing::clear()
{
	if (m_pos)
	{
		delete m_pos;
		m_pos = NULL;
	}

	DeleteDC(heartDC);
}
