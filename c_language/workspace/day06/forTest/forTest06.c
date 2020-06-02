#include<stdio.h>
/*
	중첩 for문 : for문 안에 여러개의 for문을 둘 수 있다.
	이때, 내부에 있는 for문의 초기식은 매번 초기화된다!


*/
void main() {
	int i = 0;
	int j = 0;
	for (i = 0; i < 2; i++){

		for (j = 0; j < 3; j++){

			printf("i:%d j:%d\n", i, j);
		}//end j

	}//end i

	printf("for문 종료 후 : i:%d j:%d\n", i, j);



}