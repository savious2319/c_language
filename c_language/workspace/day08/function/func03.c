#include<stdio.h>
/*
	�Լ��� ������
	����(argument)�� �־ ȣ���ϸ�!!!
	parameter�� ���ڰ��� �޴´�!


*/
int printSum(int n1, int n2) {
	int res = n1 + n2;
	printf("���� ��� : %d+%d=%d\n", n1, n2, res);
	
}

int printMinus(int n1, int n2) {
	int res = n1 - n2;
	printf("%d-%d=%d\n", n1, n2, res);

	//����� ���� ���밪 ���ϱ�! �� ���� �Ÿ�
	if (res < 0) {
		res = -res;
	}
	printf("%d�� %d�� ���밪 %d\n", n1, n2, res);

}
void main() {

	//�� �Լ��� ����� �� �Լ����� ������� ����� ����
	printSum(10, 20);  
	printMinus(20, 30);
}