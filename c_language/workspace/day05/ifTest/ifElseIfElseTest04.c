#include<stdio.h>
/*
	if() : 단일선택
	if()else : 양자 택일
	if()else if() else... : 다중 택일

	다중 if else문 : 여러개 중에 하나만 선택해 실행한다!

	if(조건식A)
	    실행문A
	else if (조건식B)    그렇지 않다면, 다시 물어보기!
	    실행문B;
    else if (조건식C)
	    실행문C;
	else if (조건식D)
	    실행문D;
    else               <------- 조건 A~D까지 해당사항이 없을 때 실행하게 된다.
	    실행문E;

*/

void main()
{
	//짝수 홀수 0
	//다중 if else 로 만들어 보기
	int num = 0;
	printf("정수 입력 : "); scanf("%d", &num);

	if (num == 0) {
		puts("0입니다.");
	}
	else {
		if (num % 2 == 0) {
			puts("짝수 입니다.");
		}
		else /*(num % 2 == 1)*/ {
			puts("홀수 입니다.");
		}
	}

	
/*
void main(){
	char al = ' ';
	printf("알파벳 : "); al = getchar();

	if (al >= 'A' && al <= 'Z') {
		puts("대문자 입니다");
	}
	else if (al >= 'a' && al <= 'z') {
		puts("소문자 입니다");
	}
	else {
		puts("알파벳이 아닙니다.");
	}
	puts("프로그램 종료");
	*/
}