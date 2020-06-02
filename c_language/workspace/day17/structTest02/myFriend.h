#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct ClassInfo
{
	char name[10];
	char number[15];
	double height;
} Friend, FRD;

void printFriend(Friend person) {  //구조체의 부속품. 서로 땔 수 없다. 구조체와 함수를 둘다 관리해야 함.
	printf("이름\t번호\t\t키\n");
	printf("%s\t%s\t%.1fcm\n", person.name, person.number, person.height);
	puts("");
}