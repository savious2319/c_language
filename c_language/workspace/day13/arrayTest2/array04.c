#include <stdio.h>
/*
	배열과 포인터

*/
void fct(int num, int *pNum);  // == pNum[]
void fct2(int, char, double);

void main() {

	int *pAr = 0;
	int arNum[5] = { 10, 20, 30, 40, 50 };  //점수

	//배열과 포인터 : 배열을 포인터에 저장하다!
	pAr = arNum;

	printf("pAr : %d번지\n", pAr);		// 100번지
	printf("arNum : %d번지\n", arNum);  //  100번지
	
	// *(주소 + 칸) == 주소[칸]
	printf("*(pAr+0) : %d점 arNum[0] : %d점\n", *(pAr + 0), arNum[0]);
	printf("*(pAr+1) : %d점 arNum[1] : %d점\n", *(pAr + 1), *(arNum+1));
	printf("*(pAr+2) : %d점 arNum[2] : %d점\n", pAr[2], arNum[2]);
	printf("*(pAr+3) : %d점 arNum[3] : %d점\n", *(pAr + 3), arNum[3]);
	printf("*(pAr+4) : %d점 arNum[4] : %d점\n", *(pAr + 4), arNum[4]);

	fct(5, arNum);

}
//함수 작성
void fct(int num, int *pNum ) { //  == pNum[]
	puts("====================");
	for (int i = 0; i < num; i++){
		//printf("fct에서 출력", *(pNum+i) );
		printf("fct에서 출력 %d점\n", pNum[i]);
	}
}

void fct2(int a, char b, double c) {



}