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
	Score s;
	char name[20];
	char address[100];
	int index;
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
	puts("�Ǧ������������������������������� �Է� ����������������������������������������");
	for (int i = 0; i < sNum; i++) {
		puts("");
		pFrd[i].index = i + 1;
		printf("\t%d�� ģ�� �̸� �Է� \t: ", i + 1); gets(pFrd[i].name);
		printf("\t%d�� ģ�� �ּ� �Է� \t: ", i + 1); gets(pFrd[i].address);
		puts("");
		printf("\t%d�� ģ�� ���� ���� �Է�(0~100��) : ", i + 1); scanf("%d", &pFrd[i].s.kor);
		printf("\t%d�� ģ�� ���� ���� �Է�(0~100��) : ", i + 1); scanf("%d", &pFrd[i].s.eng);
		printf("\t%d�� ģ�� ���� ���� �Է�(0~100��) : ", i + 1); scanf("%d", &pFrd[i].s.math);
		printf("\t%d�� ģ�� �̼� ���� �Է�(0.0~10.0��) : ", i + 1); scanf("%lf", &pFrd[i].s.art);
		getchar();
		puts("");

		//printf("pFrd[%d].index : %d\n", i, pFrd[i].index);
	}
	printf("����������������������������������������������������������������������������������������������\n");
}

void outputStdInfo(int sNum, Prof *pFrd) {
	double totalGrade = 0;
	puts("��º�");
	puts("�Ǧ���������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
	puts("�� ��ȣ\t�� �̸�\t��      �ּ�     ��  ����\t��  ����\t��  ����\t��  �̼�\t ��   ����   ��  ���   ��");
	puts("������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
	for (int i = 0; i < sNum; i++) {

		totalGrade = pFrd[i].s.kor + pFrd[i].s.eng + pFrd[i].s.math + pFrd[i].s.art;
		printf("�� %02d��\t�� %s\t��  %s\t�� %3d��\t�� %3d��\t�� %3d��\t��  %.1f�� ��  %.1f�� ��  %.1f�� ��\n", 
			pFrd[i].index, pFrd[i].name, pFrd[i].address, pFrd[i].s.kor,
			pFrd[i].s.eng, pFrd[i].s.math, pFrd[i].s.art, totalGrade, totalGrade / 4);
		totalGrade = 0;
		if (i != sNum - 1) {
			puts("������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
		}
	}
	puts("������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");


}


		/*puts("");
		printf("\t�̸�\t: %s\n", pfrd[i].name);
		printf("\t�ֹι�ȣ\t: %s\n", pfrd[i].num);
		printf("\t�ּ�\t: %s\n", pfrd[i].address);
		printf("\t���� ����\t: %d��\n", pfrd[i].s.kor);
		printf("\t���� ����\t: %d��\n", pfrd[i].s.eng);
		printf("\t���� ����\t: %d��\n", pfrd[i].s.math);
		printf("\t�̼� ����\t: %.1f��\n", pfrd[i].s.art);
		printf("\t����\t: %.1f��\n\t���\t: %.1f��\n", sgrade[i], sgrade[i] / 4);
		puts("");*/
