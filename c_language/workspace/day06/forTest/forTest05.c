#include<stdio.h>

void main() {

	//누적식
	int sum = 0;

	//누적식을 통해서 5까지 만들기
	
	for (int i = 0; i < 5; i++)
	{
		sum = sum + 1;
	}
	printf("%d\n", sum);

	//1부터 5까지의 합
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