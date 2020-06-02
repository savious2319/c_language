#include<stdio.h>
/*
	포인터 연산
	1. 포인터끼리 뺄 수 있다. 포인터끼리는 더할 수 없다.
	   : 포인터끼리 뺐을 때 결과값은 정수다!!!
	2. 포인터에 정수값을 +, - 할 수 있다.
	3. 포인터에 곱셈 나눗셈 연산을 할 수 없다.

	4. 포인터에 + 정수 하면 높은 번지로 이동
	5. 포인터에 - 정수 하면 낮은 번지로 이동

	※ 잠시 배열을 갖고와서 테스트 한다!


*/
void main() {

	int arNum[5] = { 10, 20, 30, 40, 50 }; // 배열 선언 5개의 변수가 arNum에 들어있다!

	int *pAr; //배열(ar)의 위치를 저장하기 위해 포인터 변수를 만들어 놨다!

	//포인터에 배열의 위치값을 넣자!
	pAr = arNum; //arNum는 배열명 자체가 주소다. &를 붙이면 안된다.
	             // %d번지, arNum);

	//*pMiddle 값 구하기
	int *pStart = arNum + 0;
	int *pEnd = arNum + 4;
	int *pMiddle = 0;
	//pMiddle = 시작위치 + 2; <---2라는 정수값을 포인터 연산으로 어떻게 만들까?
	//뺐을 때, 결과는 정수값이다!
	//시작위치 = pStart
	//2칸 = (끝위치-시작위치)/2
	pMiddle = pStart + (pEnd - pStart) / 2; // 1) 4-0 -> 4/2 -> arNum + 2 <==>(같은 뜻) (*pStart(100번지) + 8(2*데이터타입int(4)) -> (108번지) 2칸 이동
										    // 116 - 100, 16 /2 , 8byte 만큼 이동

	printf("중위에 있는 값 : %dcm\n", *pMiddle);

	/*printf("끝 위치값 : %d번지\n", pAr+4);
	printf("처음 위치값 : %d번지\n", pAr);
	printf("끝 위치값 - 처음 위치값 : %d\n", (pAr + 4) - pAr);*/

	for (int i = 0; i < arNum[i]; i++)
	{
		printf("arNum 값 : %d\n", *(pAr + i));

	}
}