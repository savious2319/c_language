#include<stdio.h>
//���� 2���� �Է¹޾� �� ������ ���� ���ϴ� �Լ�
//��) 1, 4
//   1���� 4������ ���� ������ �ش�!

int getAccumulatedSum(int a, int b) {
	int sum = 0;
	if (a > b) {
		int temp;
		temp = a;
		a = b;
		b = temp;

	}

	for (int i = a; i <= b; i++){
		sum += i;
	}
	return sum;

}



void main() {
	int a = 0, b = 0;
	printf("���� 2�� �Է� : "); scanf("%d %d", &a, &b);

	printf("%d~%d�� �� : %d\n", a, b, getAccumulatedSum(a, b));


}