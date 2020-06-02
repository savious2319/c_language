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
	printf("사람수 입력 : "); scanf("%d", &num);
	getchar();
	return num;
}

//void inputStdInfo(int sNum, Prof *pFrd) {
//
//	puts("┎━━━━━━━━━━━━━━━━ 신상정보 입력━━━━━━━━━━━━━━━━━━━┓");
//	for (int i = 0; i < sNum; i++) {
//		puts("");
//		printf("\t이름 입력 \t: "); gets(pFrd[i].name);
//		printf("\t주민번호 입력 \t: "); gets(pFrd[i].num);
//		printf("\t주소 입력 \t: "); gets(pFrd[i].address);
//		puts("");
//	}
//	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
//}

void inputStdInfoAndGrade(int sNum, Prof *pFrd) {
	puts("┎━━━━━━━━━━━━━━━━   입력   ━━━━━━━━━━━━━━━━━━━┓");
	for (int i = 0; i < sNum; i++) {
		puts("");
		printf("\t이름 입력 \t: "); gets(pFrd[i].name);
		printf("\t주민번호 입력 \t: "); gets(pFrd[i].num);
		printf("\t주소 입력 \t: "); gets(pFrd[i].address);
		puts("");
		for (int j = 0; j < 3; j++){
			printf("\t%d학년 국어 점수 입력(0~100점) : ", j + 1); scanf("%d", &pFrd[i].s[j].kor);
			printf("\t%d학년 영어 점수 입력(0~100점) : ", j + 1); scanf("%d", &pFrd[i].s[j].eng);
			printf("\t%d학년 수학 점수 입력(0~100점) : ", j + 1); scanf("%d", &pFrd[i].s[j].math);
			printf("\t%d학년 미술 점수 입력(0.0~10.0점) : ", j + 1); scanf("%lf", &pFrd[i].s[j].art);
			getchar();

		}
		
		
	}
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void outputStdInfo(int sNum, Prof *pFrd, double *sGrade) {
		system("cls");

	puts("┎━━━━━━━━━━━━━━━━━━ 출력부━━━━━━━━━━━━━━━━━━━━━━━┓");
	for (int i = 0; i < sNum; i++) {
		
		printf("\t이름\t: %s\n", pFrd[i].name);
		printf("\t주민번호\t: %s\n", pFrd[i].num);
		printf("\t주소\t: %s\n", pFrd[i].address);

		for (int j = 0; j < 3; j++){
		printf("\t%d학년 국어 점수\t: %d점\n", j + 1, pFrd[i].s[j].kor);
		printf("\t%d학년 영어 점수\t: %d점\n", j + 1, pFrd[i].s[j].eng);
		printf("\t%d학년 수학 점수\t: %d점\n", j + 1, pFrd[i].s[j].math);
		printf("\t%d학년 미술 점수\t: %.1f점\n", j + 1, pFrd[i].s[j].art);
		sGrade[i] = pFrd[i].s[j].kor + pFrd[i].s[j].eng + pFrd[i].s[j].math + pFrd[i].s[j].art;
		printf("\t%d학년 총점\t: %.1f점\t평균\t: %.1f점\n", j + 1, sGrade[i], sGrade[i] / 4);

		}
		if (i != sNum - 1) {
			puts("------------------------------------------------");
		}
	}
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");


}

