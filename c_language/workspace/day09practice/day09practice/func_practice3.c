#include<stdio.h>
//��2) �Է��� ���� ���ĺ����� �ƴ��� �Ǻ��ϴ� �Լ� ����!
//���ĺ��� ���� (�Ű������� �� = A) 65 <=
int isAlpha(int checkNum) {

	return (checkNum >= 'A' && checkNum <= 'Z') || (checkNum >= 'a' && checkNum <= 'z') ? 1 : 0;
}


void main() {
	int num = 0;
	printf("���� �Է� : "); scanf("%d", &num);

	if (isAlpha(num)) {
		printf("�Է��� ���� %d >>> ���ĺ� %c\n", num, num);
	}
	else {
		printf("�Է��� ���� %d >>> ���ĺ��� �ƴմϴ� : %c\n", num, num);
	}


}