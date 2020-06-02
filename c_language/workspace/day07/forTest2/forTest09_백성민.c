#include<stdio.h>
#include<Windows.h>
#include "gotoxy.h"

/*void main() {

	//문1)#을 세로로 출력해보세요
	//#
	//#		1초마다 밑으로 하나씩 출력하기 (10줄)
	//#
	system("cls");
	for (int i = 0; i < 10; i++) {
		putchar('#'); GotoXY(0, i);
		Sleep(500);
		putchar(' '); GotoXY(0, i + 1);
	}
}*/

/*void main() {

	//문2) #을 가로로 출력해보세요( 10칸)
	// ####### (1초마다)
	for (int i = 0; i < 10; i++){

		putchar('#'); GotoXY(i, 0);
		Sleep(500);
		putchar(' '); GotoXY(i+1, 0);
	}

}*/

/*void main(){
	//문3) #을 세로로 출력해 보세요 (10줄)
	//#
	// #
	//  #
	//   #
	//    #
	for (int i = 0; i < 10; i++){
		putchar('#'); GotoXY(i, i);
		Sleep(500);
		putchar(' '); GotoXY(i + 1, i + 1);

	}

	//int i = 0, j = 0;
	system("cls");
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < i; j++){
			putchar('\n');
			}
		for (int j = 0; j < i; j++){
			putchar(' ');
		}
			putchar('#');
			Sleep(500);
			system("cls");
		}
		}*/

/*void main() {
	//문4) **** # 찍기 메뉴 *****
	// 1. 세로줄 찍기
	// 2. 가로줄 찍기
	// 3. 대각선 찍기
	// 몇번을 보시겠습니다? (종료:q)
	int choice = 0;
	char quit = ' ';
	for (;;) {
		printf("*** 찍기 메뉴 ***\n");
		printf("1. 세로줄 찍기\n2. 가로줄 찍기\n3. 대각선 찍기\n몇번을 보시겠습니다?");
		scanf("%d", &choice);
		system("cls");
		switch (choice) {
		case 1: for (int i = 0; i < 10; i++) {
			putchar('#'); GotoXY(0, i);
			Sleep(500);
			putchar(' '); GotoXY(0, i + 1);
		}
				break;
		case 2: for (int i = 0; i < 10; i++) {
			putchar('#'); GotoXY(i, 0);
			Sleep(500);
			putchar(' '); GotoXY(i + 1, 0);
		}
				break;

		case 3:  for (int i = 0; i < 10; i++) {
			putchar('#'); GotoXY(i, i);
			Sleep(500);
			putchar(' '); GotoXY(i + 1, i + 1);
		}
				 break;

		}// end switch
		getchar();
		printf("종료하시면 q(Q)를 누르세요");
		scanf("%c", &quit);
		if (quit == 'q' || quit == 'Q') { break; }
	}// end for
}*/

void main(){
		//문4-1) *** #찍기 메뉴 ****
		//1. 세로줄 찍기 (선택 후)
		//   몇줄을 찍을까요?
		//   찍고 싶은 줄수, 칸수 등을 사용자로부터 입력받아
		//   모니터에 출력하기!
	int choice = 0;
	int x = 0;
	int y = 0;
	char quit = ' ';
	for (;;) {
		printf("*** #찍기 메뉴 ***\n");
		printf("1. 세로줄 찍기\n2. 가로줄 찍기\n3. 대각선 찍기\n선택 하세요: ");
		scanf("%d", &choice);
		if (choice == 1) {
			puts("몇줄을 찍을까요?");
			scanf("%d", &x);
			system("cls");
			for (int i = 0; i < x; i++) {
				putchar('#'); GotoXY(0, i);
				Sleep(500);
				putchar(' '); GotoXY(0, i + 1);
			}

		}
		else if (choice == 2) {
			puts("몇 칸을 찍을까요?");
			scanf("%d", &x);
			system("cls");
			for (int i = 0; i < x; i++) {
				putchar('#'); GotoXY(i, 0);
				Sleep(500);
				putchar(' '); GotoXY(i + 1, 0);
			}
		}
		else {
	
			puts("줄수 입력하세요");
			scanf("%d", &x);

			system("cls");
			for (int i = 0; i < x ; i++)
			{
				GotoXY(i,i);
				putchar('#');
				Sleep(500);
				system("cls");

			}
			puts("");
		}
		getchar();
		printf("종료하시면 q(Q)를 누르세요 ");
		scanf("%c", &quit);
		if (quit == 'q' || quit == 'Q') { break; }


	}
}