#include <stdio.h>
#include <stdlib.h>
void inputScore(int banNum, int hak, int **ppBan);
void printScore(int banNum, int hak, int **ppBan);

void main() {
	int banNum = 0; 
	int hak = 0;
	printf("�ݼ� �Է� �� �ּ��� : "); scanf("%d", &banNum);
	int **ppBan = (int **)malloc(sizeof(int *) * banNum);
	int *pHak = (int *)malloc(sizeof(int) * banNum);
	
	puts("===�Էº�===");
	for (int i = 0; i < banNum; i++) {
	printf("%d�� �л����� �� ���Դϱ�? ", i+1); scanf("%d", &hak); 
	ppBan[i] = (int *)malloc(sizeof(int) * hak);

	pHak[i] = hak;
	//�Էº�
	inputScore(i, hak, ppBan);
	}

	for (int i = 0; i < banNum; i++){
	//��º�
	printScore(i, pHak[i], ppBan);  // pHak[i]�� ���̴�!

	}

	for (int i = 0; i < banNum; i++) {
		free(ppBan[(banNum - 1) - i]);
		ppBan[i] = NULL;
		printf("ppBan[%d] �޸� ���� �ƽ��ϴ�\n", i);
	}

	free(ppBan);
	//free(phak);

	ppBan = NULL;
	//phak = null;
}

void inputScore(int banNum, int hak, int **ppBan) {

		//int cnt = 0;
		for (int i = 0; i < hak; i++) {
			printf("%d�� %d�� �л� ���� �Է� : ", banNum + 1, i + 1);
			scanf("%d", &ppBan[banNum][i]);
		}
		//for (int i = 0; i < banNum; i++) {
		//		pHak[i] = hak;
		//		ppBan[i] = (int *)malloc(sizeof(int) * hak);
		//		//printf("%d\n", pHak[i]);
		//for (int j = 0; j < pHak[i]; j++){
		//printf("%d�� %d�� ���� �Է� : ", i + 1, j + 1); scanf("%d", &ppBan[i][j]);
		//}
		//break;
		//}
	
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
	}
	/*all_avg = all_total / (double)sum;
	printf("---��ü ���� : %d��\t��ü ��� : %.2f��---\n", all_total, all_avg);*/





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








