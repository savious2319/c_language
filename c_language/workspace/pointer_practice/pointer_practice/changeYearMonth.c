#include <stdio.h>

void changeYearMonth(int *year, int *month) {
	int temp = *year;
	*year = *month;
	*month = temp;
}


void main() {
	
	int year = 0, month = 0;
	printf("�⵵�� �Է��ϼ��� : "); scanf("%d", &year);
	printf("���� �Է��ϼ��� : "); scanf("%d", &month);

	printf("�ٲٱ��� �⵵ :%d\t��: %d\n", year, month);
	changeYearMonth(&year, &month);
	printf("�ٲ� �� �⵵ :%d\t��: %d\n", year, month);


}