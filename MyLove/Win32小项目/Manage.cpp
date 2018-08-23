#include "stdafx.h"
#include "Manage.h"


CManage::CManage()
{
	m_thing = NULL;
}

CManage::~CManage()
{
	if (m_thing)
	{
		delete m_thing;
		m_thing = NULL;
	}
}

void CManage::InitProc(HDC hdc)
{
	m_thing = new CMyThing;
	m_thing->InitThing( hdc);
}

void CManage::RenderProc(HDC &hdc, HINSTANCE& hInst, int flag)
{
		m_thing->RenderThing(hdc, hInst, flag);
}

void CManage::upProc(HDC hdc)
{
	for (int i = 0; i < 3000; i++)
	{
		for (int j = 0; j < 3; ++j)
		{
			int x = rand() % 1200 ;
			int y = rand() % 700 ;
			SetPixel(hdc, x, y, RGB(0, 0, 0));
			SetPixel(hdc, x+1, y, RGB(0, 0, 0));
			SetPixel(hdc, x, y+1, RGB(0, 0, 0));
		}
	}
}

void CManage::Change(int side, MyPoint pos, size_t time)
{
	m_thing->SetAttribute(side, pos, time);
}
