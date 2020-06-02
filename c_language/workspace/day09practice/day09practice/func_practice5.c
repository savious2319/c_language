#include<stdio.h>
//문1) year를 입력받고 year의 값을 변화할 수 있는 함수만들기(매개변수 한개짜리 함수)
//문2) year와 month를 입력받고 두 값을 변화시킬 수 있는 함수 만들기(매개변수 두개짜리 함수)
//call by value의 한계
int changeYear(int year) {
	printf("입력받은 값 : %d\n", year);
	int ch_year = 0;
	printf("입력하고 싶은 값 : "); scanf("%d", &ch_year);
	return ch_year;
}

void main() {
	int year = 0;
	printf("년도를 입력하세요 : "); scanf("%d", &year);
	year = changeYear(year);

	printf("changeYear함수를 다녀온 후 년도 : %d\n", year);



}