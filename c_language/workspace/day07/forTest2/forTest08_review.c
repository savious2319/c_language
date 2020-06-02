#include <stdio.h>
#include "gotoxy.h"

void main() {
	char quit = ' ';
	int line = 0;
	int space = 0;
	int choice = 0;

	while (1) {
		puts("**** # 찍기 메뉴 ****\n1. 세로줄 찍기\n2. 가로줄 찍기\n3. 대각선 찍기\n4. 종료\n몇번을 보시겠습니다?");
		scanf("%d", &choice);


		if (choice == 4) {
			puts("왜 한글이 깨지지?????"); break;
		}

		else if (choice < 1 || choice > 4) { puts("잘못 누르셨습니다"); }

		else {

			switch (choice) {

			case 1:     puts("몇 줄을 찍을 까요?"); scanf("%d", &line);
				system("cls");
				for (int i = 0; i < line; i++) {
					putchar('#'); Sleep(500); GotoXY(0, i);
					putchar(' ');
					puts("");
				}
				break;
			case 2:     puts("몇 칸을 찍을 까요?"); scanf("%d", &space);
				system("cls");
				for (int i = 0; i < space; i++) {
					putchar('#'); Sleep(500);
					GotoXY(i, 0); putchar(' ');
				}
				break;

			case 3:
				puts("몇 줄을 찍을 까요?"); scanf("%d", &line);
				system("cls");
				for (int i = 0; i < line; i++) {
					putchar('#'); Sleep(500); GotoXY(i, i);
					putchar(' '); GotoXY(i + 1, i + 1);

				}break;

			}//end switch

			getchar();
			puts("종료하시려면 q(Q)를 눌러주세요"); scanf("%c", &quit);
			if (quit == 'q' || quit == 'Q') { break; }
		}

	}//end while
}//end main