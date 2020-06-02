#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Score {
	int kor;
	int eng;
	int math;
	double art;

}Score;
typedef struct Profile {
	char num[20];
	char name[20];
	char address[100];
	Score s[3];
} Prof;

int inputNum() {

	int num = 0;
	printf("����� �Է� : "); scanf("%d", &num);
	getchar();
	return num;
}

//void inputStdInfo(int sNum, Prof *pFrd) {
//
//	puts("�Ǧ������������������������������� �Ż����� �Է¦���������������������������������������");
//	for (int i = 0; i < sNum; i++) {
//		puts("");
//		printf("\t�̸� �Է� \t: "); gets(pFrd[i].name);
//		printf("\t�ֹι�ȣ �Է� \t: "); gets(pFrd[i].num);
//		printf("\t�ּ� �Է� \t: "); gets(pFrd[i].address);
//		puts("");
//	}
//	printf("������������������������������������������������������������������������������������������������������\n");
//}

void inputStdInfoAndGrade(int sNum, Prof *pFrd) {
	puts("�Ǧ�������������������������������   �Է�   ����������������������������������������");
	for (int i = 0; i < sNum; i++) {
		puts("");
		printf("\t�̸� �Է� \t: "); gets(pFrd[i].name);
		printf("\t�ֹι�ȣ �Է� \t: "); gets(pFrd[i].num);
		printf("\t�ּ� �Է� \t: "); gets(pFrd[i].address);
		puts("");
		for (int j = 0; j < 3; j++){
			printf("\t%d�г� ���� ���� �Է�(0~100��) : ", j + 1); scanf("%d", &pFrd[i].s[j].kor);
			printf("\t%d�г� ���� ���� �Է�(0~100��) : ", j + 1); scanf("%d", &pFrd[i].s[j].eng);
			printf("\t%d�г� ���� ���� �Է�(0~100��) : ", j + 1); scanf("%d", &pFrd[i].s[j].math);
			printf("\t%d�г� �̼� ���� �Է�(0.0~10.0��) : ", j + 1); scanf("%lf", &pFrd[i].s[j].art);
			getchar();

		}
		
		
	}
	printf("����������������������������������������������������������������������������������������������\n");
}

void outputStdInfo(int sNum, Prof *pFrd, double *sGrade) {
		system("cls");

	puts("�Ǧ����������������������������������� ��ºΦ�����������������������������������������������");
	for (int i = 0; i < sNum; i++) {
		
		printf("\t�̸�\t: %s\n", pFrd[i].name);
		printf("\t�ֹι�ȣ\t: %s\n", pFrd[i].num);
		printf("\t�ּ�\t: %s\n", pFrd[i].address);

		for (int j = 0; j < 3; j++){
		printf("\t%d�г� ���� ����\t: %d��\n", j + 1, pFrd[i].s[j].kor);
		printf("\t%d�г� ���� ����\t: %d��\n", j + 1, pFrd[i].s[j].eng);
		printf("\t%d�г� ���� ����\t: %d��\n", j + 1, pFrd[i].s[j].math);
		printf("\t%d�г� �̼� ����\t: %.1f��\n", j + 1, pFrd[i].s[j].art);
		sGrade[i] = pFrd[i].s[j].kor + pFrd[i].s[j].eng + pFrd[i].s[j].math + pFrd[i].s[j].art;
		printf("\t%d�г� ����\t: %.1f��\t���\t: %.1f��\n", j + 1, sGrade[i], sGrade[i] / 4);

		}
		if (i != sNum - 1) {
			puts("------------------------------------------------");
		}
	}
	printf("������������������������������������������������������������������������������������������������������\n");


}

