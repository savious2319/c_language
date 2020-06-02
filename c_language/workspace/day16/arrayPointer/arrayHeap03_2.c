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
	printf("�ݼ� �Է� �� �ּ��� : "); scanf("%d", &banNum);
	ppBan = (int **)malloc(sizeof(int *) * banNum);
	int *pHak = (int *)malloc(sizeof(int) * banNum);

	for (int i = 0; i < banNum; i++) {
		printf("%d�� �л����� �� ���Դϱ�? ", i + 1); scanf("%d", &hak);
		ppBan[i] = (int *)malloc(sizeof(int) * hak);
		pHak[i] = hak;
	for (int j = 0; j < hak; j++) {
		printf("%d�� %d�� ���� �Է� : ", i + 1, j + 1); scanf("%d", &ppBan[i][j]);
		}
	}

	for (int i = 0; i < banNum; i++) {
		printScore(i, pHak[i], ppBan);
	}

	for (int i = 0; i < banNum; i++) {
		free(ppBan[(banNum - 1) - i]);
		ppBan[i] = NULL;
		printf("ppBan[%d] �޸� ���� �ƽ��ϴ�\n", i);
	}

	free(ppBan);
	ppBan = NULL;
}

void printScore(int banNum, int hak, int **ppBan) {
	int rowTot = 0, all_total = 0, sum = 0;
	double all_avg = 0.0;
	puts("===��º�===");
	for (int i = 0; i < hak; i++) {
		printf("%d�� %d�� ���� : %d\n", banNum + 1, i + 1, ppBan[banNum][i]);
		rowTot += ppBan[banNum][i];
		all_total += ppBan[banNum][i];
	}
	sum += hak;
	printf("---%d�� ���� : %d��\t�� ��� : %.2f��---\n", banNum + 1, rowTot, rowTot / (double)hak);
	puts("----------------------");
	rowTot = 0;
	all_avg = all_total / (double)sum;
	//printf("---��ü ���� : %d��\t��ü ��� : %.2f��---\n", all_total, all_avg);

}