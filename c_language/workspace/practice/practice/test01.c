#include <stdio.h>
#include <stdlib.h>
void inputGrade(char **arSubject, int subSize, int *arSubGrade, int subGradeSize);
void printGrade(char **arSubject, int subSize, int *arSubGrade, int subGradeSize);
void inputSubNum(int *subNum, int u_num);
void printSubGrade(int *subNum, int u_num);
//문제1] 메인함수에서 국어 영어 수학 점수 입력 받고
//		printScore01()에서 총점 평균을 출력한다.
//문제2] 메인함수에서 시험과목 수를 입력받고 (필수 3과목, 선택 7과목) 그래서 10개를 넘으면 안됨
//		n_PrintScore02() 함수에서 시험과목 수 만큼 점수를 입력받은 후 <=== 동적메모리(동적배열)
//		총점, 평균 구하는 함수, n_PrintScore02() 만들기
void main() {
	int arSubGrade[3] = { 0 };
	int subGradeSize = sizeof(arSubGrade) / sizeof(arSubGrade[0]);
	char *arSubject[3] = { "국어", "영어", "수학" };
	int subSize = sizeof(arSubject) / sizeof(arSubject[0]);
	inputGrade(arSubject, subSize, arSubGrade, subGradeSize);
	printGrade(arSubject, subSize, arSubGrade, subGradeSize);
	int u_num = 0;
	do{
	printf("시험과목 수를 입력하세요 : "); scanf("%d", &u_num);
	if (u_num == 0 || u_num < 3 || u_num > 10) { puts("필수 3과목, 선택 7과목"); }
	} while (u_num < 3 || u_num > 10);
	int *subNum = (int *)malloc(u_num * sizeof(int));
	inputSubNum(subNum, u_num);
	printSubGrade(subNum, u_num);
}

void inputGrade(char **arSubject, int subSize, int *arSubGrade, int subGradeSize) {
	system("cls");
	for (int i = 0; i < subSize; i++){
		printf("%s점수 입력 : ", arSubject[i]);
		scanf("%d", &arSubGrade[i]);
		if (arSubGrade[i] < 0 || arSubGrade[i] > 100) {
			puts("0~100점 사이를 입력해주세요");
			i--;
		}
	}
}

void printGrade(char **arSubject, int subSize, int *arSubGrade, int subGradeSize) {
	int total = 0;
	for (int i = 0; i < subSize; i++) {
		printf("%s점수 : %d\n", arSubject[i], arSubGrade[i]);
		total += arSubGrade[i];
	}
	printf("총점: %d\t평균: %.2f\n", total, (double)total / subSize);
}

void inputSubNum(int *subNum, int u_num) {
	for (int i = 0; i < u_num; i++){
		printf("과목%d 점수 입력 : \n", i + 1);
		scanf("%d", &subNum[i]);
		if (subNum[i] < 0 || subNum[i] > 100) {
			puts("0~100점 사이를 입력해주세요");
			i--;
		}
	}

}

void printSubGrade(int *subNum, int u_num) {
	int total = 0;
	for (int i = 0; i < u_num; i++){
		printf("과목%d 점수 : %d\n", i + 1, subNum[i]);
		total += subNum[i];
	}
	printf("총점: %d\t평균: %.2f\n", total, (double)total / u_num);
}