#include<stdio.h>

//���� 2���� �Է¹޾� �� ������ ���� ���ϴ� �Լ�
//��) 1, 4
//   1���� 4������ ���� ������ �ش�!

int getSumOfTwoNums(int num1, int num2) { // ���۰��� �������� Ŭ�� �� ���� �ٲٸ�(switching) for�� �ѹ��� �� �� �ִ�
	int sum = 0;
	if (num1 > num2) {
		/*
		num1 = num2; //num2�� num1�� ���� ���� num1�� ���� �������! �׷��� num1�� ���� �� �ٸ� ������ �ʿ��ϴ�! int temp
		num2 = num1;
		*/
		//int temp = 0;
		int temp;
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for (int i = num1; i <= num2; i++) {
		sum += i;
	}
	return sum;
}


void main() {
	int num1 = 0, num2 = 0;
	//printf("���� 2�� �Է�: "); scanf("%d %d", &num1, &num2);
	printf("���۰� : "); scanf("%d", &num1);
	printf("�� �� : "); scanf("%d", &num2);
	//printf("�� ������ �� : \n", getSumOfTwoNums(num1,num2));
	printf("%d~%d������ �� : %d\n", num1, num2, getSumOfTwoNums(num1, num2));
}