#include<stdio.h>

void main()
{
	//�̸�, �ּ� �������� �Է¹ޱ�
	char arName[40] = "";
	char arAddress[100] = "";

	printf("�̸� : "); gets(arName);
	printf("�ּ� : "); gets(arAddress);

	puts("*** �Է��� ���� ***");
	printf("�̸� : %s\n", arName);
	printf("�ּ� : %s\n", arAddress);



}