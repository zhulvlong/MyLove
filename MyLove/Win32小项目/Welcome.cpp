#include "stdafx.h"

void Welcome(HDC &hdc)
{
	HFONT font = CreateFont(50, 0, 0, 0, 400, FALSE, FALSE, FALSE, GB2312_CHARSET, 0, 0, 0, 0, _T("¿¬Ìå"));
	SelectObject(hdc, font);
	SetTextColor(hdc, RGB(221, 150, 32));
	SetBkMode(hdc, TRANSPARENT);
	TextOut(hdc, 200, 250, _T("ÀËÂþ±í°×ÈÕ"), 5);
	TextOut(hdc, 600, 350, _T("Ï×¸øÖ¿°®Ä³Ä³Ä³"), 7);
	DeleteObject(font);
}