#include <stdio.h>

void main() {

	//2차원 배열의 초기화
	//3줄짜리 각 줄마다 4칸
	int arrNum[3][4] = {    //점수!! 3반에 4명이 있어
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	// A반
	// B반	시험을 안봤다!
	// C반
	int arScore[12] = { 1,2,3,4,0,0,0,0,9,10,11,12 }; //1차원 배열로 할 수 있다
	int arScore2[][4] = {
		{ 1,2,3,4},
		{0,}, // 자동으로 초기화된다 // , <-- 뒤는 다 0이야
		{9,10,11, 12}

	};

	int arrScore3[][3] = { 2,3,4,5,4,6,5,3,6,3,4,5,3,4,5,4,5,3,4 };
	//행의 갯수는?


	//int arrScore4[][3] = { {2,3,4},{5,4,6,5},3,6,3,4,5,3,4,5,4,5,3,4 };
	
	int arrScor5[][3] = { {2},3,4,5,{4,6},5 ,3, 6, 3, 4, 5, 3, 4, 5, 4, 5, 3, 4 };
	int size1 = sizeof(arrScor5) / sizeof(arrScor5[0]); //8
	int size = sizeof(arrScor5[0]) / sizeof(arrScor5[0][0]);  //3
	for (int i = 0; i < size1; i++) { // i : 0행~6행까지
		for (int j = 0; j < size; j++) { // j : (각 행마다) 0열~2열 < 3보다 작게
			//행변화 마다 "======" 출력해 주세요

			printf("arrScore5[%d][%d] : %d점\n", i, j, arrScor5[i][j]);

		}
		puts("=============");
	}
	printf("sizeof(arrScor5) / sizeof(arrScor5[0]) : %dbyte\n", sizeof(arrScor5) / sizeof(arrScor5[0]));
	printf("sizeof(arrScor5[0]) / sizeof(arrScor5[0][0] : %dbyte\n", sizeof(arrScor5[0]) / sizeof(arrScor5[0][0]));
	}