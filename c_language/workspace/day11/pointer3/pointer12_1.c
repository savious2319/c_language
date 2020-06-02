#include <stdio.h>
#include<stdlib.h>

void input(int **pNai) {
	//실제 데이터가 들어가야할 메모리를 할당받자

	*pNai = (int *)malloc(4); // pNai에 pAge의 주소가 들어갔다. 그래서 *pNai = (int *)malloc(4)하게되면 heap에 4바이트 int 메모리가 만들어지고 이 주소가
							  // pAge를 향하고 있다. 그리고 그 주소안에 10이란 정수를 넣는다.
	**pNai = 10;

}


void main()
{
	int *pAge;  //쓰레기 주소값

	input(&pAge);  //쓰레기 주소값을 보낸다!

	printf("%d살\n", *pAge);
	
}