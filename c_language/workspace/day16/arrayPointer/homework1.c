#include <stdio.h>
#include <stdlib.h>
void inputScore(int banNum, int hak, int **ppBan);
void printScore(int banNum, int hak, int **ppBan);

void main() {
	int banNum = 0;
	int hak = 0;
	printf("반수 입력 해 주세요 : "); scanf_s("%d", &banNum);
	int **ppBan = (int **)malloc(sizeof(int *) * banNum);

	for (int i = 0; i < banNum; i++) {
		printf("%d반 학생수는 몇 명입니까? ", i + 1); scanf_s("%d", &hak);
	}
	inputScore(banNum, hak, ppBan);

	printScore(banNum, hak, ppBan);

	//for (int i = 0; i < banNum; i++) {
	//	free(ppBan[(banNum - 1) - i]);
	//	ppBan[i] = NULL;
	//	printf("pArr[%d] 메모리 해제 됐습니다\n", i);
	//}

	//free(ppBan);
	////free(pHak);

	//ppBan = NULL;
	////pHak = NULL;
}



void inputScore(int banNum, int hak, int **ppBan) {
	int *pHak = (int *)malloc(sizeof(int) * banNum);


	puts("===입력부===");
	for (int i = 0; i < banNum; i++) {
		pHak[i] = hak;
		ppBan[i] = (int *)malloc(sizeof(int) * hak);
		for (int j = 0; j < pHak[i]; j++) {
			printf("%d반 %d번 점수 입력 : ", i + 1, j + 1); scanf_s("%d", &ppBan[i][j]);
		}
		break;
	}

}

void printScore(int banNum, int hak, int **ppBan) {
	int *pHak = (int *)malloc(sizeof(int) * banNum);
	printf("%d\n", pHak[0]);
	printf("%d\n", pHak[1]);
	int rowTot = 0, all_total = 0, sum = 0;
	double all_avg = 0.0;
	puts("===출력부===");
	for (int i = 0; i < banNum; i++) {
		for (int j = 0; j < pHak[i]; j++) {
			printf("%d반 %d번 점수 : %d\n", i + 1, j + 1, ppBan[i][j]);
			rowTot += ppBan[i][j];
			all_total += ppBan[i][j];
		}
		sum += pHak[i];
		printf("---%d반 총점 : %d점\t반 평균 : %.2f점---\n", i + 1, rowTot, rowTot / (double)pHak[i]);
		puts("----------------------");
		rowTot = 0;
	}
	all_avg = all_total / (double)sum;
	printf("---전체 총점 : %d점\t전체 평균 : %.2f점---\n", all_total, all_avg);

}



//void inputScore(int banNum, int *pHak, int **ppBan);
//void printScore(int banNum, int *pHak, int **ppBan);
//
//void main() {
//int banNum = 0;
//int hak = 0;
//printf("반수 입력 해 주세요 : "); scanf("%d", &banNum);
//int **ppBan = (int **)malloc(sizeof(int *) * banNum);
//int *pHak = (int *)malloc(sizeof(int) * banNum);
//
//
//for (int i = 0; i < banNum; i++) {
//printf("%d반 학생수는 몇 명입니까? ", i+1); scanf("%d", &hak);
//ppBan[i] = (int *)malloc(sizeof(int) * hak);
//pHak[i] = hak;
//
//}
//inputScore(banNum, pHak, ppBan);
//
//printScore(banNum, pHak, ppBan);
//
//for (int i = 0; i < banNum; i++) {
//	free(ppBan[(banNum - 1) - i]);
//	ppBan[i] = NULL;
//	printf("pArr[%d] 메모리 해제 됐습니다\n", i);
//}
//
//
//free(ppBan);
//free(pHak);
//
//ppBan = NULL;
//pHak = NULL;
//
//printf("%d\n", ppBan);
//printf("%d\n", pHak);
//}
//
//void inputScore(int banNum, int *pHak, int **ppBan) {
//puts("===입력부===");
//for (int i = 0; i < banNum; i++) {
//for (int j = 0; j < pHak[i]; j++){
//printf("%d반 %d번 점수 입력 : ", i+1, j + 1); scanf("%d", &ppBan[i][j]);
//
//}
//}
//
//}
//
//void printScore(int banNum, int *pHak, int **ppBan) {
//int rowTot = 0, all_total = 0, sum = 0;
//double all_avg = 0.0;
//puts("===출력부===");
//for (int i = 0; i < banNum; i++) {
//for (int j = 0; j < pHak[i]; j++) {
//printf("%d반 %d번 점수 : %d\n", i + 1, j + 1, ppBan[i][j]);
//rowTot += ppBan[i][j];
//all_total += ppBan[i][j];
//}
//sum += pHak[i];
//printf("---%d반 총점 : %d점\t반 평균 : %.2f점---\n", i + 1, rowTot, rowTot / (double)pHak[i]);
//puts("----------------------");
//rowTot = 0;
//}
//all_avg = all_total / (double)sum;
//printf("---전체 총점 : %d점\t전체 평균 : %.2f점---\n", all_total, all_avg);
//
//}








