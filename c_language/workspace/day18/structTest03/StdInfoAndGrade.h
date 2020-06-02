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
	//Score s;     앞에 오는것보다 뒤에 오는 것이 좋다! 순서상 신상명세 이후 과목 점수를 입력하는 것이 좋다!
	              // (데이터) 모델링 -> 퍼블리셔, DB, 구축시 표의 타이틀로 들어간다!
				  // 모델링 할 때, 순서를 고려해보자!
	char num[20];
	char name[20];
	char address[100];
	Score s;
} Prof;

int inputNum() {

	int num = 0;  // 학생 수 만큼 구조화 시킨다.
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
	puts("┎━━━━━━━━━━━━━━━━ 점수 입력━━━━━━━━━━━━━━━━━━━┓");
	for (int i = 0; i < sNum; i++) {
		puts("");
		printf("\t이름 입력 \t: "); gets(pFrd[i].name);     // 입력한 이름이 출력부에도 나올 수 있게 해보자
		printf("\t주민번호 입력 \t: "); gets(pFrd[i].num);
		printf("\t주소 입력 \t: "); gets(pFrd[i].address);
		puts("");
		printf("\t%d번 친구 국어 점수 입력(0~100점) : ", i + 1); scanf("%d", &pFrd[i].s.kor);
		printf("\t%d번 친구 영어 점수 입력(0~100점) : ", i + 1); scanf("%d", &pFrd[i].s.eng);
		printf("\t%d번 친구 수학 점수 입력(0~100점) : ", i + 1); scanf("%d", &pFrd[i].s.math);
		printf("\t%d번 친구 미술 점수 입력(0.0~10.0점) : ", i + 1); scanf("%lf", &pFrd[i].s.art);
		puts("");
	}
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void outputStdInfo(int sNum, Prof *pFrd) {
	double totalGrade = 0;
	puts("┎━━━━━━━━━━━━━━━━━━ 출력부━━━━━━━━━━━━━━━━━━━━━━━┓");
	for (int i = 0; i < sNum; i++) {
	totalGrade = pFrd[i].s.kor + pFrd[i].s.eng + pFrd[i].s.math + pFrd[i].s.art;
		puts("");
		printf("\t이름\t: %s\n", pFrd[i].name);
		printf("\t주민번호\t: %s\n", pFrd[i].num);
		printf("\t주소\t: %s\n", pFrd[i].address);
		printf("\t국어 점수\t: %d점\n", pFrd[i].s.kor);
		printf("\t영어 점수\t: %d점\n", pFrd[i].s.eng);
		printf("\t수학 점수\t: %d점\n", pFrd[i].s.math);
		printf("\t미술 점수\t: %.1f점\n", pFrd[i].s.art);
		printf("\t총점\t: %.1f점\n\t평균\t: %.1f점\n", totalGrade, totalGrade / 4);
		puts("");
	}
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");


}

