#include <stdio.h>
#include <stdlib.h>
/*
	★★
	inputScore(행, 열, 배열의 위치)   //배열매개변수는 "배열 포인터"를 사용하자!
	만들기

	입력받고, 출력하기

*/
void inputScore(int, int, int(*)[4]);


void main()
{

	int arScore[3][4] = { 0 };
	int row = sizeof(arScore) / sizeof(arScore[0]);
	int col = sizeof(arScore[0]) / sizeof(arScore[0][0]);
	inputScore(row, col, arScore);
}
void inputScore(int row, int col, int(*p)[4]) {
	int i, j;  //i는 행변화  j는 (행마다) 열 변화
	puts("*** 2차원 배열 성적처리 프로그램 ***");
	//★
	int *rowTot = (int *)malloc(sizeof(int) * row);
	int allTot = 0; //전체 총합을 구하기 위한 변수
	//★
	double *rowAvg = (double *)malloc(sizeof(double) * row);
	double allAvg = 0.0; //전체 평균을 구하기 위한 변수

	//입력
	for (i = 0; i < row; i++) {
		//말록 초기화를 한 후에 누적식 진행
		//그렇지않으면 쓰레기값으로 출력
		//★
		rowTot[i] = 0;
		for (j = 0; j < col; j++) {
			printf("%d번 %d과목 점수 입력 : ", i + 1, j + 1);
			/*scanf("%d", &*(*(p + i)) + j);*/
			scanf("%d", &p[i][j]);
			//학생의 과목 점수 총합 = 과목들의 점수를 더함★
			rowTot[i] += p[i][j];
		}
		//학생들의 점수 총합   전체점수 = 학생들의 과목점수의 총합★
		allTot += rowTot[i];
		//학생들의 과목 평균 점수★
		rowAvg[i] = (double)rowTot[i] / col;
		//	rowTot[i] = 0; 이자리에 있으면 누적식 뒤에 초기화되므로 오류
		puts("----------------------");
	}
	puts("===입력 종료===");
	//처리 <-- 입력시 총점 평균 처리
	//평균 변수 만들면 좋습니다.
	//전체 평균 점수
	//★				전체 총합  / 전체 과목수
	//allAvg = (double)allTot / (row*col);

	//출력
	puts("=========== 성적표 ============");
	puts("번호\t국어\t영어\t수학\t과학\t총점\t평균");
	for (i = 0; i < row; i++) {
		printf("%d번\t", i+1);
		for (j = 0; j < col; j++) {
			printf("%d\t", p[i][j]);
			//두번더함
			/*rowTot[i] += p[i][j];*/
		}
		printf("%d\t%.2f\n", rowTot[i], (double)rowTot[i] / col);
	}														//allAvg 변수 사용하면 좋습니다.
	printf("전체 총합 : %d점\t 전체 평균 : %.2f점\n", allTot, (double)allTot / (row*col));

	//malloc 초기화(heap 영역 초기화)
	free(rowTot);
	free(rowAvg);
	//완전 초기화(stack 영역 초기화)
	rowTot = NULL;
	rowAvg = NULL;


}
