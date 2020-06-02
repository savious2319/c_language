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
	printf("������ȣ[%d] : %d\n", i+1, arRandNum[i]);
	}
	puts("");
}

void rockPaperScissors() {
	
	int choiceNum = 0;
	int r_num = 0;
	while (1) {
		puts("**** ��ǻ�Ϳ� ���������� ����****");
		puts("1. scissors 2. rock 3. paper 4. ����");
		printf("������ ���ðڽ��ϱ�?"); scanf("%d", &choiceNum);
		system("cls");
		r_num = (rand() % 3) + 1;
		
		
		if (choiceNum == 4) { break; }

		switch (choiceNum) {
			case 1:
				if (choiceNum == r_num) {
					puts("����� : scissors");
					puts("��ǻ�� : scissors");
					puts("�����ϴ�. �ٽ� �ѹ� ����!\n");
				}
				else if (choiceNum < r_num && 3 != r_num) {
					puts("����� : scissors");
					puts("��ǻ�� : rock");
					puts("�����ϴ�..�ƽ��׿�\n");
				}
				else if (choiceNum < r_num) {
					puts("����� : scissors");
					puts("��ǻ�� : paper");
					puts("�̰���ϴ� �����մϴ�!\n");
				}
				break;
			case 2:
				if (choiceNum > r_num) {
					puts("����� : rock");
					puts("��ǻ�� : scissors");
					puts("�̰���ϴ� �����մϴ�!\n");;
				}
				else if (choiceNum == r_num) {
					puts("����� : rock");
					puts("��ǻ�� : rock");
					puts("�����ϴ�. �ٽ� �ѹ� ����!\n");
				}
				else if (choiceNum < r_num) {
					puts("����� : rock");
					puts("��ǻ�� : paper");
					puts("�����ϴ�..�ƽ��׿�\n");
				}
				break;
				
			case 3:
				if (choiceNum > r_num && 2 != r_num) {
					puts("����� : paper");
					puts("��ǻ�� : scissors");
					puts("�����ϴ�..�ƽ��׿�\n");
				}
				else if (choiceNum > r_num) {
					puts("����� : paper");
					puts("��ǻ�� : rock");
					puts("�̰���ϴ� �����մϴ�!\n");
				}
				else if (choiceNum == r_num) {
					puts("����� : paper");
					puts("��ǻ�� : paper");
					puts("�����ϴ�. �ٽ� �ѹ� ����!\n");;
				}
				break;
				
		}//end of switch
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
	else{}

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

		case 2: system("cls"); rockPaperScissors(); break;

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

