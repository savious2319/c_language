#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Address {
	char name[10];
	char phone[15];
	char address[100];
	char email[25];
	char bday[20];
	int age;

} Address;

void inputAddress(int size, Address *pFrd) {
	system("cls");
	for (int i = 0; i < size; i++){

	printf("이름을 입력해 주세요 : "); gets(pFrd[i].name);       // gets() 문자열 받는 함수
	printf("핸드폰 번호를 입력해 주세요 : "); gets(pFrd[i].phone);
	printf("주소를 입력해 주세요 : "); gets(pFrd[i].address);
	printf("이메일을 입력해 주세요 : "); gets(pFrd[i].email);
	printf("생일을 입력해 주세요 : "); gets(pFrd[i].bday);
	printf("나이를 입력해 주세요 : "); scanf("%d", &pFrd[i].age);
	getchar();
	}

}

void printAddress(int size, Address *pFrd) {

	for (int i = 0; i < size; i++) {
		puts("--------------------------");
		printf("이름 \t: %s\n", pFrd[i].name);      // gets() 문자열 받는 함수
		printf("핸드폰 \t: %s\n", pFrd[i].phone);
		printf("주소 \t: %s\n", pFrd[i].address); 
		printf("이메일 \t: %s\n", pFrd[i].email); 
		printf("생일 \t: %s\n", pFrd[i].bday); 
		printf("나이 \t: %d\n", pFrd[i].age); 
		puts("--------------------------");
		/*printf("이름\n핸드폰\n주소\n이메일\n생일\n나이\n");
		printf("%s\t%s\t%s\t%s\t%s\t%d\n", 
			pFrd[i].name, pFrd[i].phone, pFrd[i].address, 
			pFrd[i].email, pFrd[i].bday, pFrd[i].age);*/

	}
}