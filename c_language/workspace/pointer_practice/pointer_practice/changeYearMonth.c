#include <stdio.h>

void changeYearMonth(int *year, int *month) {
	int temp = *year;
	*year = *month;
	*month = temp;
}


void main() {
	
	int year = 0, month = 0;
	printf("년도를 입력하세요 : "); scanf("%d", &year);
	printf("월을 입력하세요 : "); scanf("%d", &month);

	printf("바꾸기전 년도 :%d\t월: %d\n", year, month);
	changeYearMonth(&year, &month);
	printf("바꾼 후 년도 :%d\t월: %d\n", year, month);


}