#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

//랜덤숫자 출력 함수(1~9)
void printRandomNum();
//가위 바위 보 게임 함수
void rockPaperScissors();
//로또추천 번호 출력 함수(1~45)
void printLotto();
//로또추천 번호 오름차순 함수
void printLottoAscend(int *arLottoNum, int sizeLotto);
//게임 실행 함수
void gameSelection();
//종료 함수
char quitGame();
//다시 메인 함수로 가는 함수
void pressAnyKeyToContinue();

void main() {
	srand((unsigned)time(NULL));
	gameSelection();

}//end of main
void gameSelection() {
	while (1) {
		system("cls");
		int num;
		puts("******C언어 게임******\n1. 랜덤 숫자 보기\n2. 가위 바위 보\n3. 로또추천 번호\n4. 종료");
		printf("원하는 게임을 선택하세요 : "); scanf("%d", &num);
		
		if(num == 4){ puts("\n프로그램을 종료합니다\n이용해주셔서 감사합니다^^"); break; }
		switch (num) {

		case 1: printRandomNum(); break;

		case 2: rockPaperScissors(); break;

		case 3: printLotto(); break;

		default: puts("잘못 누르셨습니다. 1~4를 선택해세요");
		}//end of switch
		pressAnyKeyToContinue();
	}//end of while
		
	}
/*int gameMenu() {
	system("cls");
	int num;
	puts("******C언어 게임******\n1. 랜덤 숫자 보기\n2. 가위 바위 보\n3. 로또추천 번호\n4. 종료");
	printf("원하는 게임을 선택하세요 : "); scanf("%d", &num);
	return num;
}*/
char quitGame() {
	char quit = ' ';
	puts("계속하시려면 아무거나 누르시고 종료하시려면 q를 누르세요");
	scanf("%c%c", &quit, &quit);
	return quit;
}
void printRandomNum() {

	while (1) {
		int userNum = 0, MIN = 0, MAX = 0;
		printf("보고싶은 랜덤한 숫자의 수를 입력해주세요 : "); scanf("%d", &userNum);
		int *arRandNum = (int *)malloc(userNum * sizeof(int));
		printf("범위를 입력하세요(min~max) : "); scanf("%d~%d", &MIN, &MAX);
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
	const char *arResult[3] = { "비겼습니다. 다시 한번 도전!\n", "이겼습니다 축하합니다!\n", "졌습니다..아쉽네요\n" };
	while (1) {
		puts("**** 컴퓨터와 가위바위보 게임****");
		puts("1. scissors 2. rock 3. paper 4. 종료");
		printf("무엇을 내시겠습니까?"); scanf("%d", &choiceNum);
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
		printf("\n사용자 :%s\t컴퓨터 :%s\n", arRPS[choiceNum - 1], arRPS[r_num - 1]);
		printf("%s\t\n", arResult[resultNum]);
		char quit = quitGame();
		if (quit == 'q') { break; }
	}// end of while
	
}

void printLotto() {
	int cnt = 0;
	while (1) {
		puts("****오늘의 로또 추천 번호****");
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
		printf("\n오름차순으로도 보시겠습니까? [y/n]");
		scanf("%c",&choice);
		if (choice == 'y') { printLottoAscend(arLottoNum, sizeLotto); break; }
		else if(choice == 'n') { break; }
		
	}//end of while
	
}//end of printLotto	

void printLottoAscend(int *arLottoNum, int sizeLotto) {
	
		puts("****오늘의 로또 추천 번호(오름차순)***");
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

