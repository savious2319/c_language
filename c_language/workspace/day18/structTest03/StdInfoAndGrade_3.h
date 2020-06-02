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
	puts("┎━━━━━━━━━━━━━━━━ 입력 ━━━━━━━━━━━━━━━━━━━┓");
	for (int i = 0; i < sNum; i++) {
		puts("");
		pFrd[i].index = i + 1;
		printf("\t%d번 친구 이름 입력 \t: ", i + 1); gets(pFrd[i].name);
		printf("\t%d번 친구 주소 입력 \t: ", i + 1); gets(pFrd[i].address);
		puts("");
		printf("\t%d번 친구 국어 점수 입력(0~100점) : ", i + 1); scanf("%d", &pFrd[i].s.kor);
		printf("\t%d번 친구 영어 점수 입력(0~100점) : ", i + 1); scanf("%d", &pFrd[i].s.eng);
		printf("\t%d번 친구 수학 점수 입력(0~100점) : ", i + 1); scanf("%d", &pFrd[i].s.math);
		printf("\t%d번 친구 미술 점수 입력(0.0~10.0점) : ", i + 1); scanf("%lf", &pFrd[i].s.art);
		getchar();
		puts("");

		//printf("pFrd[%d].index : %d\n", i, pFrd[i].index);
	}
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void outputStdInfo(int sNum, Prof *pFrd) {
	double totalGrade = 0;
	puts("출력부");
	puts("┎━━━━━━━┳━━━━━━━┳━━━━━━━━━━━━━━━┳━━━━━━━┳━━━━━━━┳━━━━━━━┳━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━┓");
	puts("┃ 번호\t┃ 이름\t┃      주소     ┃  국어\t┃  영어\t┃  수학\t┃  미술\t ┃   총점   ┃  평균   ┃");
	puts("┣━━━━━━━╋━━━━━━━╋━━━━━━━━━━━━━━━╋━━━━━━━╋━━━━━━━╋━━━━━━━╋━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━┫");
	for (int i = 0; i < sNum; i++) {

		totalGrade = pFrd[i].s.kor + pFrd[i].s.eng + pFrd[i].s.math + pFrd[i].s.art;
		printf("┃ %02d번\t┃ %s\t┃  %s\t┃ %3d점\t┃ %3d점\t┃ %3d점\t┃  %.1f점 ┃  %.1f점 ┃  %.1f점 ┃\n", 
			pFrd[i].index, pFrd[i].name, pFrd[i].address, pFrd[i].s.kor,
			pFrd[i].s.eng, pFrd[i].s.math, pFrd[i].s.art, totalGrade, totalGrade / 4);
		totalGrade = 0;
		if (i != sNum - 1) {
			puts("┣━━━━━━━╋━━━━━━━╋━━━━━━━━━━━━━━━╋━━━━━━━╋━━━━━━━╋━━━━━━━╋━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━┫");
		}
	}
	puts("┗━━━━━━━┻━━━━━━━┻━━━━━━━━━━━━━━━┻━━━━━━━┻━━━━━━━┻━━━━━━━┻━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━┛");


}


		/*puts("");
		printf("\t이름\t: %s\n", pfrd[i].name);
		printf("\t주민번호\t: %s\n", pfrd[i].num);
		printf("\t주소\t: %s\n", pfrd[i].address);
		printf("\t국어 점수\t: %d점\n", pfrd[i].s.kor);
		printf("\t영어 점수\t: %d점\n", pfrd[i].s.eng);
		printf("\t수학 점수\t: %d점\n", pfrd[i].s.math);
		printf("\t미술 점수\t: %.1f점\n", pfrd[i].s.art);
		printf("\t총점\t: %.1f점\n\t평균\t: %.1f점\n", sgrade[i], sgrade[i] / 4);
		puts("");*/
