#include <stdio.h>
#include <stdlib.h>
/*
	이중 포인터를 이용하면
	2차원 동적 배열을 만들 수 있다 (비정방 배열)

	n개 반이 있다.   반 수를 입력받아야 한다.
	각 반마다 m명이 있다.  명 수도 입력받아야 한다.

	int arScore[n][m] -->(x) n개도 동적배열로 받아야한다.
	arScore[n] 에 해당하는 m명도 동적배열로 받아야한다.

	//입력
			반수 입력 ? 3
			int **p = {
			int *p학생수0 = (int *)malloc(sizeof(int) * ban), //매개변수 ban
			int *p학생수1 = (int *)malloc(sizeof(int) * ban), //매개변수 ban
			int *p학생수2 = (int *)malloc(sizeof(int) * ban), //매개변수 ban

			};
			p = (int **) malloc(sizeof(int *) * nBan);

	//처리

	//출력


*/

void inputValue(int **pArr, int n, int m);
void outputValue(int **pArr, int n, int m);
void main() {

	int n = 0, m = 0;

	printf("반 수를 입력해주세요 : "); scanf("%d", &n);

	int **pArr = (int **)malloc(sizeof(int *) * n);
	//int *rowTot = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++){
		printf("%d반 학생 수 입력: ", i + 1); scanf("%d", &m);
		pArr[i] = (int *)malloc(sizeof(int)*m);
	}
	
	inputValue(pArr, n, m);

	outputValue(pArr, n, m);


}

void inputValue(int ** pArr, int n, int m)
{

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			pArr[i][j] = i + j;
			/*printf("학생 점수 입력: ");
			scanf("%d", &pArr[i][j]);*/
		}
	}

}

void outputValue(int ** pArr, int n, int m){

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", pArr[i][j]);
		}
		puts("");
	}
}



