#include<stdio.h>

//0~9������ ������ ���� �Ǻ��ϴ� �Լ� ����
//checkNumber �� �������� 0~9�������� �˷��ݴϴ�. return�� 1,0���� ���ɴϴ�.

//���� �Է��� �����Ͱ� 0~9�������� �Ǻ��ϴ� �Լ� ����
//return �� true, false�� �����.
//�Լ����� ���鶧 ���λ��  is- ��� ���� ���δ�!! ~~�̴�? ��, �ƴ�
//��) isAlpha(������) �����Ͱ� Alpha�̴�? (���ĺ��̴�?)
//   isDigit(������) argument�� ���ڴ�? -> �� �ƴ�, 1, 0���� ���´�.
//    �׷��� ����Ÿ���� int�� �����!
int isNumFromZeroToNine(int checkNum) {
	return checkNum >= 0 && checkNum <= 9 ? 1 : 0;
}

void main() {

	int num = 0;
	while (1) {
		printf("0~9������ ���ڸ� �־� �ּ��� : "); scanf("%d", &num);

		if (isNumFromZeroToNine(num)) {

			printf("�Է��� �� >>> %d\n", num);
			
		}
		else {
			puts("0~9������ ���� �ƴմϴ�. �ٽ� �Է����ּ���");
		}
	}
}