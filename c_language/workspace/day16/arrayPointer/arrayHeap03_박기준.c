#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void inputScore();
void printScore(int, int*, int**);
void main()
{
	inputScore();
}
void inputScore() {
	int **ppAr = NULL;
	int banNum = 0;
	printf("�ݼ��� �Է��� �ּ��� : ");
	scanf("%d", &banNum);
	ppAr = (int**)malloc(sizeof(int*)*banNum);	//banNum������ ������ �Ѵ�.
	int *pStdNum = (int*)malloc(sizeof(int)*banNum);
	int rowTot = 0, all_Tot = 0;
	double rowAvg = 0.0, all_Avg = 0.0;
	int stdNum = 0;
	for (int i = 0; i < banNum; i++)
	{
		printf("%d�� �л� ���� ����Դϱ�? ", i + 1);
		scanf("%d", &pStdNum[i]);
		ppAr[i] = (int*)malloc(sizeof(int)*pStdNum[i]);
		printf("%d�� ���� �Է�\n", i + 1);
		for (int j = 0; j < pStdNum[i]; j++)
		{
			printf("%d�� %d�� ���� : ", i + 1, j + 1);
			scanf("%d", &ppAr[i][j]);
		}
	}
	//printScore(banNum, pStdNum, ppAr);
	for (int i = 0; i < banNum; i++) {
		printScore(banNum, pStdNum[i], ppAr);  
      //printScore(int, int, int**);  
	}

	for (int i = banNum - 1; i >= 0; i--)
	{
		free(ppAr[i]);
		printf("�޸�����\n");
	}
	free(pStdNum);
	free(ppAr);
}
void printScore(int ban, int *pNum, int **ppAr) {
	int rowTot = 0, all_Tot = 0;
	double rowAvg = 0.0, all_Avg = 0.0;
	int stdNum = 0;
	system("cls");
	for (int i = 0; i < ban; i++)
	{
		rowTot = 0;
		puts("����������������������������������������������������");

		printf("�� %d�� ���� ���\t%d��\t ��", i + 1, pNum[i]);

		puts("");
		puts("����������������������������������������������������");


		for (int j = 0; j < pNum[i]; j++)
		{
			printf("�� %2d��\t  %2d��\t�� %5d����", i + 1, j + 1, ppAr[i][j]);
			puts("");
			rowTot += ppAr[i][j];
		}
		puts("����������������������������������������������������");
		rowAvg = (double)rowTot / pNum[i];
		printf("�� %2d��\t  ����\t�� %5d����\n�� %2d��\t  ���\t�� %5.1f����\n", i + 1, rowTot, i + 1, rowAvg);
		puts("����������������������������������������������������");

		all_Tot += rowTot;
		stdNum += pNum[i];

	}
	all_Avg = (double)all_Tot / stdNum;
	puts("����������������������������������������������������");
	puts("�� ���� ���              ��");
	puts("����������������������������������������������������");
	printf("�� �г�\t  ����\t�� %5d����\n", all_Tot);
	printf("�� �г�\t  ���\t�� %5.1f����\n", all_Avg);
	puts("����������������������������������������������������");


}
