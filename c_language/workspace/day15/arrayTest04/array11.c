#include <stdio.h>
/*
	문자열 배열


*/
void main() {

	//char ar[3] = { "abc" };    // \0문자까지 칸수에 포함해서 만들어야 한다!
	//char ar[4] = { "abc" };
	char ar[] = { "abc" };  // 초기값이 있으니까 첨자를 생략했다!
	char *pAr0 = "abc";      // 문자열은 이미 주소값이 있으니까 포인터 변수에 담을 수 있다!
	char *pAr1 = "def";
	char *pAr2 = "ghi";

	char *pArr[3] = { "abc", "def", "ghi" };  // 포인터를 가지고 있는 배열

	//pArr[0]   <----- abc의 주소를 갖고 있다!
	//pArr[1]   <----- def
	//pArr[2]   <----- ghi

	//%s : 시작주소(포인터)부터 널문자를 만날때까지!
	// 그러면 pArr[0] 이 "abc"의 시작번지를 의미하니
	// %s 한테 pArr[0] 를 주면 널까지 출력해 주겠지....
	printf("pArr[0] : %s\n", pArr[0]);  //pArr[0]는 주소였구나!
	printf("pArr[0][0] : %c\n", pArr[0][0]);

	//////////////////////////////////////////////////////////////////////////////

	char arCh[3][9] = {
	"을지문덕", "세종대왕", "신사임당"
	};

	char (*pCh)[9] = arCh;

	printf("%s\n", pCh + 1);
	printf("%s\n", pCh + 2);

	char arCh2[3][9] = {
		"abc", "def", "ghi"
	};

	printf("a출력하기 : %c\n", arCh2[0][0]);

	char(*pCh2)[9] = arCh2;
	printf("d출력하기 : %c\n", *(*(pCh2+1)+0));  // 두번째칸에 가~ 주소네? 그럼 그 주소에 첫번째 칸을 읽어봐

	puts("==================");
	//char *arSubject[5] = { "국어", "영어", "수학", "과학" };
	//char(*pSub)[5] = arSubject;     //*******초기화 문제  --> 해결 2가지!!!!
	//for (int i = 0; i < 4; i++)
	//{
	//	printf("pSub+%d : %d번지\n", i, pSub + i);         //<--- 5byte씩 이동 (5칸씩 이동) <--- 배열 포인터이기때문에 배열의 크기만큼 이동한다
														   // 배열을 가리키는 포인터이다. 가리켜봤더니 5byte크기의 배열이다.
	//	printf("arSubject+%d : %d번지\n", i, arSubject + i);  //<-- 4byte씩 이동  <----포인터 배열이기때문에 포인터의 크기(4byte)만큼 이동한다
															  // 포인터를 가지고 있는 배열이기때문에 4byte씩 이동한다. 
	//	puts("---");
	//}

	//해결1 -> 첨자를 2개로 만들자!
	//char *arSubject[5] = { "국어", "영어", "수학", "과학" };
	char arSubject[4][5] = { "국어", "영어", "수학", "과학" };
	//char (*pSub)[5] = arSubject ;  초기화 문제 -> 2가지해결   1. 포인터변수를 이중포인터 선언
	//								                          2. 배열을 만들때 첨자 2개로 만드는 것
	//해결2  포인터를 이중포인터로!!!
	//char **pSub = arSubject;
	char(*pSub)[5] = arSubject;
	

	//printf("pSub+1 : %d번지\n", pSub+1);
	//printf("arSubject+1 : %d번지\n", arSubject+1);
	

	for (int i = 0; i < sizeof(arSubject) / sizeof(arSubject[0]); i++) {

		printf("%s\n", *pSub++);     //문자열 출력 *pSub++
									 //printf("%s\n", *pSub++);

	}

	//int *arSubject[3] = { 1,2,3 }, {4,5,6}, {}
	




}