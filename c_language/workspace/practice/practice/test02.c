#include<stdio.h>
#include<stdlib.h>
//���� �޸� �Ҵ� �Լ�
//�л� ���� �Է� �Լ�
//�л� ����, ����, ��� ��� �Լ�
int sNumMalloc(int sNum);
void inputGrade(int *pNum, int sNum);
void printGrade(int *pNum, int sNum);
void main() {
	int cNum = 0;
	int sNum = 0;
	int *pNum = 0;
	//�� �� �Է� �ޱ�
	printf("�� ���� �Է��ϼ��� : "); scanf("%d", &cNum);

	for (int i = 0; i < cNum; i++){
		printf("%d�� �л� �� �Է� : ", i + 1); scanf("%d", &sNum);

		pNum = sNumMalloc(sNum);
		inputGrade(pNum, sNum);
		printGrade(pNum, sNum);

		free(pNum);
		pNum = NULL;

	}
}
int sNumMalloc(int sNum) {
	return (int *)malloc(sNum * sizeof(int));
}
void inputGrade(int *pNum, int sNum) {
	for (int i = 0; i < sNum; i++){
		printf("%d�� �л� ���� �Է� : ", i + 1);
		scanf("%d", &pNum[i]);
	}
}

void printGrade(int *pNum, int sNum) {
	int total = 0;
	for (int i = 0; i < sNum; i++){
		printf("%d�� �л� ���� : %d\n", i + 1, pNum[i]);
		total += pNum[i];
	}
	printf("����: %d\t���: %.2f\n", total, (double)total / sNum);
}