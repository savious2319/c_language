#include <stdio.h>
#include <stdlib.h>
void inputScore(int **ppBan);
void printScore(int banNum, int hak, int **ppBan);

void main() {
	int **ppBan = NULL;
	inputScore(ppBan);

}

void inputScore(int **ppBan) {

	int banNum = 0;
	int hak = 0;
	printf("반수 입력 해 주세요 : "); scanf("%d", &banNum);
	ppBan = (int **)malloc(sizeof(int *) * banNum);
	int *pHak = (int *)malloc(sizeof(int) * banNum);

	for (int i = 0; i < banNum; i++) {
		printf("%d반 학생수는 몇 명입니까? ", i + 1); scanf("%d", &hak);
		ppBan[i] = (int *)malloc(sizeof(int) * hak);
		pHak[i] = hak;
	for (int j = 0; j < hak; j++) {
		printf("%d반 %d번 점수 입력 : ", i + 1, j + 1); scanf("%d", &ppBan[i][j]);
		}
	}

	for (int i = 0; i < banNum; i++) {
		printScore(i, pHak[i], ppBan);
	}

	for (int i = 0; i < banNum; i++) {
		free(ppBan[(banNum - 1) - i]);
		ppBan[i] = NULL;
		printf("ppBan[%d] 메모리 해제 됐습니다\n", i);
	}

	free(ppBan);
	ppBan = NULL;
}

void printScore(int banNum, int hak, int **ppBan) {
	int rowTot = 0, all_total = 0, sum = 0;
	double all_avg = 0.0;
	puts("===출력부===");
	for (int i = 0; i < hak; i++) {
		printf("%d반 %d번 점수 : %d\n", banNum + 1, i + 1, ppBan[banNum][i]);
		rowTot += ppBan[banNum][i];
		all_total += ppBan[banNum][i];
	}
	sum += hak;
	printf("---%d반 총점 : %d점\t반 평균 : %.2f점---\n", banNum + 1, rowTot, rowTot / (double)hak);
	puts("----------------------");
	rowTot = 0;
	all_avg = all_total / (double)sum;
	//printf("---전체 총점 : %d점\t전체 평균 : %.2f점---\n", all_total, all_avg);

}