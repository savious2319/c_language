#include <stdio.h>
void changeSwap(int *pYear, int *pMonth) {
	int temp = *pYear; //주소를 변수로 값으로 변경해야 한다
	*pYear = *pMonth;
	*pMonth = temp;

}
void main() {
	int year = 5;
	int month = 2020;

	printf("changeSwap() 호출 전 >> year: %d년 month: %d월\n", year, month);

	//두 변수의 값을 맞바꿔 보자!
	changeSwap(&year, &month);

	printf("changeSwap() 복귀 후 >> year: %d년 month: %d월\n", year, month);
}