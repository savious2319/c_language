#include<stdio.h>

void main() {

	//������
	int sum = 0;

	//�������� ���ؼ� 5���� �����
	
	for (int i = 0; i < 5; i++)
	{
		sum = sum + 1;
	}
	printf("%d\n", sum);

	//1���� 5������ ��
	sum = 0;
	for (int i = 0; i < 5; i++)
	{
		//sum = sum + (i + 1);
		sum += i + 1;
	}

	printf("%d\n", sum);
	//for (i = 0; i < 5; i++)
	//{
	//printf("%d\n", i+1);

	//}


}