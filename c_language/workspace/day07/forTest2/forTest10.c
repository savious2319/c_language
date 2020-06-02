#include<stdio.h>
#include "gotoxy.h"
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
void main() {
	system("cls");
		int x = 55;
		int y = 15;
		int direction = 0;
		GotoXY(x, y); 
		putchar('#');
	for (;;) {
		
		direction = getch();
		GotoXY(x, y); putchar(' ');
		
			switch (direction) {

			case UP: 
				 //위 화살표 눌렀을 때, 언젠가는 상단 끝에 다다르게 된다. 이때,
				//if(상단끝에 다다르면 -1좌표로 찍지 말고, 다시 하단 값을 y좌표값을 대입시키자)
				//if (상단끝이니 ? )
				//{
				//	y = 최하단 좌표값넣기;
				//}
				if (y == 3) {
					y = 30;
				}
				else {
					--y;
				}
				break; // y를 -- 시키면 되겠구나
			case DOWN: ++y; break; // y를 ++
			case LEFT: --x; break;// x를 --
			case RIGHT: 
				if (x == 100) {
					x = 0;
				}
				else {
					++x;
				}
				break;// x를 ++
			}
			GotoXY(x, y); putchar('#');
	}
}

/*
putchar(' ') stdio.h
putch(' ') conio.h

문자변수 = getchar() stdio.h

문자변수 = getch() conio.h
*정수변수 = getch()

*/

//getchar()와 getch()의 차이!
/*char gChar = ' ';
char gCh = ' ';
int i_gCh = 0;*/

//getchar() 입력받고 출력해보기
//getch() 입력받고 출력해보는데...
//두 함수의 차이점!!! *입력받을 때 상황이 좀 다르다!

//putchar(getchar()); // 문자를 누르고 엔터값을 기다린다.
//putchar(getch()); //문자를 누르자 마자 바로 실행된다.

//getchar()는 아스키 코드 값 입력받을 때 사용
//getch()는 아스키 값도 입력 받지만, 특수키를 판별할 수 있다!
//  1byte           1byte
// 특수문자       (특수키)코드값
//(확장값)
//

/*printf("문자 입력: ");
gChar = getchar();
printf("%c\n", gChar);

getchar
printf("정수 입력: ");
i_gCh = getch();
printf("%d", i_gCh);*/


/*int _extCode = 0;
//특수키 판별
_extCode = getch();

if (_extCode == 0 || _extCode == 0xe0) {
printf("특수(확장)키 : %d\n", _extCode);  //특수키 여부 확인하기 (앞에 1byte)
_extCode = getch();
printf("특수(확장)키 : %d\n", _extCode);  //특수키 코드값 확인하기 (뒤에 1byte)
}
else {
printf("일반키 : %d\n", _extCode);
}*/
/*
첫 시작 위치를 화면의 중간쯤에 자리잡고 이동시키자!

*/