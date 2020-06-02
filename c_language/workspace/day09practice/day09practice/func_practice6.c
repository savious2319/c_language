#include<stdio.h>
//문2) year와 month를 입력받고 두 값을 변화시킬 수 있는 함수 만들기(매개변수 두개짜리 함수)
//call by value의 한계
int changeYear(year) {
	//printf("입력받은 년도 :%d\n", year);
	int ch_year = 0;
	printf("입력하고 싶은 년도 : ");
	scanf("%d", &ch_year);
	//printf("새로 입력받은 년도 :%d\n", ch_year);
	return ch_year;
}

int changeMonth(month) {
	//printf("입력받은 월 :%d\n", month);
	int ch_month = 0;
	printf("입력하고 싶은 월 : ");
	scanf("%d", &ch_month);
	//printf("새로 입력받은 월 :%d\n", ch_month);
	return ch_month;
}

void main() {
	int year = 0, month = 0;
	printf("년도 입력 : "); scanf("%d", &year);
	printf("월 입력 : "); scanf("%d", &month);

	year = changeYear(year);
	month = changeMonth(month);

	printf("바뀐 년도 :%d\t바뀐 월 :%d\n", year, month);




}