#pragma
#include <Windows.h>
void GotoXY(int x, int y)
{
	COORD CORD;
	CORD.X = x;
	CORD.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CORD); //대문자가 나오는 데이터들은 전부 다 "상수"!
}