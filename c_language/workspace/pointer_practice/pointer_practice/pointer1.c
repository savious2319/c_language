#include <stdio.h>

int switchNum(int *x, int *y) {
	
	int temp = *x;
	*x = *y;
	*y = temp;
	return *x, *y;
}

void main() {

	int num1 = 0, num2 = 0;
	
	printf("���� 2�� �Է� : "); scanf("%d %d", &num1, &num2);

	printf("�ٲٱ��� ���� 1 : %d\t���� 2 : %d\n", num1, num2);
	switchNum(&num1, &num2);
	printf("�ٲ��� ���� 1 : %d\t���� 2 : %d\n", num1, num2);


}