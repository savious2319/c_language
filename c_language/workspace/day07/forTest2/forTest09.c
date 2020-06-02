#include <stdio.h>
#include <Windows.h>
#include "gotoxy.h"
/*
	forTest08.c 를 완성 한 후
	forTest09_백성민.c를 완성한다!  <--- day08_homework / sharp_move 폴더에 제출하기
		-> #을 이동시키는 것

*/
void main() {
	// #이 이동하는 것 처럼 출력해 보기
	// 가로줄 5번 이동하는데,
	// putchar('#'); (1,1);  <---- 찍기
	// (1.1); putchar(' ');  <---- 지우기
	// Sleep()
	// putchar('#'); (2,1);  <--- 좌표 이동후, 찍기
	//                       <---- 지우기

	for (int i = 0; i < 5; i++){
		putchar('#'); GotoXY(i, 0);
		Sleep(500);
		putchar(' '); GotoXY(i+1, 0);
	}
	puts("");
	puts("프로그램 종료");



}