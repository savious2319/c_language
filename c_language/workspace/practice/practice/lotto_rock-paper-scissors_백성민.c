#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void lottoNumAscend();
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

void rockPaperScissors() {
	system("cls");
	int choiceNum = 0;
	int resultNum = 0;
	int r_num = 0;
	const char *arRPS[3] = { "scissors", "rock", "paper" };
	const char *arResult[3] = { "�����ϴ�. �ٽ� �ѹ� ����!\n", "�̰���ϴ� �����մϴ�!\n", "�����ϴ�..�ƽ��׿�\n" };
	while (1) {
		puts("**** ��ǻ�Ϳ� ���������� ����****");
		puts("1. scissors 2. rock 3. paper 4. ����");
		printf("������ ���ðڽ��ϱ�?"); scanf("%d", &choiceNum);
		system("cls");
		r_num = (rand() % 3) + 1;

		if (choiceNum == 4) { break; }
		if (choiceNum == r_num) { resultNum = 0; }
		else {
			if (choiceNum == 1 && r_num == 3 || choiceNum == 2 && r_num == 1 || choiceNum == 3 && r_num == 2) {
				resultNum = 1;
			}
			else {
				resultNum = 2;
			}
		}	
			printf("\n����� :%s\t��ǻ�� :%s\n", arRPS[choiceNum - 1], arRPS[r_num - 1]);
			printf("%s\t\n", arResult[resultNum]);
	}// end of while
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

		case 2: rockPaperScissors(); break;

		case 3: lottoNum(); break;

		default: puts("�߸� �Է��ϼ̽��ϴ�\n"); break;
		}
	}
	puts("���α׷� ����");
	/*srand((unsigned)time(NULL));
	int arNum[5] = { 0 };
	for (int i = 0; i < 5; i++){
	arNum[i] = rand() % 6 + 3;
	printf("arNum[%d] : %d\n", i, arNum[i]);
	}
	for (int i = 0; i < 5; i++)
	{
	int r_num = 0;
	r_num = rand() % 3 + 1;
	printf("%d. %d\n",i+1, r_num);

	}*/
}

