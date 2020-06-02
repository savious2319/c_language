#include <stdio.h>
#include <stdlib.h>
/*
	2차원 동적 배열
*/
//배열
//int ar[3];  // int *pAr = (int *)malloc(sizeof(int) * 3)   [   ]  [   ] [   ]
//          pAr[0] pAr[1] pAr[2]
//          free(pAr)

//int arr[2][3];
// arr은 [0]과 [1]를 갖고 있다.
// arr[0] 도 역시 부분배열이다(주소다)!   arr[0] -> [0] ~ [2]까지 요소를 갖고 있다!

/*
int arr[2][n개];

arr[0] 요소는 주소를 저장할 수 있다!!!
arr[0] = int 를 몇개(=열의 갯수) 갖고 있는 첫번째 행이냐?
arr[0] = (int *)malloc(sizeof(int) * n개);
arr[1] = (int *)malloc(sizeof(int) * n개);

즉, arr[0]는 int의 요소를 갖고 있는 주소 저장 배열 (arr[0]는 int* 타입이다!!)

문제는

arr[0]
arr[1]
arr[2]

..
arr[n] 일 때!
==================================================

int ** pArr = (int **)malloc(sizeof(int *) * n개);  //n개 만큼 행이 만들어 진다!(층수가 결정)
만약 n에 3을 입력했다고 했을 때,
첫번째 층 pArr[0] 은 m개의 열을 만들 수 있다!
pArr[0] = (int *)malloc(sizeof(int) * m개);  // 1층 (0행)에는 m개 만큼 데이터를 입력할 수 있는
// 1차원 배열이 만들어졌다!

pArr[1] = (int *)malloc(sizeof(int) * m개);

pArr[2] = 정수값을 저장할거야... m개 만큼 만들어줘! 동적배열을 만들자! (1차원 배열)

pArr 은 int ** 타입이고,      pArr에는 (int *) 타입으로 n개를 만들어 낼 수 있다(행수 결정)
pArr[0] 는 int * 타입이다.    pArr[0] 에는 (int) 타입으로 m개의 데이터를 넣을 수 있다(열수 결정)

*/

void main() {
	//int n = 0, m = 0;
	////1. 2차원 동적배열을 2행 3열 짜리 정방배열로 만들어 봅시다!
	//printf("몇 개 반이 있습니까? "); scanf("%d", &n);
	//int **pArr = (int **)malloc(sizeof(int *) * n); //2개층 만들어야

	////pArr에 주소를 받아왔다!
	//for (int i = 0; i < n; i++){
	//	printf("%d반에 몇 명 있습니까? ", i + 1); scanf("%d", &m);
	//	pArr[i] = (int *)malloc(sizeof(int) * m);
	//	printf("pArr[%d] : %d\n",i, pArr[i]);

	//}
	////printf("%d\n", pArr[0]);
	////printf("%d\n", pArr[1]);

	//for (int i = 0; i < n; i++){
	//	for (int  j = 0; j < m-1; j++){
	//		printf("%d반 %d번 학생 점수 입력: ",i+1, j+1, pArr[i][j]);
	//		scanf("%d", &pArr[i][j]);
	//	}
	//}

	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < m; j++) {
	//		printf("%d반 %d번 학생 점수: %d점  ", i + 1, j + 1, pArr[i][j]);
	//	}
	//	puts("");
	//}
	//free(pArr[1]);
	//free(pArr[0]);
	//free(pArr);

	
	//1.  2차원 동적배열을 2행 3열 짜리 정방배열로 만들어 봅시다!
	int **pArr = (int **)malloc(sizeof(int *) * 2);	//2개층 만들거야
													//pArr에 주소를 받아왔다!
													//pArr 은  (int *)를 저장하는 변수로 만들었다.
													//*(pArr + 0) = (int *)malloc(12);   //sizeof(int)*3칸
													//*(pArr + 1) = (int *)malloc(12);

	pArr[0] = (int *)malloc(12);  //3칸을 만든 1차원 배열
								  //입력10, 11, 12
	pArr[0][0] = 10;
	pArr[0][1] = 11;
	pArr[0][2] = 12;

	pArr[1] = (int *)malloc(12);  //3칸을 만든 1차원 배열
	pArr[1][0] = 21;
	pArr[1][1] = 22;
	pArr[1][2] = 23;

	//총합
	int tot = 0;
	//평균
	double avg = 0.0;
	//출력
	int rowTot = 0;
	double rowAvg = 0.0;
	for (int i = 0; i < 2; i++) {
		printf("====%d행(%d층)====\n", i, i + 1);
		for (int j = 0; j < 3; j++) {

			printf("pArr[%d][%d] : %d점\n", i, j, pArr[i][j]);
			tot += pArr[i][j];
			rowTot += pArr[i][j];
		}
		rowAvg = rowTot / 3;
		printf("---%d층 합 : %d점\t평균 : %.2f점---\n", i + 1, rowTot, rowAvg);
		rowTot = 0;
	}
	avg = (double)tot / 6;
	puts("----결과----");
	printf("총합 : %d점\t평균 : %.2f점\n", tot, avg);


	//2. n행 m열짜리 배열을 만들 수 있겠다.
	// -> 몇개 받을 지 모르기 때문에!! 어쩔 수 없이 for문을 써야 한다!
	// -> for문을 쓸때, 행마다 열의 갯수가 다르다! 그러기 때문에, 열을 입력할 때마다
	//    별도로 열의 개수를 저장할 수 있는 1차원 동적 배열을 만들어야 출력할 수 있다!!






}
