#pragma
#include<Windows.h>
void GotoXY(int x, int y)
{
	COORD CORD;
	CORD.X = x;
	CORD.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CORD);
}
