#include<stdio.h>
/*
	��ø for�� : for�� �ȿ� �������� for���� �� �� �ִ�.
	�̶�, ���ο� �ִ� for���� �ʱ���� �Ź� �ʱ�ȭ�ȴ�!


*/
void main() {
	int i = 0;
	int j = 0;
	for (i = 0; i < 2; i++){

		for (j = 0; j < 3; j++){

			printf("i:%d j:%d\n", i, j);
		}//end j

	}//end i

	printf("for�� ���� �� : i:%d j:%d\n", i, j);



}