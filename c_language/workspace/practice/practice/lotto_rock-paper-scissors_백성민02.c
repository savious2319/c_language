#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
void printRandomNum();
char quit();
void backMenu();
void playRPS();
void lottoNum();
void lottoNumAscend();
void main() {
	while (1) {
		srand((unsigned)time(NULL)); //���ο��� ������ �ٸ� �Լ����� ����ȴ�!
		int gameChoice = 0;
		puts("===C��� ����===");
		puts("1. 1~9������ 3���� ������ �̱�\n2. ���� ���� �� ����\n3. �ζ� ��õ ��ȣ �̱�\n4. ����\n");
		printf("��ȣ ���� : "); scanf("%d", &gameChoice);

		if (gameChoice == 4) { break; }

		switch (gameChoice) {
		case 1: printRandomNum(); break;

		case 2: playRPS(); break;

		case 3: lottoNum(); break;

		default: puts("�߸� �Է��ϼ̽��ϴ�\n"); break;
		}
	}
	puts("���α׷� ����");
}
void backMenu(){
	puts("");
	puts("=========================");
	puts("���� �޴��� ���ư��ϴ�.");
	puts("=========================");
	Sleep(2000);
	system("cls");
	main();

}
char quit() {
	char quit = ' ';
	getchar();
	printf("Press any key to continue playing or press q to quit");
	scanf("%c", &quit);
	return quit;
}
void printRandomNum() {
	system("cls");
	int arRandNum[3] = { 0 };
	int size = sizeof(arRandNum) / sizeof(arRandNum[0]);
	puts("====================");
	for (int i = 0; i < size; i++) {
		arRandNum[i] = (rand() % 9) + 1;
		printf("������ȣ[%d] : %d\n", i + 1, arRandNum[i]);
	}
	puts("");
}
#define SCISSORS 1
#define ROCK 2
#define PAPER 3
void playRPS() {
	while (1) {
		int choiceNum = 0;
		puts("**** ��ǻ�Ϳ� ���������� ����****");
		puts("1. scissors 2. rock 3. paper");
		printf("������ ���ðڽ��ϱ�?"); scanf("%d", &choiceNum);
		int r_num = (rand() % 3) + 1;

		if (choiceNum == r_num) { puts("�����ϴ�"); }
		switch (r_num) {
		case SCISSORS: if (choiceNum == ROCK) { puts("��ǻ��: ����\n��: ����\n����ڰ� �̰���ϴ�"); }
					   else { puts("��ǻ��: ����\n��: ��\n��ǻ�Ͱ� �̰���ϴ�"); }break;
		case ROCK: if (choiceNum == PAPER) { puts("��ǻ��: ����\n��: ��\n����ڰ� �̰���ϴ�"); }
				   else { puts("��ǻ��: ����\n��: ����\n��ǻ�Ͱ� �̰���ϴ�"); }break;
		case PAPER: if (choiceNum == SCISSORS) { puts("��ǻ��: ��\n��: ����\n����ڰ� �̰���ϴ�"); }
					else { puts("��ǻ��: ��\n��: ����\n��ǻ�Ͱ� �̰���ϴ�"); }break;
		default: puts("�߸��Է��ϼ̽��ϴ�"); 
			break;
		}
		char q = quit();
		if (q == 'q') { break; }
		system("cls");
	}
}
void lottoNum() {
	system("cls");
	char choice = ' ';
	int arRandNum3[6] = { 0 };
	puts("****�̹� �� �ζ� ��ȣ ��õ****");
	for (int i = 0; i < 6; i++) {
		arRandNum3[i] = (rand() % 45) + 1;
	}
	printf("%d, %d, %d, %d, %d, %d\n����� �ֱ� ����մϴ�~!!!\n", arRandNum3[0], arRandNum3[1], arRandNum3[2], arRandNum3[3], arRandNum3[4], arRandNum3[5]);
	puts("");
	getchar();
	printf("�ζ� ��ȣ �����������ε� ���� ��������? [y/n]"); scanf("%c", &choice);
	puts("");
	if (choice == 'y') { lottoNumAscend(); }
	else {}

}

void lottoNumAscend() { // asce : ����	desc : ����
	system("cls");
	puts("****�̹� �� �ζ� ��ȣ ��õ(��������)****");
	int arRandNum4[6] = { 0 };
	for (int i = 0; i < 6; i++) {
		arRandNum4[i] = (rand() % 45) + 1;
	}
	for (int i = 0; i < 6; i++) {
		for (int j = i + 1; j < 6; j++) {
			//printf("�ٲ���� arRandNum[%d] : %d\tarRandNum[%d] : %d\n", i, arRandNum4[i], j, arRandNum4[j]);
			if (arRandNum4[i] > arRandNum4[j]) {
				int temp = arRandNum4[i];
				arRandNum4[i] = arRandNum4[j];
				arRandNum4[j] = temp;
				//printf("�ٲ��� arRandNum[%d] : %d\tarRandNum[%d] : %d\n", i, arRandNum4[i], j, arRandNum4[j]);;
			}
		}
	}

	printf("%d, %d, %d, %d, %d, %d\n��ſ��� ����� �ֱ� �ٷ���!\n", arRandNum4[0], arRandNum4[1], arRandNum4[2], arRandNum4[3], arRandNum4[4], arRandNum4[5]);
	puts("");
}


