#include <stdio.h>
#include <stdlib.h>
void inputScore(int banNum, int hak, int **ppBan);
void printScore(int banNum, int hak, int **ppBan);

void main() {
	int banNum = 0;
	int hak = 0;
	printf("�ݼ� �Է� �� �ּ��� : "); scanf_s("%d", &banNum);
	int **ppBan = (int **)malloc(sizeof(int *) * banNum);

	for (int i = 0; i < banNum; i++) {
		printf("%d�� �л����� �� ���Դϱ�? ", i + 1); scanf_s("%d", &hak);
	}
	inputScore(banNum, hak, ppBan);

	printScore(banNum, hak, ppBan);

	//for (int i = 0; i < banNum; i++) {
	//	free(ppBan[(banNum - 1) - i]);
	//	ppBan[i] = NULL;
	//	printf("pArr[%d] �޸� ���� �ƽ��ϴ�\n", i);
	//}

	//free(ppBan);
	////free(pHak);

	//ppBan = NULL;
	////pHak = NULL;
}



void inputScore(int banNum, int hak, int **ppBan) {
	int *pHak = (int *)malloc(sizeof(int) * banNum);


	puts("===�Էº�===");
	for (int i = 0; i < banNum; i++) {
		pHak[i] = hak;
		ppBan[i] = (int *)malloc(sizeof(int) * hak);
		for (int j = 0; j < pHak[i]; j++) {
			printf("%d�� %d�� ���� �Է� : ", i + 1, j + 1); scanf_s("%d", &ppBan[i][j]);
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
	puts("===��º�===");
	for (int i = 0; i < banNum; i++) {
		for (int j = 0; j < pHak[i]; j++) {
			printf("%d�� %d�� ���� : %d\n", i + 1, j + 1, ppBan[i][j]);
			rowTot += ppBan[i][j];
			all_total += ppBan[i][j];
		}
		sum += pHak[i];
		printf("---%d�� ���� : %d��\t�� ��� : %.2f��---\n", i + 1, rowTot, rowTot / (double)pHak[i]);
		puts("----------------------");
		rowTot = 0;
	}
	all_avg = all_total / (double)sum;
	printf("---��ü ���� : %d��\t��ü ��� : %.2f��---\n", all_total, all_avg);

}



//void inputScore(int banNum, int *pHak, int **ppBan);
//void printScore(int banNum, int *pHak, int **ppBan);
//
//void main() {
//int banNum = 0;
//int hak = 0;
//printf("�ݼ� �Է� �� �ּ��� : "); scanf("%d", &banNum);
//int **ppBan = (int **)malloc(sizeof(int *) * banNum);
//int *pHak = (int *)malloc(sizeof(int) * banNum);
//
//
//for (int i = 0; i < banNum; i++) {
//printf("%d�� �л����� �� ���Դϱ�? ", i+1); scanf("%d", &hak);
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
//	printf("pArr[%d] �޸� ���� �ƽ��ϴ�\n", i);
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
//puts("===�Էº�===");
//for (int i = 0; i < banNum; i++) {
//for (int j = 0; j < pHak[i]; j++){
//printf("%d�� %d�� ���� �Է� : ", i+1, j + 1); scanf("%d", &ppBan[i][j]);
//
//}
//}
//
//}
//
//void printScore(int banNum, int *pHak, int **ppBan) {
//int rowTot = 0, all_total = 0, sum = 0;
//double all_avg = 0.0;
//puts("===��º�===");
//for (int i = 0; i < banNum; i++) {
//for (int j = 0; j < pHak[i]; j++) {
//printf("%d�� %d�� ���� : %d\n", i + 1, j + 1, ppBan[i][j]);
//rowTot += ppBan[i][j];
//all_total += ppBan[i][j];
//}
//sum += pHak[i];
//printf("---%d�� ���� : %d��\t�� ��� : %.2f��---\n", i + 1, rowTot, rowTot / (double)pHak[i]);
//puts("----------------------");
//rowTot = 0;
//}
//all_avg = all_total / (double)sum;
//printf("---��ü ���� : %d��\t��ü ��� : %.2f��---\n", all_total, all_avg);
//
//}








