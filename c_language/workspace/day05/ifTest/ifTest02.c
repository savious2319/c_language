#include<stdio.h>


void main()
{
	//짝수 홀수 판별 프로그램 만들어 보기
 
	int x = 0;

	int result = 0;
	printf("정수 입력 : "); scanf("%d", &x);

	result = (x % 2 == 0); // <---flag 변수

	if (result)
	{
		puts("짝수입니다");
	}

	if (!result)
	{
		puts("홀수입니다");
	}



}