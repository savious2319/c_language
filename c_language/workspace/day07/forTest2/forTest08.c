#include<stdio.h>
#include "gotoxy.h"
//#include "D:\---\GB_0900_05_BSM\c_language\resource\gotoxy.h"
//#include "D:\---\GB_0900_05_BSM\c_language\resource\gotoxy.h"
/*
	�ܼ���� â(���ȭ��â)��
	��� ��ġ ����
	gotoXY.h


*/
/*void main() {
	//��1)#�� ���η� ����غ�����
	//#
	//#		1�ʸ��� ������ �ϳ��� ����ϱ� (10��)
	//#
	for (int i = 0; i < 10; i++) {
		putchar('#'); puts("");
		Sleep(1000);
	}
}*/
/*void main() {
	//��2) #�� ���η� ����غ�����( 10ĭ)
	// ####### (1�ʸ���)
	for (int i = 0; i < 10; i++)
	{
		putchar('#');
		Sleep(1000);
	}
}*/

/*void main() {
	//��3) #�� ���η� ����� ������ (10��)
	//#
	// #
	//  #
	//   #
	//    #
	system("cls");
	//int i = 0, j = 0;
	for (int i = 0; i < 10; i++) {
		GotoXY(i, i);
		putchar('#');
		Sleep(500);
	}
	puts("");
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

		switch (choice) {
		case 1: for (int i = 0; i < 10; i++) {
					putchar('#'); puts("");
					Sleep(500);
					}
				break;
		case 2: for (int i = 0; i < 10; i++) {
					putchar('#'); 
					Sleep(500);
					}
				break;

		case 3: system("cls");
				for (int i = 0; i < 10; i++) {
						GotoXY(i, i);
						putchar('#');
						Sleep(500);
					}
				 puts("");
				break;

		}// end switch
			getchar();
			printf("�����Ͻø� q(Q)�� �������� ");
			scanf("%c", &quit);
			if (quit == 'q' || quit == 'Q') { break; }
	}// end for

}*/
void main() {

	//GotoXY(0, 1); putchar('#'); puts(""); //printf("\n");
	//��4-1) *** #��� �޴� ****
	//1. ������ ��� (���� ��)
	//   ������ �������?
	//   ��� ���� �ټ�, ĭ�� ���� ����ڷκ��� �Է¹޾�
	//   ����Ϳ� ����ϱ�!
	int choice = 0;
	int x = 0;
	char quit = ' ';
	for (;;) {
		printf("*** #��� �޴� ***\n");
		printf("1. ������ ���\n2. ������ ���\n3. �밢�� ���\n���� �ϼ���");
		scanf("%d", &choice);

		if (choice == 1) {
			puts("������ �������?");
			scanf("%d", &x);
			for (int i = 0; i < x; i++) {
				putchar('#'); puts("");
				Sleep(500);
			}

		}
		else if (choice == 2) {
			puts("�� ĭ�� �������?");
			scanf("%d", &x);
			for (int i = 0; i < x; i++) {
				putchar('#');
				Sleep(500);
			}
		}
		else {
			puts("�ټ��� �Է��ϼ���");
			scanf("%d", &x);

			system("cls");
			for (int i = 0; i < x; i++) {
				GotoXY(i, i);
				putchar('#');
				Sleep(500);
			}
			puts("");
		}
		getchar();
		printf("�����Ͻø� q(Q)�� ��������.");
		scanf("%c", &quit);
		if (quit == 'q' || quit == 'Q') { break; }

	}//end for
}//end main*/