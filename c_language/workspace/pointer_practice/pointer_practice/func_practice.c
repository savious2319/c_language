#include <stdio.h>
//���� 2���� �Է¹޾� ¦�� ��ȣ�� ����ϴ� �Լ�
//��) 1, 10
//   1���� 10������ ¦���� ������ �ش�!
void printEvenNum(int x, int y) {
	if (x > y) {
		int temp = x;
		x = y;
		y = temp;
	}

	for (int i = x; i <= y; i++){
		if (i % 3 == 0 && i % 9 != 0)
			printf("%d\n", i);
		}
}


void main() {

	int num1 = 0, num2 = 0;
	printf("���� 2�� �Է� : "); scanf("%d %d", &num1, &num2);
	printEvenNum(num1, num2);



}