#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

//�������� ��� �Լ�(1~9)
void printRandomNum();
//���� ���� �� ���� �Լ�
void rockPaperScissors();
//�ζ���õ ��ȣ ��� �Լ�(1~45)
void printLotto();
//�ζ���õ ��ȣ �������� �Լ�
void printLottoAscend(int *arLottoNum, int sizeLotto);
//���� ���� �Լ�
void gameSelection();
//���� �Լ�
char quitGame();
//�ٽ� ���� �Լ��� ���� �Լ�
void pressAnyKeyToContinue();

void main() {
	srand((unsigned)time(NULL));
	gameSelection();

}//end of main
void gameSelection() {
	while (1) {
		system("cls");
		int num;
		puts("******C��� ����******\n1. ���� ���� ����\n2. ���� ���� ��\n3. �ζ���õ ��ȣ\n4. ����");
		printf("���ϴ� ������ �����ϼ��� : "); scanf("%d", &num);
		
		if(num == 4){ puts("\n���α׷��� �����մϴ�\n�̿����ּż� �����մϴ�^^"); break; }
		switch (num) {

		case 1: printRandomNum(); break;

		case 2: rockPaperScissors(); break;

		case 3: printLotto(); break;

		default: puts("�߸� �����̽��ϴ�. 1~4�� �����ؼ���");
		}//end of switch
		pressAnyKeyToContinue();
	}//end of while
		
	}
/*int gameMenu() {
	system("cls");
	int num;
	puts("******C��� ����******\n1. ���� ���� ����\n2. ���� ���� ��\n3. �ζ���õ ��ȣ\n4. ����");
	printf("���ϴ� ������ �����ϼ��� : "); scanf("%d", &num);
	return num;
}*/
char quitGame() {
	char quit = ' ';
	puts("����Ͻ÷��� �ƹ��ų� �����ð� �����Ͻ÷��� q�� ��������");
	scanf("%c%c", &quit, &quit);
	return quit;
}
void printRandomNum() {

	while (1) {
		int userNum = 0, MIN = 0, MAX = 0;
		printf("������� ������ ������ ���� �Է����ּ��� : "); scanf("%d", &userNum);
		int *arRandNum = (int *)malloc(userNum * sizeof(int));
		printf("������ �Է��ϼ���(min~max) : "); scanf("%d~%d", &MIN, &MAX);
		for (int i = 0; i < userNum; i++) {
			arRandNum[i] = (rand() % MAX) + MIN;
			printf("Random No.%d : %d\n", i + 1, arRandNum[i]);
		}//end of for
		char quit = quitGame();
		if (quit == 'q') { break; }
	}//end of while
	
}//end of printRandomNum
#define SCISSORS 1
#define ROCK 2
#define PAPER 3
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
			if (choiceNum == SCISSORS && r_num == PAPER || choiceNum == ROCK && r_num == SCISSORS ||
				choiceNum == PAPER && r_num == ROCK) {
				resultNum = 1;
			}
			else {
				resultNum = 2;
			}
		}
		printf("\n����� :%s\t��ǻ�� :%s\n", arRPS[choiceNum - 1], arRPS[r_num - 1]);
		printf("%s\t\n", arResult[resultNum]);
		char quit = quitGame();
		if (quit == 'q') { break; }
	}// end of while
	
}

void printLotto() {
	int cnt = 0;
	while (1) {
		puts("****������ �ζ� ��õ ��ȣ****");
		char choice = ' ';
		int arLottoNum[6] = { 0 };
		int sizeLotto = sizeof(arLottoNum) / sizeof(arLottoNum[0]);
		for (int i = 0; i < sizeLotto; i++) {
			arLottoNum[i] = (rand() % 45) + 1;
			if (i == 5) {
				printf("%d", arLottoNum[i]);
				break;
			}
			printf("%d,", arLottoNum[i]);
			putchar(' '); putchar(' ');
			Sleep(500);
		}//end of for
		if (cnt == 0) {
			getchar();
		}
		cnt++;
		printf("\n�����������ε� ���ðڽ��ϱ�? [y/n]");
		scanf("%c",&choice);
		if (choice == 'y') { printLottoAscend(arLottoNum, sizeLotto); break; }
		else if(choice == 'n') { break; }
		
	}//end of while
	
}//end of printLotto	

void printLottoAscend(int *arLottoNum, int sizeLotto) {
	
		puts("****������ �ζ� ��õ ��ȣ(��������)***");
		for (int i = 0; i < sizeLotto; i++) {
			arLottoNum[i] = (rand() % 45) + 1;
		}
		for (int i = 0; i < sizeLotto; i++) {
			for (int j = i + 1; j < sizeLotto; j++) {
				if (arLottoNum[i] > arLottoNum[j]) {
					int temp = arLottoNum[i];
					arLottoNum[i] = arLottoNum[j];
					arLottoNum[j] = temp;
				}//end of if	
			}//end of j for
		}//end of i for
		for (int i = 0; i < sizeLotto; i++) {
			if (i == 5) {
				printf("%d\n", arLottoNum[i]);
				break;
			}
			printf("%d,", arLottoNum[i]);
			putchar(' '); putchar(' ');
			Sleep(500);
		}// end of for	
}//end of printLottoAscend

void pressAnyKeyToContinue() {
	puts("Please Press Any Key To Continue");
	getch();

}

