#include <stdio.h>
#include <stdlib.h>
void inputGrade(char **arSubject, int subSize, int *arSubGrade, int subGradeSize);
void printGrade(char **arSubject, int subSize, int *arSubGrade, int subGradeSize);
void inputSubNum(int *subNum, int u_num);
void printSubGrade(int *subNum, int u_num);
//����1] �����Լ����� ���� ���� ���� ���� �Է� �ް�
//		printScore01()���� ���� ����� ����Ѵ�.
//����2] �����Լ����� ������� ���� �Է¹ް� (�ʼ� 3����, ���� 7����) �׷��� 10���� ������ �ȵ�
//		n_PrintScore02() �Լ����� ������� �� ��ŭ ������ �Է¹��� �� <=== �����޸�(�����迭)
//		����, ��� ���ϴ� �Լ�, n_PrintScore02() �����
void main() {
	int arSubGrade[3] = { 0 };
	int subGradeSize = sizeof(arSubGrade) / sizeof(arSubGrade[0]);
	char *arSubject[3] = { "����", "����", "����" };
	int subSize = sizeof(arSubject) / sizeof(arSubject[0]);
	inputGrade(arSubject, subSize, arSubGrade, subGradeSize);
	printGrade(arSubject, subSize, arSubGrade, subGradeSize);
	int u_num = 0;
	do{
	printf("������� ���� �Է��ϼ��� : "); scanf("%d", &u_num);
	if (u_num == 0 || u_num < 3 || u_num > 10) { puts("�ʼ� 3����, ���� 7����"); }
	} while (u_num < 3 || u_num > 10);
	int *subNum = (int *)malloc(u_num * sizeof(int));
	inputSubNum(subNum, u_num);
	printSubGrade(subNum, u_num);
}

void inputGrade(char **arSubject, int subSize, int *arSubGrade, int subGradeSize) {
	system("cls");
	for (int i = 0; i < subSize; i++){
		printf("%s���� �Է� : ", arSubject[i]);
		scanf("%d", &arSubGrade[i]);
		if (arSubGrade[i] < 0 || arSubGrade[i] > 100) {
			puts("0~100�� ���̸� �Է����ּ���");
			i--;
		}
	}
}

void printGrade(char **arSubject, int subSize, int *arSubGrade, int subGradeSize) {
	int total = 0;
	for (int i = 0; i < subSize; i++) {
		printf("%s���� : %d\n", arSubject[i], arSubGrade[i]);
		total += arSubGrade[i];
	}
	printf("����: %d\t���: %.2f\n", total, (double)total / subSize);
}

void inputSubNum(int *subNum, int u_num) {
	for (int i = 0; i < u_num; i++){
		printf("����%d ���� �Է� : \n", i + 1);
		scanf("%d", &subNum[i]);
		if (subNum[i] < 0 || subNum[i] > 100) {
			puts("0~100�� ���̸� �Է����ּ���");
			i--;
		}
	}

}

void printSubGrade(int *subNum, int u_num) {
	int total = 0;
	for (int i = 0; i < u_num; i++){
		printf("����%d ���� : %d\n", i + 1, subNum[i]);
		total += subNum[i];
	}
	printf("����: %d\t���: %.2f\n", total, (double)total / u_num);
}