#include<stdio.h>
#include<Windows.h>
#include "gotoxy.h"

/*void main() {

	//��1)#�� ���η� ����غ�����
	//#
	//#		1�ʸ��� ������ �ϳ��� ����ϱ� (10��)
	//#
	system("cls");
	for (int i = 0; i < 10; i++) {
		putchar('#'); GotoXY(0, i);
		Sleep(500);
		putchar(' '); GotoXY(0, i + 1);
	}
}*/

/*void main() {

	//��2) #�� ���η� ����غ�����( 10ĭ)
	// ####### (1�ʸ���)
	for (int i = 0; i < 10; i++){

		putchar('#'); GotoXY(i, 0);
		Sleep(500);
		putchar(' '); GotoXY(i+1, 0);
	}

}*/

/*void main(){
	//��3) #�� ���η� ����� ������ (10��)
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
	//��4) **** # ��� �޴� *****
	// 1. ������ ���
	// 2. ������ ���
	// 3. �밢�� ���
	// ����� ���ðڽ��ϴ�? (����:q)
	int choice = 0;
	char quit = ' ';
	for (;;) {
		printf("*** ��� �޴� ***\n");
		printf("1. ������ ���\n2. ������ ���\n3. �밢�� ���\n����� ���ðڽ��ϴ�?");
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
		printf("�����Ͻø� q(Q)�� ��������");
		scanf("%c", &quit);
		if (quit == 'q' || quit == 'Q') { break; }
	}// end for
}*/

void main(){
		//��4-1) *** #��� �޴� ****
		//1. ������ ��� (���� ��)
		//   ������ �������?
		//   ��� ���� �ټ�, ĭ�� ���� ����ڷκ��� �Է¹޾�
		//   ����Ϳ� ����ϱ�!
	int choice = 0;
	int x = 0;
	int y = 0;
	char quit = ' ';
	for (;;) {
		printf("*** #��� �޴� ***\n");
		printf("1. ������ ���\n2. ������ ���\n3. �밢�� ���\n���� �ϼ���: ");
		scanf("%d", &choice);
		if (choice == 1) {
			puts("������ �������?");
			scanf("%d", &x);
			system("cls");
			for (int i = 0; i < x; i++) {
				putchar('#'); GotoXY(0, i);
				Sleep(500);
				putchar(' '); GotoXY(0, i + 1);
			}

		}
		else if (choice == 2) {
			puts("�� ĭ�� �������?");
			scanf("%d", &x);
			system("cls");
			for (int i = 0; i < x; i++) {
				putchar('#'); GotoXY(i, 0);
				Sleep(500);
				putchar(' '); GotoXY(i + 1, 0);
			}
		}
		else {
	
			puts("�ټ� �Է��ϼ���");
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
		printf("�����Ͻø� q(Q)�� �������� ");
		scanf("%c", &quit);
		if (quit == 'q' || quit == 'Q') { break; }


	}
}