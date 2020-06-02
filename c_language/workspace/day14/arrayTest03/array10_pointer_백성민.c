#include <stdio.h>
/*
	inputScore(행, 열, 배열의 위치) // 배열매개변수는 "배열 포인터"를 사용하자!

	입력받고, 출력하기

*/
void inputScore(int row, int col, int(*pAr)[4]);
void printScore(int row, int col, int(*pAr)[4]);
void main() {

	int arScore[3][4] = { 0 };
	int row = sizeof(arScore) / sizeof(arScore[0]);
	int col = sizeof(arScore[0]) / sizeof(arScore[0][0]);
	//int(*pAr)[4] = arScore;
	inputScore(row, col, arScore);
	printScore(row, col, arScore);

	//(*pAr)은 arScore[3]를 가르킨다!! 근데 그안에 [4]칸이 있다. 그래서 배열포인터 (*pAr)[4]로 전달받는다
}
void inputScore(int row, int col, int(*pAr)[4]) {
	int total = 0;
	for (int i = 0; i < row; i++){
		printf("%d반", i + 1);
		for (int j = 0; j < col; j++){
			printf("%d번 점수 입력: ", j+1);
			scanf("%d", pAr[i]+j);
			total += pAr[i][j];
		}
	}
		printf("총점: %d\t평균: %.2f\n", total, (double)total / (row*col));
}
void printScore(int row, int col, int(*pAr)[4]) {
	//printf("1번\t2번\t3번\t4번\t총합\t평균\n");
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		int total = 0;
		printf("%d반 ", i + 1);
		for (j = 0; j < col; j++) {
		printf("%d번 점수: %d  ", j+1, pAr[i][j]);
		total += pAr[i][j];
		}
		printf("총합: %d 평균: %.2f\n", total, (double)total / col);
	}
}