#include<stdio.h>
#include<stdlib.h>
//동적 메모리 할당 함수
//학생 점수 입력 함수
//학생 점수, 총점, 평균 출력 함수
int sNumMalloc(int sNum);
void inputGrade(int *pNum, int sNum);
void printGrade(int *pNum, int sNum);
void main() {
	int cNum = 0;
	int sNum = 0;
	int *pNum = 0;
	//반 수 입력 받기
	printf("반 수를 입력하세요 : "); scanf("%d", &cNum);

	for (int i = 0; i < cNum; i++){
		printf("%d반 학생 수 입력 : ", i + 1); scanf("%d", &sNum);

		pNum = sNumMalloc(sNum);
		inputGrade(pNum, sNum);
		printGrade(pNum, sNum);

		free(pNum);
		pNum = NULL;

	}
}
int sNumMalloc(int sNum) {
	return (int *)malloc(sNum * sizeof(int));
}
void inputGrade(int *pNum, int sNum) {
	for (int i = 0; i < sNum; i++){
		printf("%d번 학생 점수 입력 : ", i + 1);
		scanf("%d", &pNum[i]);
	}
}

void printGrade(int *pNum, int sNum) {
	int total = 0;
	for (int i = 0; i < sNum; i++){
		printf("%d번 학생 점수 : %d\n", i + 1, pNum[i]);
		total += pNum[i];
	}
	printf("총점: %d\t평균: %.2f\n", total, (double)total / sNum);
}