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
	//Score s;     �տ� ���°ͺ��� �ڿ� ���� ���� ����! ������ �Ż�� ���� ���� ������ �Է��ϴ� ���� ����!
	              // (������) �𵨸� -> �ۺ���, DB, ����� ǥ�� Ÿ��Ʋ�� ����!
				  // �𵨸� �� ��, ������ ����غ���!
	char num[20];
	char name[20];
	char address[100];
	Score s;
} Prof;

int inputNum() {

	int num = 0;  // �л� �� ��ŭ ����ȭ ��Ų��.
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
	puts("�Ǧ������������������������������� ���� �Է¦���������������������������������������");
	for (int i = 0; i < sNum; i++) {
		puts("");
		printf("\t�̸� �Է� \t: "); gets(pFrd[i].name);     // �Է��� �̸��� ��ºο��� ���� �� �ְ� �غ���
		printf("\t�ֹι�ȣ �Է� \t: "); gets(pFrd[i].num);
		printf("\t�ּ� �Է� \t: "); gets(pFrd[i].address);
		puts("");
		printf("\t%d�� ģ�� ���� ���� �Է�(0~100��) : ", i + 1); scanf("%d", &pFrd[i].s.kor);
		printf("\t%d�� ģ�� ���� ���� �Է�(0~100��) : ", i + 1); scanf("%d", &pFrd[i].s.eng);
		printf("\t%d�� ģ�� ���� ���� �Է�(0~100��) : ", i + 1); scanf("%d", &pFrd[i].s.math);
		printf("\t%d�� ģ�� �̼� ���� �Է�(0.0~10.0��) : ", i + 1); scanf("%lf", &pFrd[i].s.art);
		puts("");
	}
	printf("����������������������������������������������������������������������������������������������\n");
}

void outputStdInfo(int sNum, Prof *pFrd) {
	double totalGrade = 0;
	puts("�Ǧ����������������������������������� ��ºΦ�����������������������������������������������");
	for (int i = 0; i < sNum; i++) {
	totalGrade = pFrd[i].s.kor + pFrd[i].s.eng + pFrd[i].s.math + pFrd[i].s.art;
		puts("");
		printf("\t�̸�\t: %s\n", pFrd[i].name);
		printf("\t�ֹι�ȣ\t: %s\n", pFrd[i].num);
		printf("\t�ּ�\t: %s\n", pFrd[i].address);
		printf("\t���� ����\t: %d��\n", pFrd[i].s.kor);
		printf("\t���� ����\t: %d��\n", pFrd[i].s.eng);
		printf("\t���� ����\t: %d��\n", pFrd[i].s.math);
		printf("\t�̼� ����\t: %.1f��\n", pFrd[i].s.art);
		printf("\t����\t: %.1f��\n\t���\t: %.1f��\n", totalGrade, totalGrade / 4);
		puts("");
	}
	printf("������������������������������������������������������������������������������������������������������\n");


}

