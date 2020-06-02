#include<stdio.h>

void main()
{
	char ch = ' ';
	char addr[100] = "";

	printf("y 또는 n을 입력하세요 : "); scanf("%c", &ch);
	printf("선택 값 : %c\n", ch);
	puts("------------------");
	printf("주소를 입력하세요 : "); 
	gets(addr); //scanf("%s", addr);
	gets(addr);  // <--- 엔터값을 해결해줌
	puts("이상하다!");
	puts(addr);


}