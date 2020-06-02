#include <stdio.h>


void main() {

	int arNum[] = { 10,20,30,40,50 };
	int *pAr = arNum;
	printf("%d\n", sizeof(arNum) / sizeof(arNum[0]));
	for (int i = 0; i < sizeof(arNum)/sizeof(arNum[0]); i++)
	{
		printf("pAr+%d번지에 있는 데이터 : %d\n", i, *pAr++); //*pAr++ -> 자주 쓰는 표현임 (주소에 +를 함)
															// 원래는 *(pAr + i) 써야하는 데 후위형 ++이기때문에 처음에는 *(pAr+0)이 되고 그 다음에 *(pAr+1)가 된다
															//1. *pAr 의 결과값을 출력해 줄래? 10
															//2. +1 칸 이동 해 ++ : pAr = pAr+1
															// -> pAr의 시작번지를 매번 이동시키고 있다!
		
		//printf("pAr+%d번지에 있는 데이터 : %d\n", i, (*pAr)++);
															// pAr의 값을 읽고 거기에 (데이터)에 +1을 "누적" 시켜라! (데이터에 +를 함)
															// 그 다음 이동해서 pAr에 있는 (11로 바뀐값에) 1을 "누적"해라!
															// 누적된 데이터에 +1
	}
	printf("&arNum[4] : %d번지\n", &arNum[4]);
	printf("최종 pAr이 갖고 있는 번지 : %d번지\n", pAr); //최종 번지값 확인!

	pAr = arNum; // 다시 초기화! 왜 초기화 해야하지? *pAr이 ++때문에 for문에서 나올때 
													//arNum[5]을 가르키는 상태로 나왔는데 
													//arNum[4] 다음의 칸에는 아무런 값이 없으니까 실행하면 에러가 남 
	for (int i = 0; i < sizeof(arNum) / sizeof(arNum[0]); i++)
	{
		printf("pAr+%d번지에 있는 데이터 : %d\n", i, (*pAr)++);
	}
	
}

/*void main() {

	int arNum[3] = { 10,20,30 }; //배열을 만들고 포인터로 찾아가라
	int *pAr = &arNum[1];

	printf("pAr을 이용해서 10~30까지 출력 : %d\n", *(pAr-1)); //pAr[-1] == 10 
	printf("pAr을 이용해서 10~30까지 출력 : %d\n", *(pAr+0)); //pAr[0] == 20
	printf("pAr을 이용해서 10~30까지 출력 : %d\n", *(pAr+1)); //pAr[1] == 30
	



}*/

