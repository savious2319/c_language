#include<stdio.h>

void main()
{
	//#1. ���ڿ� ���� �Է¹ޱ� ���Ĺ��� : %[^\n] ����ǥ����  ^ : ó������  \n (����)���� ��� �Է¹��� ��!

	char arAddress[100] = "";
	printf("�ּҸ� �Է��ϼ���(���� ����) : ");

	//#1.
	//scanf_s("%[^\n]", arAddress, sizeof(arAddress));

	//#2.
	gets(arAddress);  //get <-> put�� �ݴ�Ǵ� ����� �Լ�(���ڿ� �Լ�)  /getchar(������ ����)

	printf("�Է��� �ּ� : %s\n", arAddress);





}