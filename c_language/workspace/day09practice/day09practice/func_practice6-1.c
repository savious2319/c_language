#include<stdio.h>
int changeValue1(year, month) {
	printf("�Է¹��� �⵵�� �� : %d %d\n", year, month);
	int temp;
	temp = year;
	year = month;
	month = temp;
	printf("switching �� �� Ȯ�� : %d %d\n\n", year, month);
	return year;
}

int changeValue2(year, month) {
	int temp;
	temp = year;
	year = month;
	month = temp;

	return month;
}



	void main() {
		int year = 0, month = 0;
		printf("�⵵�� ���� �Է��ϼ��� : "); scanf("%d %d", &year, &month);

		int input_year = year;

		system("cls");

		year = changeValue1(year, month);
		month = changeValue2(input_year, month);

		//printf("�ٲ� �⵵ :%d\t�ٲ� �� :%d\n", year, month);
		printf("change �Լ� ������ ���� year�� month�� �� : %d %d\n\n", year, month);
}