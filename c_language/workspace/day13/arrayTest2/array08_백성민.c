#include <stdio.h>
void printScore(int, int *);  // 변수명 안써줘도됨
void main() {

	int arrScore[3][4] = {

		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}


	};

	//arrScore는 int[4]씩 이동하는 배열이다! (16byte씩 이동한다)
	//arrScore는 int[4] 이동하는 부분배열이 3개 들어있다.
	//arrScore의 첫번째 요소는 arrScore[0] 이다.
	//arrScore[0]은 배열인데, int를 4개 갖고 있는 배열이다.
	//arrScore[0]에서 +1을 하면 int씩 (4byte씩) 주소값을 이동한다.

	printf("arrScore : %dbyte\n", sizeof(arrScore));
 	printf("arrScore[0] : %dbyte\n", sizeof(arrScore[0]));
	printf("arrScore[0][0] : %dbyte\n", sizeof(arrScore[0][0]));

	puts("=======================");
	printf("arrScore : %d번지\n", arrScore);
	printf("arrScore[0] : %d번지\n", arrScore[0]);
	printf("arrScore[0][0] : %d번지\n", &arrScore[0][0]);

	puts("=======================");
	printf("%d번지\t%d번지\t%d번지\n", (arrScore), (arrScore+1), (arrScore+2));// arrScore가 갖고 있는 요소는 int[4]이다 -> 행이동 
																			  // 엘리베이터를 타고 1층 >> 2층 >> 3층 (16byte씩 이동한다}
	printf("%d번지\t%d번지\t%d번지\n", (arrScore), (arrScore + 1), (arrScore + 2));
	// arrScore[0] 이 갖고있는 요소는 int 들이다  -> 열 이동 옆집 > 옆집

	//문제1)행과 열이동!!!
	//2중 for문이용
	//arrScore의 값을 입력받으세요.
	//arrScore의 값을 출력하세요.
	// 행 단위로!!
	// 10 20 30 40
	// 50 60 ......

	// row, col -> for문에 넣을 수 있는 이유는 "정방배열" 이기 때문이다.
	// "정방배열" <---> ("비정방배열" : 동적배열!!!)

	int row = sizeof(arrScore) / sizeof(arrScore[0]);
	int column = sizeof(arrScore[0]) / sizeof(arrScore[0][0]);
	for (int i = 0; i < row; i++){
		for (int j = 0; j < column; j++){
		printf("%d행 점수 입력: ", i + 1); scanf("%d", &arrScore[i][j]);
		}
	}

	puts("");

	for (int i = 0; i < row; i++) {
		printf("%d행: ", i + 1);
		for (int j = 0; j < column; j++) {
			if (j == 3) {
				printf("%d점\n", arrScore[i][j]);
			}
			else {
				printf("%d점, ", arrScore[i][j]);
			}
		}
	}
	puts("");

	//문제2)
	// 각 행마다 총점, 평균을 출력하세요
	//             (총점) 평균
	// 10 20 30 40 100    25.0
	int total = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
				total += arrScore[i][j];
		}
			printf("%d행 총점 :%d\t평균: %.2f\n", i + 1, total, (double)total / column);
			total = 0;
	}
	/*printf("1행 총점 :%d\t평균: %.2f\n", total1, (double)total1 / size1);
	printf("2행 총점 :%d\t평균: %.2f\n", total2, (double)total2 / size1);
	printf("3행 총점 :%d\t평균: %.2f\n", total3, (double)total3 / size1);*/

	//문제3)
	// 함수로 넘겨서 출력해 보세요
	// printScore(행 size, 열 size, 배열의 위치);
	for (int i = 0; i < row; i++)
	{
	printScore(column, arrScore[i]); // arrScore[0]는 요소를 int로 4개 갖고 있다.

	}
							 // arrScore[0] + 0은 첫번째 점수의 주소값이다.
							 //*(arrScore[0] + 0) == arr[0][0]이고, 변수다!
							 //*(arrScore[0] + 1) == arr[0][1]이고, 변수다!
							 //*(arrScore[0] + 2) == arr[0][2]이고, 변수다!
							 //*(arrScore[0] + 3) == arr[0][3]이고, 변수다!

}
void printScore(int column,int *pAr){
	//printf("%번지\n", pAr); //을 하면, arrScore[0]과 동일한 시작번지를 갖는다.
	//printf("%번지\n", pAr + 1); // pAr번지에서 +1(4byte로 이동해라)

	//입력을 받고
	//행마다 총점 편균 출력까지 한다!
	int total = 0;
	/*for (int i = 0; i < column; i++){
		printf("%d번 점수 입력 : ", i+1);
		scanf("%d", pAr + i);
		total += pAr[i]; //총점을 미리 계산해 놓자!
	}*/

	//출력
	for (int i = 0; i < column; i++){
		total += pAr[i];
		printf("%d점  ", pAr[i]);
	}
	double avg = total / column;
	printf("\t총점 :%d점\t평균: %.2f점\n", total, avg);





	/*scanf("%d", pAr+0); //(첫번째 행 하는 구나) 1번 점수 입력
	scanf("%d", pAr+1); //2번 입력
	scanf("%d", pAr+n);*/



	}






	/*int total1 = 0, total2 = 0, total3 = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size1; j++) {
			if (i == 0) {
				total1 += arrScore[i][j];
			}
			else if (i == 1) {
				total2 += arrScore[i][j];
			}
			else if (i == 2) {
				total3 += arrScore[i][j];
			}
		}
	}
	printf("1행 총점 :%d\t평균: %.2f\n", total1, (double)total1 / size1);
	printf("2행 총점 :%d\t평균: %.2f\n", total2, (double)total2 / size1);
	printf("3행 총점 :%d\t평균: %.2f\n", total3, (double)total3 / size1);*/

