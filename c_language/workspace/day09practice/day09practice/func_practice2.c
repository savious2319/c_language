#include <stdio.h>
/*
����ڰ� üũ�ϰ��� �ϴ� ������ ���� ��,
�Է°��� �����ȿ� �ִ� �� �������� �Ǻ��ϴ� �Լ�
���� 3���� �ʿ��ϴ�!
ù��° ����, ���� ���۰�
�ι�° ����, ���� ����
����° ����, üũ�ϰ��� �ϴ� ��
return ���� true, false Boolean == c������ ���� 1, 0�̶�� �Ѵ�.
1    0
*/
int isNumWithinRange(int start, int end, int check) {
	return check >= start && check <= end ? 1 : 0;

}

void main() {
	int sNum = 0, eNum = 0, cNum = 0;
	printf("���۰��� �Է��ϼ��� : "); scanf("%d", &sNum);
	printf("������ �Է��ϼ��� : "); scanf("%d", &eNum);
	printf("üũ�ϰ� ���� ���� �Է��ϼ��� : ");  scanf("%d", &cNum);

	if (isNumWithinRange(sNum, eNum, cNum)) {
		printf("�Է��� �� : %d�� ���۰� :%d�� ���� :%d ���� �ȿ� �ֽ��ϴ�\n", cNum, sNum, eNum);
	}
	else {
		printf("�Է��� �� :%d�� ���۰� :%d�� ���� :%d ���� ���Դϴ�\n", cNum, sNum, eNum);

	}

}