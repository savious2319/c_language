#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void menuSelecting();
int menuOption();
void optionOne_ProduceRandomNumber();
void optionTwo_RockSissorsPaper();
void optionThree_Lottery();

void ascending(int arLength, int arRottery[]);
void pressAnykeyToContinue();

// main
void main() {
	srand((unsigned)time(NULL));
	menuSelecting();
}

// menu switchcase
void menuSelecting() {
	while (1) {
		system("cls");
		int choice = menuOption();
		system("cls");
		if (choice == 0) { puts("����"); break; }
		switch (choice) {
		case 1: optionOne_ProduceRandomNumber(); break;
		case 2: optionTwo_RockSissorsPaper(); break;
		case 3: optionThree_Lottery(); break;
		default: printf("�޴��� �ִ� ��ȣ�� �������ּ���\n");
		}
		pressAnykeyToContinue();
	}
}

// main menu
int menuOption() {
	int choice = 0;
	char *arMenu[3] = { "�� ������ �� ����", "�� ���������� ����", "�� �ζ�(Lottery)" };

	printf("����������������������������������������������������\n");
	printf("��        M E N U         ��\n");
	printf("����������������������������������������������������\n");
	for (int i = 0; i < sizeof(arMenu) / sizeof(arMenu[0]); i++) {
		printf("�� %s\t �� \n", arMenu[i]);
	}
	printf("����������������������������������������������������\n");
	printf("��                Exit(0) ��\n");
	printf("����������������������������������������������������\n");
	printf(" �Է� : ");
	scanf_s("%d", &choice);
	return choice;
}
// option1
void optionOne_ProduceRandomNumber() {
	int amount = 0, rangeS = 0, rangeE = 0;

	printf("�ʿ��� ������ �� : ");
	scanf_s("%d", &amount);
	int *arRanNum = (int *)malloc(amount * sizeof(int));
	printf("����(min~max) : ");
	getchar();
	scanf_s("%d~%d", &rangeS, &rangeE);

	for (int i = 0; i < amount; i++) {
		arRanNum[i] = rand() % (rangeE - rangeS) + rangeS;
		if (i == 0) printf("[start]");
		printf(" %d ", arRanNum[i]);
		if (i == (amount - 1)) printf("[end]");
		Sleep(500);
	}
	puts("");
}

// option2
void optionTwo_RockSissorsPaper() {
	const char *arRockSissorsPaper[3] = { "����","����","��" };
	const char *arResult[3] = { "�����ϴ�.", "�̰���ϴ�.", "�����ϴ�." };
	int choice = 0;
	int result = 0;

	puts("����������������������������������������������������������������");
	puts("��        ���������� ����       ��");
	puts("����������������������������������������������������������������");
	puts("�� �� �� �ϳ��� �������ּ���.   ��");
	puts("�� �����  �谡��  �麸         ��");
	puts("����������������������������������������������������������������");
	scanf_s("%d", &choice);

	int r = (rand() % 3) + 1;
	if (choice == r) result = 0;
	else {
		if (choice == 1 && r == 2 || choice == 2 && r == 3 || choice == 3 && r == 1) result = 1;
		else result = 2;
	}

	puts("������������������������������������������������������������������");
	puts("��             ���              ��");
	puts("������������������������������������������������������������������");
	printf("�� user : %s\tcomputer : %s ��\n", arRockSissorsPaper[choice - 1], arRockSissorsPaper[r - 1]);
	puts("������������������������������������������������������������������");
	puts("��������������������������������������������������");
	printf("��\t%s\t��\n", arResult[result]);
	puts("��������������������������������������������������");
}

// option3
void optionThree_Lottery() {
	static int cnt = 1;
	int arRottery[6] = { 0 };
	int arRotteryLength = sizeof(arRottery) / sizeof(arRottery[0]);

	for (int i = 0; i < arRotteryLength; i++) {
		arRottery[i] = (rand() % 45) + 1;
	}
	ascending(arRotteryLength, arRottery);
	printf("%dȸ ��÷ ��ȣ : ", cnt);
	for (int i = 0; i < arRotteryLength; i++) {
		printf("%d ", arRottery[i]);
		Sleep(600);
	}
	cnt++;
	puts("");

}
// sort Lottery 
void ascending(int arLength, int arRottery[]) {
	for (int i = 0; i < arLength-1; i++) {
		for (int j = 0; j < (arLength-i)-1; j++) {
			if (arRottery[j] > arRottery[j + 1]) {
				//printf("%d-%d. %d %d\n", i,j,arRottery[j], arRottery[j + 1]);
				int temp = arRottery[j];
				arRottery[j] = arRottery[j + 1];
				arRottery[j + 1] = temp;
				//printf("%d-%d. %d %d\n", i,j, arRottery[j], arRottery[j + 1]);
			}
		}
	}
}
// loop continue
void pressAnykeyToContinue() {
	printf("[press any key to continue]");
	getch();
}

