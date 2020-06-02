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
		printf("랜덤번호[%d] : %d\n", i + 1, arRandNum[i]);
	}
	puts("");
}

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
			if (choiceNum == 1 && r_num == 3 || choiceNum == 2 && r_num == 1 || choiceNum == 3 && r_num == 2) {
				resultNum = 1;
			}
			else {
				resultNum = 2;
			}
		}	
			printf("\n사용자 :%s\t컴퓨터 :%s\n", arRPS[choiceNum - 1], arRPS[r_num - 1]);
			printf("%s\t\n", arResult[resultNum]);
	}// end of while
}
void lottoNum() {
	system("cls");
	char choice = ' ';
	int arRandNum3[6] = { 0 };
	puts("****이번 주 로또 번호 추천****");
	for (int i = 0; i < 6; i++) {
		arRandNum3[i] = (rand() % 45) + 1;
	}
	printf("%d, %d, %d, %d, %d, %d\n행운이 있길 기대합니다~!!!\n", arRandNum3[0], arRandNum3[1], arRandNum3[2], arRandNum3[3], arRandNum3[4], arRandNum3[5]);
	puts("");
	getchar();
	printf("로또 번호 오름차순으로도 보고 싶으세요? [y/n]"); scanf("%c", &choice);
	puts("");
	if (choice == 'y') { lottoNumAscend(); }
	else {}

}

void lottoNumAscend() { // asce : 오름	desc : 내림
	system("cls");
	puts("****이번 주 로또 번호 추천(오름차순)****");
	int arRandNum4[6] = { 0 };
	for (int i = 0; i < 6; i++) {
		arRandNum4[i] = (rand() % 45) + 1;
	}
	for (int i = 0; i < 6; i++) {
		for (int j = i + 1; j < 6; j++) {
			//printf("바뀌기전 arRandNum[%d] : %d\tarRandNum[%d] : %d\n", i, arRandNum4[i], j, arRandNum4[j]);
			if (arRandNum4[i] > arRandNum4[j]) {
				int temp = arRandNum4[i];
				arRandNum4[i] = arRandNum4[j];
				arRandNum4[j] = temp;
				//printf("바꾼후 arRandNum[%d] : %d\tarRandNum[%d] : %d\n", i, arRandNum4[i], j, arRandNum4[j]);;
			}
		}
	}

	printf("%d, %d, %d, %d, %d, %d\n당신에게 행운이 있길 바래요!\n", arRandNum4[0], arRandNum4[1], arRandNum4[2], arRandNum4[3], arRandNum4[4], arRandNum4[5]);
	puts("");
}

void main() {
	while (1) {
		srand((unsigned)time(NULL)); //메인에만 있으면 다른 함수에도 적용된다!
		int gameChoice = 0;
		puts("===C언어 게임===");
		puts("1. 1~9사이의 3개의 랜덤수 뽑기\n2. 가위 바위 보 게임\n3. 로또 추천 번호 뽑기\n4. 종료\n");
		printf("번호 선택 : "); scanf("%d", &gameChoice);

		if (gameChoice == 4) { break; }

		switch (gameChoice) {
		case 1: printRandomNum(); break;

		case 2: rockPaperScissors(); break;

		case 3: lottoNum(); break;

		default: puts("잘못 입력하셨습니다\n"); break;
		}
	}
	puts("프로그램 종료");
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

