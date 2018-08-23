#pragma once
class CMyThing
{
private:
	MyPoint * m_pos;					//保存最左上角的坐标
	int  m_side;						//保存边长
	size_t m_time;						//保存心缓慢出现的时间
	HBITMAP heartBit;
	HDC heartDC;
public:
	CMyThing();
	~CMyThing();
public:
	void InitThing(HDC &hdc);					//初始化物品
	void RenderThing(HDC &hdc, HINSTANCE& hInst, int flag);			//绘制物品
	void SetAttribute(int side, MyPoint pos, size_t time);
public:
	void clear();
};