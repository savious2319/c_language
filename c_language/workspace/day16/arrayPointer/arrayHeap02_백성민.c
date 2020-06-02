#include <stdio.h>
#include <stdlib.h>
/*
	2행 포인터 배열 (int **pArr)

	0행 -------n개
	1행 -------n개

	행마다 열의 갯수가 정해져 있지 않다!
	//1. 행마다 열의 갯수를 입력받기
	//2. 각 열에다 점수 입력하기
	//3. 행마다 총합 평균 구하기
	//4. 전체 총합 평균 구하기
	
	
*/
	//1. 행을 결정하는(2개행) 동적 메모리 할당 받기 : 2개반

	//2. 행마다 몇명인지 scanf()로 학생수 입력받기

	//3. 행열 로 점수 입력하기(학생 수 만큼)

	//4. 총점, 평균 계산하기

	//5. 출력하기!

	//   ** 성적 입력 하기**
	//   1반 학생수 입력 : 3명
	//   2반 학생수 입력 : 5명
	//   점수 입력
	//   1반 1번 : 30점
	//   1반 2번 : 30점
	//   1반 3번 : 30점
	//   2반 1번 : 30점
	
	//   성적 출력
	//   1반 1번 : 30점
	//   1반 2번 : 30점
	//   1반 총점 : xx점  반 평균 : xx.xx점

	//   2반 1번 : 30점
	//   2반 2번 : 30점
	//   2반 총점 : xx점  반 평균 : xx.xx점
void main() {

	int **pArr = NULL; //반은 2개 반이다!
	int n = 0; // 반 수 입력받는 변수
	int hak = 0; // 학생수 입력받는 변수

	//1. 행을 결정하는(2개행) 동적 메모리 할당 받기 : 2개반
	printf("몇 개 반이 있습니까? "); scanf("%d", &n);
	pArr = (int **)malloc(sizeof(int *) * n); 
	int *pHak = (int *)malloc(sizeof(int) * n);

	//2. 행마다 몇명인지 scanf()로 학생수 입력받기
	for (int i = 0; i < n; i++){
		printf("%d반에 몇명있나요? ", i+1); scanf("%d", &hak); //scanf("%d", &pHak[i]) 그러면 hak이라는 변수가 필요없어진다
		pHak[i] = hak;
		pArr[i] = (int *)malloc(sizeof(int) * hak);
	}
	puts("----------------------");
	//3. 행열 로 점수 입력하기(학생 수 만큼)
	//4. 총점, 평균 계산하기
	//5. 출력하기!
	int rowTot = 0, all_total = 0, sum = 0;
	double all_avg = 0.0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < pHak[i]; j++){
			printf("%d반 %d번 점수 입력 : ", i + 1, j + 1); scanf("%d", &pArr[i][j]);
			rowTot += pArr[i][j];
			all_total += pArr[i][j];
			}
		sum += pHak[i];
		printf("%d\n", sum);
		printf("---%d반 총점 : %d점\t반 평균 : %.2f점---\n", i + 1, rowTot, rowTot / (double)pHak[i]);
		puts("----------------------");
		rowTot = 0;
		}
		all_avg = all_total / (double)sum;
	printf("---전체 총점 : %d점\t전체 평균 : %.2f점---\n", all_total, all_avg);

	//free()
	for (int i = 0; i < n; i++){ //2차원 배열의 가로 공간 메모리 해제
		free(pArr[(n-1) - i]);
		pArr[i] = NULL;
		printf("pArr[%d] 메모리 해제 됐습니다\n", i);
	}

	free(pArr); //2차원 배열의 세로 공간 메모리 해제
	free(pHak);

	pArr = NULL;
	pHak = NULL;

	printf("%d\n", pArr);
	printf("%d\n", pHak);









}