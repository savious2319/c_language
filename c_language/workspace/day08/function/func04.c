#include<stdio.h>
	//�� ������ �Է¹޾�
	//����, ����, ����, �������� ���� ������� ����� �� �ֵ��� �Ѵ�.
	//���� �Լ� : getSum();
	//���� �Լ� : getMinus();
	//���� �Լ� : getMul();
	//������ : getDiv();
	//��� ����� main �Լ����� ����� ��! <---hint �� �Լ����� ó���� ������� ��ȯ���Ѿ� �Ѵ�
	//��) 10, 20 �Է�
	// ���� : 10+20=30
	// ���� : 10-20=-10
	// ���� : 10*20=200
	// ������ : 10/20=0

//return �����ϱ�
//int n1 = 0, n2 = 0;

int getSum(int n1, int n2);
int getMinus(int n1, int n2);
int getMul(int n1, int n2);
int getDiv(int n1, int n2);

void printCalc(int x, int y) {

	int n1 = x;
	int n2 = y;

	printf("%d + %d = %d\n", n1, n2, getSum(n1, n2)); // getSum�� �����̴�
	printf("%d - %d = %d\n", n1, n2, getMinus(n1, n2));
	printf("%d * %d = %d\n", n1, n2, getMul(n1, n2));
	printf("%d / %d = %d\n", n1, n2, getDiv(n1, n2));

}

void main() {


	int n1 = 0, n2 = 0;
	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d", &n1, &n2);

	printCalc(n1, n2);


}

int getSum(int n1, int n2) {
	return n1 + n2;

}
int getMinus(int n1, int n2) {
	return n1 - n2;
}
int getMul(int n1, int n2) {
	return n1 * n2;
}
int getDiv(int n1, int n2) {
	return n1 / n2;
}