#include <stdio.h>
#include <stdlib.h>

//���� �޸� �Ҵ� �Լ�
int sNumMalloc(int sNum) {
	return (int *)malloc(sNum * sizeof(int));
}

//�л� ���� �Է� �Լ�
void sInputGrade(int sNum, int *pNum) {
	for (int i = 0; i < sNum; i++) {
		printf("%d�� �л� ���� �Է� : ", i + 1); scanf("%d", pNum + i);
	}
}
//�л� ����, ����, ��� ��� �Լ�
void printTotalGradeAvg(int sNum, int *pNum, int total) {
	for (int i = 0; i < sNum; i++) {
		printf("%d�� �л� ���� : %d\n", i + 1, *(pNum + i));
	}
	for (int i = 0; i < sNum; i++) {
		total += *(pNum + i);
	}

	printf("���� : %d\t��� : %.2f\n", total, (double)total / sNum);
}
void main() {
	int cNum = 0;
	int sNum = 0;
	int total = 0;

	printf("�� �� �Է� : "); scanf("%d", &cNum);
	for (int i = 0; i < cNum; i++) {

		printf("%d�� �л� �� �Է� : ", i + 1); scanf("%d", &sNum);

		int *pNum = sNumMalloc(sNum);

		sInputGrade(sNum, pNum);

		printTotalGradeAvg(sNum, pNum, total);

		free(pNum);
		pNum = NULL;
	}
}