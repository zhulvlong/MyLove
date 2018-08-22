#pragma once
class CManage
{
private:
	CMyThing * m_thing;
public:
	CManage();
	~CManage();
public:	
	void InitProc(HDC hdc);					//初始化程序
	void RenderProc(HDC hdc, HINSTANCE hinst);			//渲染程序
	void upProc(HDC hdc);				//更新程序
	void Change(int side, MyPoint pos, size_t time);
};

