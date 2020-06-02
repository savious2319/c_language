#include<stdio.h>

void main() {
	//사칙연산 결과값 출력하는 프로그램
	//정수값 두개 입력
	//연산자( + - * / ) 중 하나 선택
	//결과값 출력
	//연산자 선택은 문자!!!

	int num1 = 0, num2 = 0, res = 0;
	//printf("첫번째 정수 입력 : "); scanf("%d", &num1);
	//printf("두번째 정수 입력 : "); scanf("%d", &num2);
	printf("정수 두개 연속 입력(공백으로 구분해 주세요) : ");
	scanf("%d %d", &num1, &num2);  //%d와 %d 사이에 공백(구분자) 를 통해 연속 입력받을 수 있다. 두 정수를 입력할 때, 공백으로 구분하면 된다.
	char op = ' ';
	//printf("연산자 선택 : \n 1. +\n2. -\n3. *\n4. /"); scanf("%c", &op);
	printf("다음 하나를 선택하세요 [* / %% + -] : ");
	scanf("%c%c", &op, &op); //한번만 입력해야 하는데 두번 입력받는 이유? 엔터가 Buffer에 남기때문에 첫번째 %c로 해결해줘야 한다
	                         // gets() getchar()    //fflushi(stdin);


	switch (op) {
	case '+': 
		res = num1 + num2; break;   //break : 기타 제어문 "탈출"   반드시, switch하고 반복문에서만 쓰인다!
	case '-' :
		res = num1 - num2; break;   //break <------> continue(계속 유지해~속성)
	case '* ':
		res = num1 * num2; break;
	case '/' :   //나누는 수가 0 일 때는 "0으로 나눌 수 없습니다."
		if (num2 != 0) {
		res = num1 / num2; break;
		}
		else {
			puts("0으로 나눌 수 없습니다. \n프로그램 종료");
		}
	case '%' :
		res = num1 % num2; break;
	default : 
		puts("부호를 잘못 입력 했습니다.");
	}
	
	printf("%d %d %c\n", num1, num2, op);  //중간 체크 -> 데이터 잘 들어왔는지?

}