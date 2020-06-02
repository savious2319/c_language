#include <stdio.h>
#include <stdlib.h>
/*
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
	int *rowTot = (int *)malloc(sizeof(int) * row);
	int allTot = 0; //전체 총합을 구하기 위한 변수
	double *rowAvg = (double *)malloc(sizeof(double) * row);
	double allAvg = 0.0; //전체 평균을 구하기 위한 변수
						 //입력
	for (i = 0; i < row; i++) {
		rowTot[i] = 0;
		for (j = 0; j < col; j++) {
			printf("%d번 %d과목 점수 입력 : ", i + 1, j + 1);
			scanf("%d", &p[i][j]); //p를 통해서 i를 읽으면 16byte가 나온다(배열) j로 읽으면 한칸이 나온다.

			rowTot[i] += p[i][j]; //초기화를 안해주면 쓰레기값이 같이 누적되기때문에 꼭 초기화를 해줘야한다!


		}
		printf("rowTot[%d] : %d\n", i, rowTot[i]);
		allTot += rowTot[i];
		rowAvg[i] = (double)rowTot[i] / col; //rowAvg에는 새로운 값을 대입하기때문에 굳이 초기화할 필요가 없다!
		puts("----------------------");
	}
	puts("===입력 종료===");
	//처리 <-- 입력시 총점 평균 처리

	allAvg = (double)allTot / (row*col);
	//출력
	puts("=========== 성적표 ============");
	puts("번호\t국어\t영어\t수학\t과학\t총점\t평균");
	for (i = 0; i < row; i++) {
		printf("%d번\t", i + 1);
		for (j = 0; j < col; j++) {
			printf("%d\t", p[i][j]);
		}
		printf("%d\t%.2f\n", rowTot[i], rowAvg[i]);

	}
	printf("전체 총합 : %d점\t 전체 평균 : %.2f점\n", allTot, allAvg);
	//healp영역 해제
	free(rowTot);
	free(rowAvg);
	//stack영역 해제
	rowTot = NULL;
	rowAvg = NULL;

}