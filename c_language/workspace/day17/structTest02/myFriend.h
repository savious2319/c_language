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

void printFriend(Friend person) {  //����ü�� �μ�ǰ. ���� �� �� ����. ����ü�� �Լ��� �Ѵ� �����ؾ� ��.
	printf("�̸�\t��ȣ\t\tŰ\n");
	printf("%s\t%s\t%.1fcm\n", person.name, person.number, person.height);
	puts("");
}