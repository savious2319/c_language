#include<stdio.h>
//��2) year�� month�� �Է¹ް� �� ���� ��ȭ��ų �� �ִ� �Լ� �����(�Ű����� �ΰ�¥�� �Լ�)
//call by value�� �Ѱ�
int changeYear(year) {
	//printf("�Է¹��� �⵵ :%d\n", year);
	int ch_year = 0;
	printf("�Է��ϰ� ���� �⵵ : ");
	scanf("%d", &ch_year);
	//printf("���� �Է¹��� �⵵ :%d\n", ch_year);
	return ch_year;
}

int changeMonth(month) {
	//printf("�Է¹��� �� :%d\n", month);
	int ch_month = 0;
	printf("�Է��ϰ� ���� �� : ");
	scanf("%d", &ch_month);
	//printf("���� �Է¹��� �� :%d\n", ch_month);
	return ch_month;
}

void main() {
	int year = 0, month = 0;
	printf("�⵵ �Է� : "); scanf("%d", &year);
	printf("�� �Է� : "); scanf("%d", &month);

	year = changeYear(year);
	month = changeMonth(month);

	printf("�ٲ� �⵵ :%d\t�ٲ� �� :%d\n", year, month);




}