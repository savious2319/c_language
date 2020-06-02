#include <stdio.h>
#include <stdlib.h>

//동적 메모리 할당 함수
int sNumMalloc(int sNum) {
	return (int *)malloc(sNum * sizeof(int));
}

//학생 점수 입력 함수
void sInputGrade(int sNum, int *pNum) {
	for (int i = 0; i < sNum; i++) {
		printf("%d번 학생 점수 입력 : ", i + 1); scanf("%d", pNum + i);
	}
}
//학생 점수, 총점, 평균 출력 함수
void printTotalGradeAvg(int sNum, int *pNum, int total) {
	for (int i = 0; i < sNum; i++) {
		printf("%d번 학생 점수 : %d\n", i + 1, *(pNum + i));
	}
	for (int i = 0; i < sNum; i++) {
		total += *(pNum + i);
	}

	printf("총점 : %d\t평균 : %.2f\n", total, (double)total / sNum);
}
void main() {
	int cNum = 0;
	int sNum = 0;
	int total = 0;

	printf("반 수 입력 : "); scanf("%d", &cNum);
	for (int i = 0; i < cNum; i++) {

		printf("%d반 학생 수 입력 : ", i + 1); scanf("%d", &sNum);

		int *pNum = sNumMalloc(sNum);

		sInputGrade(sNum, pNum);

		printTotalGradeAvg(sNum, pNum, total);

		free(pNum);
		pNum = NULL;
	}
}