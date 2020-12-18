#include "stdafx.h"

//show cursor
void MyPaint(HDC hdc, LPARAM lParam)
{
	int x, y;
	char str[20] = "";
	x = LOWORD(lParam);
	y = HIWORD(lParam);
	SetTextColor(hdc, RGB(255, 0, 0));
	TextOut(hdc, 10, 10, "cursor xy", strlen("cursor xy"));
	sprintf_s(str, "x:%d ", x);
	TextOut(hdc, 30, 30, str, strlen(str));
	sprintf_s(str, "y:%d ", y);
	TextOut(hdc, 30, 50, str, strlen(str));

	
}