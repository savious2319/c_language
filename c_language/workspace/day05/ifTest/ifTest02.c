#include<stdio.h>


void main()
{
	//¦�� Ȧ�� �Ǻ� ���α׷� ����� ����
 
	int x = 0;

	int result = 0;
	printf("���� �Է� : "); scanf("%d", &x);

	result = (x % 2 == 0); // <---flag ����

	if (result)
	{
		puts("¦���Դϴ�");
	}

	if (!result)
	{
		puts("Ȧ���Դϴ�");
	}



}