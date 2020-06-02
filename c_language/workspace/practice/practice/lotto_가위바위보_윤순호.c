#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
//���� ����
int getNum(void);	//�޴� ��ư �Է�
void getRanNum();	//���� ���� ���ϱ� �Լ�
void playRSP();		//���������� �Լ�
void getLottoNum();	//�ζǹ�ȣ ���ϱ� �Լ�
char askQuit(void);	//�ݺ�,���� ����� �Լ�
void backMenu();	//���θ޴� ���ư��� �Լ�
void main() {
	//�޴� ���� ����
	int num = 0;
	//�޴� ���� return�� ����	
	num = getNum();
		switch (num) {
			//���� ���� ���ϱ�
		case 1:
			getRanNum();
			break;
			//���������� �ϱ�
		case 2:
			playRSP();
			break;
			//�ζ� ��ȣ ���ϱ�
		case 3:
			getLottoNum();
			break;
		case 0:
			break;
		}//end switch
	 //���α׷� ����
	system("cls");
	puts("=====================");
	puts("���α׷��� �����մϴ�.");
	puts("�̿����ּż� �����մϴ�.");
	puts("=====================");
}//end main
 //�޴� ���� �Լ�
int getNum(void) {
	int num = 0;
	puts("==============================");
	printf("� �޴��� �����Ͻðڽ��ϱ�?\n");
	puts("==============================");
	puts("1.���� ���� ���ϱ�");
	puts("2.���������� �ϱ�");
	puts("3.�ζ� ��ȣ ��õ�ϱ�");
	puts("0.����");
	puts("==============================");
	printf("�޴� �Է� : ");
	scanf("%d", &num);
	puts("==============================");
	return num;
}//end getNum
 //�ݺ� ����� ��� �Լ�
void backMenu() {
	puts("");
	puts("=========================");
	puts("���� �޴��� ���ư��ϴ�.");
	puts("=========================");
	Sleep(2000);
	system("cls");
	main();
}//end backMenu
 //�ݺ�,���� ����� �Լ�
char askQuit(void) {
	char quit = ' ';
	getchar();
	puts("");
	printf("��� �ϽǷ��� �ƹ� ��ư�� �����ּ���.");
	printf("����� q�� �����ּ���.\n");
	scanf("%c", &quit);
	return quit;
}//end askQuit
 //���� ���� ���ϱ� �Լ�
void getRanNum() {
	for (;;) {
		int arRandNum[3] = { 0 };
		//���� ��ư
		char quit = ' ';
		//arRandNum�� ������
		int length = sizeof(arRandNum) / sizeof(arRandNum[0]);
		puts("");
		puts("**********************************");
		puts("1~9���� ������ ���� 3���� ����մϴ�.");
		puts("**********************************");
		puts("");
		srand((unsigned)time(NULL));
		for (int i = 0; i < length; i++) {
			//int r_num = rand() % 9 + 1;
			int rand_Num = rand() % 10;
			if (rand_Num == 0) {
				rand_Num += 1;
			}
			printf("[%d��] : %d\n", i + 1, rand_Num);
		}//end if
		quit = askQuit();
		system("cls");
		if (quit == 'q') break;
	}//end for
	backMenu();
}//end getRanNum
 //���������� �Լ� ����
int askRSP(void);
void myNum(int num);
void cpNum(int c_Num);
void result(int num, int c_Num);
#define ROCK 2
#define SCISSORS 1
#define PAPER 3
//���������� �ϱ� �Լ�
void playRSP() {
	for (;;) {
		//���������� ��ư ���� ����
		int num = 0;
		//���� ��ư
		int quit = ' ';
		//�Է¹��� �� num�� ����
		num = askRSP();
		srand((unsigned)time(NULL));
		//��ǻ���� �� ���ϱ�
		int c_Num = (rand() % 3) + 1;
		//���� �� ��
		myNum(num);
		//��ǻ�Ͱ� �� ��
		cpNum(c_Num);
		//���������� ���
		result(num, c_Num);
		//�ݺ�,���� �����
		quit = askQuit();
		system("cls");
		if (quit == 'q') break;
	}//end for
	backMenu();
}//end playRSP
 //���������� �����
int askRSP(void) {
	int num = 0;
	puts("**** ��ǻ�Ϳ� ���������� ���� ****");
	puts("1. ���� 2. ���� 3. ��");
	printf("������ ���ðڽ��ϱ�? : ");
	scanf("%d", &num);
	return num;
}//end askRSP
 //���� �� �� �Լ�
void myNum(int num) {
	puts("-------------------");
	switch (num) {
	case ROCK:
		puts("��\t  : ����");
		break;
	case SCISSORS:
		puts("��\t  : ����");
		break;
	case PAPER:
		puts("��\t  : ��");
		break;
	}//end switch
}//end myNum
 //��ǻ�Ͱ� �� �� �Լ�
void cpNum(int c_Num) {
	puts("-------------------");
	switch (c_Num) {
	case ROCK:
		puts("��ǻ��    : ����");
		break;
	case SCISSORS:
		puts("��ǻ��    : ����");
		break;
	case PAPER:
		puts("��ǻ��    : ��");
		break;
	}//end switch
	puts("-------------------");
}//end cpNum
 //���������� ��� �Լ�
void result(int num, int c_Num) {
	if (c_Num == num) {
		puts("�����ϴ�.");
	}
	else {
		if ((num == ROCK && c_Num == SCISSORS) || (num == SCISSORS && c_Num == PAPER) || (num == PAPER && c_Num == ROCK)) {
			puts("");
			puts("�̰���ϴ�.");
			puts("");
		}
		else {
			puts("");
			puts("�����ϴ�.");
			puts("");
		}//end ���� if
	}//end ���� if
}//end result
 //�ζǹ�ȣ ���ϱ� �Լ�
void inputLotto(int *arLotto, int length);
void sortAsc(int *arLotto, int length);
void outputLotto(int *arLotto, int length);
void getLottoNum() {
	for (;;) {
		//�ζǹ�ȣ ���� ���� �迭 
		int arLotto[6] = { 0 };
		//���� ��ư
		char quit = ' ';
		//�迭�� ����
		int length = sizeof(arLotto) / sizeof(arLotto[0]);
		srand((unsigned)time(NULL));

		//������ ��ȣ 6���� arLotto�� ����
		inputLotto(arLotto, length);
		//����3-1] ������������ ����� �ּ��� (����Ī �̿�)
		//������������ ����
		sortAsc(arLotto, length);
		//����ϱ�
		outputLotto(arLotto, length);
		//�ݺ�,���� �����
		quit = askQuit();
		system("cls");
		if (quit == 'q') break;
	}//end for
	backMenu();
}
void inputLotto(int *arLotto, int length) {
	for (int i = 0; i < length; i++) {
		arLotto[i] = rand() % 44 + 1;
	}//end for
}//end inputLotto
void sortAsc(int *arLotto, int length) {
	for (int i = 0; i < length - 1; i++) {
		for (int j = i + 1; j < length; j++) {
			if (arLotto[i] > arLotto[j]) {
				int temp = 0;
				temp = arLotto[i];
				arLotto[i] = arLotto[j];
				arLotto[j] = temp;
			}//end if
		}//end for(j)
	}//end for(i)
}//end sortAsc
void outputLotto(int *arLotto, int length) {
	puts("");
	puts("-----------------------------");
	for (int i = 0; i < length; i++) {
		printf("��õ��ȣ : %d\n", arLotto[i]);
	}//end for
	puts("-----------------------------");
	puts("");
	puts("����� �ֱ� ����մϴ�~!!");
}//end outputLotto