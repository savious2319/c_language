#include <stdio.h>
#include "gotoxy.h"

void main() {
	char quit = ' ';
	int line = 0;
	int space = 0;
	int choice = 0;

	while (1) {
		puts("**** # ��� �޴� ****\n1. ������ ���\n2. ������ ���\n3. �밢�� ���\n4. ����\n����� ���ðڽ��ϴ�?");
		scanf("%d", &choice);


		if (choice == 4) {
			puts("�� �ѱ��� ������?????"); break;
		}

		else if (choice < 1 || choice > 4) { puts("�߸� �����̽��ϴ�"); }

		else {

			switch (choice) {

			case 1:     puts("�� ���� ���� ���?"); scanf("%d", &line);
				system("cls");
				for (int i = 0; i < line; i++) {
					putchar('#'); Sleep(500); GotoXY(0, i);
					putchar(' ');
					puts("");
				}
				break;
			case 2:     puts("�� ĭ�� ���� ���?"); scanf("%d", &space);
				system("cls");
				for (int i = 0; i < space; i++) {
					putchar('#'); Sleep(500);
					GotoXY(i, 0); putchar(' ');
				}
				break;

			case 3:
				puts("�� ���� ���� ���?"); scanf("%d", &line);
				system("cls");
				for (int i = 0; i < line; i++) {
					putchar('#'); Sleep(500); GotoXY(i, i);
					putchar(' '); GotoXY(i + 1, i + 1);

				}break;

			}//end switch

			getchar();
			puts("�����Ͻ÷��� q(Q)�� �����ּ���"); scanf("%c", &quit);
			if (quit == 'q' || quit == 'Q') { break; }
		}

	}//end while
}//end main