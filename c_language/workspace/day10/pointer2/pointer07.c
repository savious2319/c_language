#include <stdio.h>
void changeSwap(int *pYear, int *pMonth) {
	int temp = *pYear; //�ּҸ� ������ ������ �����ؾ� �Ѵ�
	*pYear = *pMonth;
	*pMonth = temp;

}
void main() {
	int year = 5;
	int month = 2020;

	printf("changeSwap() ȣ�� �� >> year: %d�� month: %d��\n", year, month);

	//�� ������ ���� �¹ٲ� ����!
	changeSwap(&year, &month);

	printf("changeSwap() ���� �� >> year: %d�� month: %d��\n", year, month);
}