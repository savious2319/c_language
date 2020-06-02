#include<stdio.h>

void main()
{
	//이름, 주소 연속으로 입력받기
	char arName[40] = "";
	char arAddress[100] = "";

	printf("이름 : "); gets(arName);
	printf("주소 : "); gets(arAddress);

	puts("*** 입력한 내용 ***");
	printf("이름 : %s\n", arName);
	printf("주소 : %s\n", arAddress);



}