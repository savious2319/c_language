#include <stdio.h>
#include <stdlib.h>
/*
inputScore(��, ��, �迭�� ��ġ)   //�迭�Ű������� "�迭 ������"�� �������!
�����

�Է¹ް�, ����ϱ�

*/
void inputScore(int, int, int(*)[4]);


void main()
{

	int arScore[3][4] = { 0 };
	int row = sizeof(arScore) / sizeof(arScore[0]);
	int col = sizeof(arScore[0]) / sizeof(arScore[0][0]);
	inputScore(row, col, arScore);


}
void inputScore(int row, int col, int(*p)[4]) {
	int i, j;  //i�� �ຯȭ  j�� (�ึ��) �� ��ȭ
	puts("*** 2���� �迭 ����ó�� ���α׷� ***");
	int *rowTot = (int *)malloc(sizeof(int) * row);
	int allTot = 0; //��ü ������ ���ϱ� ���� ����
	double *rowAvg = (double *)malloc(sizeof(double) * row);
	double allAvg = 0.0; //��ü ����� ���ϱ� ���� ����
						 //�Է�
	for (i = 0; i < row; i++) {
		rowTot[i] = 0;
		for (j = 0; j < col; j++) {
			printf("%d�� %d���� ���� �Է� : ", i + 1, j + 1);
			scanf("%d", &p[i][j]); //p�� ���ؼ� i�� ������ 16byte�� ���´�(�迭) j�� ������ ��ĭ�� ���´�.

			rowTot[i] += p[i][j]; //�ʱ�ȭ�� �����ָ� �����Ⱚ�� ���� �����Ǳ⶧���� �� �ʱ�ȭ�� ������Ѵ�!


		}
		printf("rowTot[%d] : %d\n", i, rowTot[i]);
		allTot += rowTot[i];
		rowAvg[i] = (double)rowTot[i] / col; //rowAvg���� ���ο� ���� �����ϱ⶧���� ���� �ʱ�ȭ�� �ʿ䰡 ����!
		puts("----------------------");
	}
	puts("===�Է� ����===");
	//ó�� <-- �Է½� ���� ��� ó��

	allAvg = (double)allTot / (row*col);
	//���
	puts("=========== ����ǥ ============");
	puts("��ȣ\t����\t����\t����\t����\t����\t���");
	for (i = 0; i < row; i++) {
		printf("%d��\t", i + 1);
		for (j = 0; j < col; j++) {
			printf("%d\t", p[i][j]);
		}
		printf("%d\t%.2f\n", rowTot[i], rowAvg[i]);

	}
	printf("��ü ���� : %d��\t ��ü ��� : %.2f��\n", allTot, allAvg);
	//healp���� ����
	free(rowTot);
	free(rowAvg);
	//stack���� ����
	rowTot = NULL;
	rowAvg = NULL;

}