#include<stdio.h>
/*
	제어문 : 하향식 흐름에 변화를 주는 명령어
	위에서 아래로 순차적으로 실행하다가
	제어명령어(if, for, while... 등등)를 만나면
	소스를 건너 뛴다던가, 반복적으로 실행하는 명령어 이다.

	1) 조건문 : 특정 조건에 의해(참 또는 거짓) 소스를 실행할지 여부를 결정한다.
	2) 반복문 : 특정 조건에 의해 반복할 횟수를 지정한다.
	           (참이면 계속 반복하다가 어느 순간 거짓이 되면 반복하지말고 특정 위치로 탈출 해라)
	3) 기타제어문(분기문)


*/
/*
	1) 조건문
	   (1) if (조건식)
	       실행문;  --> 위에 있는 조건식이 참일때만 실행한다. 거짓이면 건너뛰어서 외부 실행문을 실행한다.
		  외부 실행문; 


	   (2) if (조건식)
	      {
                실행문
				실행문
		  }
		  외부 실행문;




*/
void main()
{
	// 음수 양수 
	int x = 0;
	printf("정수 입력 : "); scanf("%d", &x);

	//만약 x가 0보다 크면, 
	if (x > 0)
	{
	//양수 입니다.
		puts("양수입니다");
    }
	if (x < 0)
		//음수 입니다.
	{
		puts("음수입니다");
	}
	if (x == 0)
	{
		puts("0입니다");

	}






}