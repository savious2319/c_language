#include<stdio.h>
/*
	�Լ� 2���� ����� ���ô�.
	1) ���� 3���� ���� ����� ����� �ִ� �Լ� <-- ����ϴ� �Լ���~
	2) ���� 3���� ������ ����� ������ �ִ� �Լ� <--- ���ϰ��� �־�� �ȴ�~
	
	��� ��) 1+2+3=6
	    ��) 1+2+3=6

*/
int a = 0, b = 0, c = 0;
void printSum(int a, int b, int c);
int getSum(int a, int b, int c);


void main() {
	printf("���� 3�� �Է�: "); scanf("%d %d %d", &a, &b, &c);

	printSum(a,b,c);

	printf("�μ� 3�� ���� �Լ� ��� : %d+%d+%d=%d\n", a, b, c, getSum(a, b, c));
	

	
}

void printSum(int a, int b, int c) { // printSum <--- ������شٴ� �Լ��̸�
	int res = a + b + c;
	printf("%d+%d+%d=%d\n", a, b, c, res);
}

int getSum(int a, int b, int c) {
	return a + b + c;

}