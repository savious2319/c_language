#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void inputScore01(int scoreSize, int *pScore, int pSubSize, char **pSubject);
void printScore01(int scoreSize, int *pScore, int pSubSize, char **pSubject);
int n_getSubNum02(int testNum);
void n_InputScore02(int testNum, int *pSubNum);
void n_PrintScore02(int testNum, int *pSubNum);



void main() {

	//문제1] 메인함수에서 국어 영어 수학 점수 입력 받고
	//		printScore01()에서 총점 평균을 출력한다.

	int score[3] = { 0 }; //국어 영어 수학 점수 배열 초기화
	char *subject[3] = {"국어","영어","수학"}; //문자열 포인터 배열 초기화
	int subSize = sizeof(subject) / sizeof(subject[0]); //문자열 배열 크기
	int scoreSize = sizeof(score) / sizeof(score[0]); //과목 배열 크기

	inputScore01(scoreSize, score, subSize, subject);

	printScore01(scoreSize, score, subSize, subject); //과목 배열 크기, 과목 배열 주소, 문자열 배열 크기, 문자열 배열 주소


	//문제2] 메인함수에서 시험과목 수를 입력받고 (필수 3과목, 선택 7과목) 그래서 10개를 넘으면 안됨
	//		n_PrintScore02() 함수에서 시험과목 수 만큼 점수를 입력받은 후 <=== 동적메모리(동적배열)
	//		총점, 평균 구하는 함수, n_PrintScore02() 만들기
	int testNum = 0;

	testNum = n_getSubNum02(testNum);

	int *subNum = (int *)malloc(testNum * sizeof(int)); // 입력받은 과목수만큼의 동적 배열 크기 생성해서 포인터 변수에 대입

	n_InputScore02(testNum, subNum);

	n_PrintScore02(testNum, subNum);

	free(subNum); // 메모리 해제
	subNum = NULL; // stack영역 해제
	printf("%d\n", *subNum);
		
}

//국어 영어 수학 점수 입력하는 함수
void inputScore01(int scoreSize, int *pScore, int pSubSize, char **pSubject) {
	printf("┌──────────────────────────┐\n");
	printf("│        점수 입력         │\n");
	printf("└──────────────────────────┘\n");
	for (int i = 0; i < scoreSize; i++)
	{
		printf("%s점수 입력 : ", pSubject[i]); 
		scanf("%d", &pScore[i]);
		if (pScore[i] < 0 || pScore[i] > 100) {
			puts("0~100점 사이를 입력하세요");
			i--;
		}
	}
}
//국어 영어 수학 점수, 총점, 평균 출력하는 함수
void printScore01(int scoreSize, int *pScore, int pSubSize, char **pSubject) {
	int total = 0;											//문자열 배열 주소 안에 문자열이 있기때문에 이중 포이터로 받아야 한다
	printf("┌──────────────────────────┐ \n");
	printf("│ 과목별 점수 / 총점 / 평균│ \n");
	printf("└──────────────────────────┘ \n");
	for (int i = 0; i < scoreSize; i++)
	{
		printf("%s점수 : %d점\n", pSubject[i], pScore[i]); //국어 영어 수학 점수 출력
		Sleep(500);
		total += pScore[i]; // 총 3과목 총점 
	}
	Sleep(500);
	puts("");
	printf("총점 : %d점\n평균 : %.2f점\n", total, (double)total / scoreSize); //총점, 평균 출력
}
//과목수 입력받는 함수
int n_getSubNum02(int testNum) {
	do {
		puts("");
		printf("┌──────────────────────────┐ \n");
		printf("│     시험 과목수 입력     │ \n");
		printf("└──────────────────────────┘ \n");
		scanf("%d", &testNum);
		system("cls");
		if (testNum == 0 || testNum < 3 || testNum > 11) {
			printf("①적어도 3과목 선택 필수\n②선택과목은 7개\n③총 10과목 초과하면 안됨\n");
		}
	} while (testNum < 3 || testNum > 11);

	return testNum;
}
//과목 점수 입력받는 함수
void n_InputScore02(int testNum, int *pSubNum){
	for (int i = 0; i < testNum; i++)
	{
		printf("%d번 과목 점수 입력 : ", i + 1); 
		scanf("%d", &pSubNum[i]); // 과목 점수 입력받기
		if (pSubNum[i] < 0 || pSubNum[i] > 100) {
			puts("0~100점 사이를 입력하세요");
			i--;
		}
	}

}
//과목 점수 입력, 총점 평균을 출력하는 함수
void n_PrintScore02(int testNum, int *pSubNum) {
	int total = 0;
	puts("==========================");
	printf("┌─────────────────────────────┐ \n");
	printf("│ 시험 과목 점수 / 총점 / 평균│ \n");
	printf("└─────────────────────────────┘ \n");
	for (int i = 0; i < testNum; i++)
	{
		printf("%d번 과목 점수 : %d점\n", i + 1, pSubNum[i]);
		Sleep(500);
		total += pSubNum[i];
	}
	Sleep(500);
	puts("==========================");
	printf("총점 : %d점\n평균 : %.2f점\n", total, (double)total / testNum);

}
