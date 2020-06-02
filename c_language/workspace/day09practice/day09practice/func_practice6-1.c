#include<stdio.h>
int changeValue1(year, month) {
	printf("입력받은 년도와 월 : %d %d\n", year, month);
	int temp;
	temp = year;
	year = month;
	month = temp;
	printf("switching 한 값 확인 : %d %d\n\n", year, month);
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
		printf("년도와 월을 입력하세요 : "); scanf("%d %d", &year, &month);

		int input_year = year;

		system("cls");

		year = changeValue1(year, month);
		month = changeValue2(input_year, month);

		//printf("바뀐 년도 :%d\t바뀐 월 :%d\n", year, month);
		printf("change 함수 실행한 이후 year와 month의 값 : %d %d\n\n", year, month);
}