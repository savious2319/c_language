#include <stdio.h>
/*
	inputScore(��, ��, �迭�� ��ġ) // �迭�Ű������� "�迭 ������"�� �������!

	�Է¹ް�, ����ϱ�

*/
void inputScore(int row, int col, int(*pAr)[4]);
void printScore(int row, int col, int(*pAr)[4]);
void main() {

	int arScore[3][4] = { 0 };
	int row = sizeof(arScore) / sizeof(arScore[0]);
	int col = sizeof(arScore[0]) / sizeof(arScore[0][0]);
	//int(*pAr)[4] = arScore;
	inputScore(row, col, arScore);
	printScore(row, col, arScore);

	//(*pAr)�� arScore[3]�� ����Ų��!! �ٵ� �׾ȿ� [4]ĭ�� �ִ�. �׷��� �迭������ (*pAr)[4]�� ���޹޴´�
}
void inputScore(int row, int col, int(*pAr)[4]) {
	int total = 0;
	for (int i = 0; i < row; i++){
		printf("%d��", i + 1);
		for (int j = 0; j < col; j++){
			printf("%d�� ���� �Է�: ", j+1);
			scanf("%d", pAr[i]+j);
			total += pAr[i][j];
		}
	}
		printf("����: %d\t���: %.2f\n", total, (double)total / (row*col));
}
void printScore(int row, int col, int(*pAr)[4]) {
	//printf("1��\t2��\t3��\t4��\t����\t���\n");
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		int total = 0;
		printf("%d�� ", i + 1);
		for (j = 0; j < col; j++) {
		printf("%d�� ����: %d  ", j+1, pAr[i][j]);
		total += pAr[i][j];
		}
		printf("����: %d ���: %.2f\n", total, (double)total / col);
	}
}