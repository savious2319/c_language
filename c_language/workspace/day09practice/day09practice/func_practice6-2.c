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
	printf("�⵵�� ���� �Է��ϼ��� : "); scanf("%d %d", &x, &y);

	year = changeValue1(x, y);
	month = changeValue2(x, y);

	printf("�ٲ� �⵵�� �� : %d %d\n", year, month);

	
}*/
void main() {

	int arLottoNum[6] = { 0 };
	int sizeLotto = sizeof(arLottoNum) / sizeof(arLottoNum[0]);
	printf("%d", sizeof(arLottoNum[0]));
}