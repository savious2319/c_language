#include <stdio.h>
#include <stdlib.h>
void inputScore(int *arScore, int scoreSize, char **arSubject, int subjectSize);
void printScore(int *arScore, int scoreSize, char **arSubject, int subjectSize);
void inputSNumGrade(int sNum, int *pNum);
void printSNumGrade(int sNum, int *pNum);

void main() {
	int arScore[3] = { 0 };
	int scoreSize = sizeof(arScore) / sizeof(arScore[0]);
	char *arSubject[3] = { "국어", "영어", "수학" };
	int subjectSize = sizeof(arSubject) / sizeof(arSubject[0]);
	inputScore(arScore, scoreSize, arSubject, subjectSize);
	printScore(arScore, scoreSize, arSubject, subjectSize);

	int sNum = 0;
	do{
	printf("과목수 입력: "); scanf("%d", &sNum);
		if (sNum == 0 || sNum < 3 || sNum > 10) {
			puts("필수 3과목, 선택 7과목. 총10과목까지 선택가능");
		}
	} while (sNum == 0 || sNum < 3 || sNum > 10);
	int *pNum = (int *)malloc(sNum * sizeof(int));
	inputSNumGrade(sNum, pNum);
	printSNumGrade(sNum, pNum);

	free(pNum);
	pNum = NULL;
}

void inputScore(int *arScore, int scoreSize, char **arSubject, int subjectSize) {
	for (int i = 0; i < scoreSize; i++) {

		printf("%s점수 입력 : ", arSubject[i]); scanf("%d", &arScore[i]);
		if (arScore[i] < 0 || arScore[i] > 100) { puts("0~100점수 입력하세요"); i--; }
	}
}

void printScore(int *arScore, int scoreSize, char **arSubject, int subjectSize) {
	int total = 0;
	for (int i = 0; i < scoreSize; i++) {
		printf("%s점수 : %d\n", arSubject[i], arScore[i]);
		total += arScore[i];
	}
	printf("총점: %d\t평균: %.2f\n", total, (double)total / scoreSize);
}

void inputSNumGrade(int sNum, int *pNum) {
	for (int i = 0; i < sNum; i++) {
		printf("과목.%d 점수 입력: ", i + 1); scanf("%d", &pNum[i]);
		if (pNum[i] < 0 || pNum[i] > 100) { puts("0~100점수 입력하세요"); i--; }
	}
	}

	void printSNumGrade(int sNum, int *pNum) {
		int total = 0;
		for (int i = 0; i < sNum; i++) {
			printf("과목.%d 점수 : %d\n", i + 1, pNum[i]);
			total += pNum[i];
		}
		printf("총점: %d\t평균: %.2f\n", total, (double)total / sNum);
	}
