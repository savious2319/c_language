#include<stdio.h>

void main()
{
	//#1. 문자열 공백 입력받기 서식문자 : %[^\n] 정규표현식  ^ : 처음부터  \n (엔터)까지 계속 입력받을 것!

	char arAddress[100] = "";
	printf("주소를 입력하세요(공백 포함) : ");

	//#1.
	//scanf_s("%[^\n]", arAddress, sizeof(arAddress));

	//#2.
	gets(arAddress);  //get <-> put과 반대되는 기능의 함수(문자열 함수)  /getchar(문자형 변수)

	printf("입력한 주소 : %s\n", arAddress);





}