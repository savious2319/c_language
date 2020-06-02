#include<stdio.h>
/*
	if : 단일선택
	if else : 양자택일
	if else if else : 다중 택일

	조건문
	4) switch ~ case : 다중 분기 또는 다중 택일

	(1) 다중 분기
	   switch(조건)  //switch 에서의 조건은 값을 의미한다 (조건식을 쓰는 경우는 거의 없음)
	                // (정수값, 변수, 상수 등을 기재 -> 실수는 안됨, 수식으로 표현가능)
	   {

		case 상수값 :  // switch(조건) 조건에 해당하는 결과값을 갖고, case 옆에 있는 상수값을 찾아가게 된다.
		case 상수값 :  // 따라서 case 옆에 있는 상수값은 문자, 정수 상수여야만 된다.
		case 상수값 :  //                             변수, 수식, 실수, 문자열 금지 (버전에 따라 문자열은 허용)
		...
		default :

		}

	(2) 다중 택일
		switch(조건)
		{

		case 상수값 :    break;
		case 상수값 :    break;
		case 상수값 :    break;
		...
		default :
		
		}



*/
void main() {

	int num = 0;

	printf("정수 입력(1~5) "); scanf("%d", &num);
	/*
	switch (num)
	{
	case 1:
		puts("1입니다."); break;
	case 2:
		puts("2입니다."); break;
	case 3:
		puts("3입니다."); break;
	case 4:
		puts("4입니다."); break;
	case 5:
		puts("5입니다."); break;
	default:
		puts("1~5가 아닙니다");
	}
	*/
	if (num == 1) {
		puts("1입니다.");
	}
	else if (num == 2) {
		puts("2입니다.");
	}
	else if (num == 3) {
		puts("3입니다.");
	}
	else if (num == 4) {
		puts("4입니다.");
	}
	else if (num == 5) {
		puts("5입니다.");
	}
	else {
		puts("1~5가 아닙니다");
	}
	puts("프로그램 종료");


}