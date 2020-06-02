#include<stdio.h>
/*
	while문을
	do~while로 바꿔보기

*/

int menu() {
	int menuNum = 0;
	puts("********Korea 식당 ******");
	puts("1. 김치찌개\n2. 된장찌개\n3. 부대찌개\n4. 순두부찌개\n0. 주문 종료");
	printf("주문 하세요 : "); scanf("%d", &menuNum);
	return menuNum;

}

void printBill(int k, int d, int s, int b) {
	//SUN * s 

}
void main() {

	int meNum = 0;

	//do~while 문 선샐행 후 판단!!! 먼저 한번은 반복하고 나중에 반복여부를 결정하는 것
	do { //while( menu() != 0)


		//메뉴라는 함수를 만들자!
		meNum = menu();

		system("cls");
		//영수증 함수를 만들자!
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
		}while(1); //do~while문의 끝은 ; 세미콜론으로 끝내야 한다.

		puts("\n\n프로그램");

}