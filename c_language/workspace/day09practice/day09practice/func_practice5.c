#include<stdio.h>
//��1) year�� �Է¹ް� year�� ���� ��ȭ�� �� �ִ� �Լ������(�Ű����� �Ѱ�¥�� �Լ�)
//��2) year�� month�� �Է¹ް� �� ���� ��ȭ��ų �� �ִ� �Լ� �����(�Ű����� �ΰ�¥�� �Լ�)
//call by value�� �Ѱ�
int changeYear(int year) {
	printf("�Է¹��� �� : %d\n", year);
	int ch_year = 0;
	printf("�Է��ϰ� ���� �� : "); scanf("%d", &ch_year);
	return ch_year;
}

void main() {
	int year = 0;
	printf("�⵵�� �Է��ϼ��� : "); scanf("%d", &year);
	year = changeYear(year);

	printf("changeYear�Լ��� �ٳ�� �� �⵵ : %d\n", year);



}