#include <stdio.h>

/*int x = 0, y = 0;

int changeValue1(x, y) {
	int temp;
	temp = x;
	x = y;
	y = temp;

	return x;
}

int changeValue2(x, y) {
	int temp;
	temp = x;
	x = y;
	y = temp;

	return y;

}

void main() {
	int year = 0, month = 0;
	printf("년도와 월을 입력하세요 : "); scanf("%d %d", &x, &y);

	year = changeValue1(x, y);
	month = changeValue2(x, y);

	printf("바뀐 년도와 월 : %d %d\n", year, month);

	
}*/
void main() {

	int arLottoNum[6] = { 0 };
	int sizeLotto = sizeof(arLottoNum) / sizeof(arLottoNum[0]);
	printf("%d", sizeof(arLottoNum[0]));
}