#include <stdio.h>

int switchNum(int *x, int *y) {
	
	int temp = *x;
	*x = *y;
	*y = temp;
	return *x, *y;
}

void main() {

	int num1 = 0, num2 = 0;
	
	printf("숫자 2개 입력 : "); scanf("%d %d", &num1, &num2);

	printf("바꾸기전 숫자 1 : %d\t숫자 2 : %d\n", num1, num2);
	switchNum(&num1, &num2);
	printf("바꾼후 숫자 1 : %d\t숫자 2 : %d\n", num1, num2);


}