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

	printf("�̸��� �Է��� �ּ��� : "); gets(pFrd[i].name);       // gets() ���ڿ� �޴� �Լ�
	printf("�ڵ��� ��ȣ�� �Է��� �ּ��� : "); gets(pFrd[i].phone);
	printf("�ּҸ� �Է��� �ּ��� : "); gets(pFrd[i].address);
	printf("�̸����� �Է��� �ּ��� : "); gets(pFrd[i].email);
	printf("������ �Է��� �ּ��� : "); gets(pFrd[i].bday);
	printf("���̸� �Է��� �ּ��� : "); scanf("%d", &pFrd[i].age);
	getchar();
	}

}

void printAddress(int size, Address *pFrd) {

	for (int i = 0; i < size; i++) {
		puts("--------------------------");
		printf("�̸� \t: %s\n", pFrd[i].name);      // gets() ���ڿ� �޴� �Լ�
		printf("�ڵ��� \t: %s\n", pFrd[i].phone);
		printf("�ּ� \t: %s\n", pFrd[i].address); 
		printf("�̸��� \t: %s\n", pFrd[i].email); 
		printf("���� \t: %s\n", pFrd[i].bday); 
		printf("���� \t: %d\n", pFrd[i].age); 
		puts("--------------------------");
		/*printf("�̸�\n�ڵ���\n�ּ�\n�̸���\n����\n����\n");
		printf("%s\t%s\t%s\t%s\t%s\t%d\n", 
			pFrd[i].name, pFrd[i].phone, pFrd[i].address, 
			pFrd[i].email, pFrd[i].bday, pFrd[i].age);*/

	}
}