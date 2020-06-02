#include<stdio.h>
//#include "D:\GB_0900_05_ksk\sunny\c_language\resource\gotoxy.h"
// 사용자 정의 헤더파일 ""절대 경로를 표시한다 
//#include "d:\GB_0900_05_ksk\sunny\c_language\resource\gotoxy.h" // 사용자 정의
#include"gotoxy.h"
/*
	콘솔출력 창(결과화면창)에
	출력 위치 변경
	gotoXY.h

*/
/*
문제1  #을 세로로 출력 해 보세요.
       1초 마다 하나씩 출력하기(10줄)

*/
/*
void main() {

	//	putchar('#'); puts(""); //puts는 \n을 사용하지않는다 띄어쓰기 두번 됨
	//GotoXY(0, 1); putchar('#'); puts("재미따");
	int i = 0; int j = 0;
	for (i = 0; i < 10; i++) {
		putchar('#'); putchar('\n');
		Sleep(1000);

	}
	

}

/*

문제2 #을 가로로 출력 해 보세요(10칸)
      ####### 1초 마다
*/
/*
void main() {
	int i = 0;
	for (i = 0; i < 10; i++) {
		putchar('#');
		Sleep(1000);
	}
}
*/
/*
문제3 #을 세로로 출력 해 보세요(10줄) 1초 마다
#
 #
  #
   #
    #
*/
/*
void main() {
	int i = 0; int j = 0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < i; j++) {
			putchar(' ');
		}
		putchar('#');
		puts("");
		Sleep(1000);
	}
}
*/
/*
문제4 *** #찍기 메뉴 ***
1. 세로줄 찍기
2. 가로줄 찍기
3. 대각선 찍기
  몇번을 보시겠습니까?
*/
/*
void main() {
	int x = 0; 
	int y = 0;
	int z = 0;
	char a = '#';

	printf("***# 찍기 메뉴***\n 1. 세로줄 찍기\n 2. 가로줄 찍기\n 3. 대각선 찍기\n 몇번을 보시겠습니까?\n");
	scanf("%d", &z);
	system("cls");

	switch(z)
	{
	case 1: 
		for (;y<10;)
	{
		GotoXY(0, y++);
		putchar('#');
		Sleep(500);
		
	}
			break;
	case 2: for (;x<10 ;)
	{
		GotoXY(x++, 0);
		putchar('#');
		Sleep(500);
	}
			break;
		case 3:for(;x<10||y<10 ;) 
		{
			GotoXY(x++, y++);
			putchar('#');
			Sleep(500);
		}
			   break;
		

	}
	printf("\n");
}
*/

/*
문제4-1 *** #찍기 메뉴 ***
	1. 세로줄 찍기 (선택 후)
	   몇줄을 찍을까요? __
	   찍고 싶은 줄수, 칸수등을 사용자로부터
	   입력받아 모니터에 출력하기
*/

void main() {
	int x = 0;
	int y = 0;
	int z = 0;
	int num = 0;
	char a = '#';

	printf("***#찍기 메뉴***\n 1. 세로줄 찍기\n 2. 가로줄 찍기\n 3. 대각선 찍기\n 몇번을 보시겠습니까?\n");
	scanf("%d", &z);
	printf("몇 줄/칸을 찍을까요?\n");
	scanf("%d", &num);
	system("cls");

	switch (z) {
	case 1: for (; y<num;)
	{
		GotoXY(0, y++);
		putchar('#');
		Sleep(500);

	}
			break;
	case 2: for (; x<num;)
	{
		GotoXY(x++, 0);
		putchar('#');
		Sleep(500);
	}
			break;
	case 3:for (; x<num || y<num;)
	{
		GotoXY(x++, y++);
		putchar('#');
		Sleep(500);
	}
		   break;
		   putchar('#'); putchar('\n');
		   Sleep(1000);

	}
	printf("\n");
}
