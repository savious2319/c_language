#include<stdio.h>
#include<Windows.h>
/*
	while문
	식당 메뉴 만들기
	********Korea 식당 ******
	1. 김치찌개
	2. 된장찌개
	3. 부대찌개
	4. 순두부찌개
	주문 : 번     //  \b

	주문하신 메뉴는
	000입니다.
*/
void main() {

	int meNum = 0;

	while (1) {
		puts("********Korea 식당 ******");
		puts("1. 김치찌개\n2. 된장찌개\n3. 부대찌개\n4. 순두부찌개\n0. 주문 종료");
		printf("주문 하세요 : "); scanf("%d", &meNum);
		system("cls");

		if (meNum == 0) {
			puts("주문을 종료합니다");
			break;
		}
		else {
			switch (meNum)
			{
			case 1: puts("김치찌개"); break;
			case 2: puts("된장찌개"); break;
			case 3: puts("부대찌개"); break;
			case 4: puts("순두부찌개"); break;

			}

		}
	}
	puts("\n\n프로그램");


}