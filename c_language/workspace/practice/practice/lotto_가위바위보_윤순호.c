#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
//전방 선언
int getNum(void);	//메뉴 버튼 입력
void getRanNum();	//랜덤 숫자 구하기 함수
void playRSP();		//가위바위보 함수
void getLottoNum();	//로또번호 구하기 함수
char askQuit(void);	//반복,종료 물어보기 함수
void backMenu();	//메인메뉴 돌아가기 함수
void main() {
	//메뉴 선택 변수
	int num = 0;
	//메뉴 선택 return값 저장	
	num = getNum();
		switch (num) {
			//랜덤 숫자 구하기
		case 1:
			getRanNum();
			break;
			//가위바위보 하기
		case 2:
			playRSP();
			break;
			//로또 번호 구하기
		case 3:
			getLottoNum();
			break;
		case 0:
			break;
		}//end switch
	 //프로그램 종료
	system("cls");
	puts("=====================");
	puts("프로그램을 종료합니다.");
	puts("이용해주셔서 감사합니다.");
	puts("=====================");
}//end main
 //메뉴 선택 함수
int getNum(void) {
	int num = 0;
	puts("==============================");
	printf("어떤 메뉴를 실행하시겠습니까?\n");
	puts("==============================");
	puts("1.랜덤 숫자 구하기");
	puts("2.가위바위보 하기");
	puts("3.로또 번호 추천하기");
	puts("0.종료");
	puts("==============================");
	printf("메뉴 입력 : ");
	scanf("%d", &num);
	puts("==============================");
	return num;
}//end getNum
 //반복 종료시 출력 함수
void backMenu() {
	puts("");
	puts("=========================");
	puts("이전 메뉴로 돌아갑니다.");
	puts("=========================");
	Sleep(2000);
	system("cls");
	main();
}//end backMenu
 //반복,종료 물어보기 함수
char askQuit(void) {
	char quit = ' ';
	getchar();
	puts("");
	printf("계속 하실려면 아무 버튼을 눌러주세요.");
	printf("종료는 q를 눌러주세요.\n");
	scanf("%c", &quit);
	return quit;
}//end askQuit
 //랜덤 숫자 구하기 함수
void getRanNum() {
	for (;;) {
		int arRandNum[3] = { 0 };
		//종료 버튼
		char quit = ' ';
		//arRandNum의 사이즈
		int length = sizeof(arRandNum) / sizeof(arRandNum[0]);
		puts("");
		puts("**********************************");
		puts("1~9까지 임의의 정수 3개를 출력합니다.");
		puts("**********************************");
		puts("");
		srand((unsigned)time(NULL));
		for (int i = 0; i < length; i++) {
			//int r_num = rand() % 9 + 1;
			int rand_Num = rand() % 10;
			if (rand_Num == 0) {
				rand_Num += 1;
			}
			printf("[%d번] : %d\n", i + 1, rand_Num);
		}//end if
		quit = askQuit();
		system("cls");
		if (quit == 'q') break;
	}//end for
	backMenu();
}//end getRanNum
 //가위바위보 함수 선언
int askRSP(void);
void myNum(int num);
void cpNum(int c_Num);
void result(int num, int c_Num);
#define ROCK 2
#define SCISSORS 1
#define PAPER 3
//가위바위보 하기 함수
void playRSP() {
	for (;;) {
		//가위바위보 버튼 저장 변수
		int num = 0;
		//종료 버튼
		int quit = ' ';
		//입력받은 값 num에 저장
		num = askRSP();
		srand((unsigned)time(NULL));
		//컴퓨터의 값 구하기
		int c_Num = (rand() % 3) + 1;
		//내가 낸 값
		myNum(num);
		//컴퓨터가 낸 값
		cpNum(c_Num);
		//가위바위보 결과
		result(num, c_Num);
		//반복,종료 물어보기
		quit = askQuit();
		system("cls");
		if (quit == 'q') break;
	}//end for
	backMenu();
}//end playRSP
 //가위바위보 물어보기
int askRSP(void) {
	int num = 0;
	puts("**** 컴퓨터와 가위바위보 게임 ****");
	puts("1. 가위 2. 바위 3. 보");
	printf("무엇을 내시겠습니까? : ");
	scanf("%d", &num);
	return num;
}//end askRSP
 //내가 낸 값 함수
void myNum(int num) {
	puts("-------------------");
	switch (num) {
	case ROCK:
		puts("나\t  : 바위");
		break;
	case SCISSORS:
		puts("나\t  : 가위");
		break;
	case PAPER:
		puts("나\t  : 보");
		break;
	}//end switch
}//end myNum
 //컴퓨터가 낸 값 함수
void cpNum(int c_Num) {
	puts("-------------------");
	switch (c_Num) {
	case ROCK:
		puts("컴퓨터    : 바위");
		break;
	case SCISSORS:
		puts("컴퓨터    : 가위");
		break;
	case PAPER:
		puts("컴퓨터    : 보");
		break;
	}//end switch
	puts("-------------------");
}//end cpNum
 //가위바위보 결과 함수
void result(int num, int c_Num) {
	if (c_Num == num) {
		puts("비겼습니다.");
	}
	else {
		if ((num == ROCK && c_Num == SCISSORS) || (num == SCISSORS && c_Num == PAPER) || (num == PAPER && c_Num == ROCK)) {
			puts("");
			puts("이겼습니다.");
			puts("");
		}
		else {
			puts("");
			puts("졌습니다.");
			puts("");
		}//end 하위 if
	}//end 상위 if
}//end result
 //로또번호 구하기 함수
void inputLotto(int *arLotto, int length);
void sortAsc(int *arLotto, int length);
void outputLotto(int *arLotto, int length);
void getLottoNum() {
	for (;;) {
		//로또번호 값을 담을 배열 
		int arLotto[6] = { 0 };
		//종료 버튼
		char quit = ' ';
		//배열의 길이
		int length = sizeof(arLotto) / sizeof(arLotto[0]);
		srand((unsigned)time(NULL));

		//임의의 번호 6개를 arLotto에 저장
		inputLotto(arLotto, length);
		//문제3-1] 오름차순으로 출력해 주세요 (스위칭 이용)
		//오름차순으로 정리
		sortAsc(arLotto, length);
		//출력하기
		outputLotto(arLotto, length);
		//반복,종료 물어보기
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
		printf("추천번호 : %d\n", arLotto[i]);
	}//end for
	puts("-----------------------------");
	puts("");
	puts("행운이 있길 기대합니다~!!");
}//end outputLotto