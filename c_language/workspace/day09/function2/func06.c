#include<stdio.h>

//0~9������ ������ ���� �Ǻ��ϴ� �Լ� ����
//checkNumber �� �������� 0~9�������� �˷��ݴϴ�. return�� 1,0���� ���ɴϴ�.
int isFromZeroToNine(int checkNumber){
	
	return 0 <= checkNumber && checkNumber <= 9 ? 1: 0;
}

void main() {

	//���� �Է��� �����Ͱ� 0~9�������� �Ǻ��ϴ� �Լ� ����
	//return �� true, false�� �����.
	//�Լ����� ���鶧 ���λ��  is- ��� ���� ���δ�!! ~~�̴�? ��, �ƴ�
	//��) isAlpha(������) �����Ͱ� Alpha�̴�? (���ĺ��̴�?)
	//   isDigit(������) argument�� ���ڴ�? -> �� �ƴ�, 1, 0���� ���´�.
	//    �׷��� ����Ÿ���� int�� �����!
	//
int num = 0;
do{
		printf("0~9������ ���ڸ� �־��ּ��� : ");
		scanf("%d", &num);

		if (isFromZeroToNine(num)) { // 1<=num && num<=9 : �� �κ��� �Լ��� ��ü�ߴ�.
					
			printf("�Է°� >> %d\n", num);
			break;
		}
		else {
			printf("0~9�� �ƴϳ׿�.�ٽ� �Է��� �ּ���.\n");

		}
	} while (1);
}