#include<stdio.h>
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
/*

*/
int isInputNumWithinTwoNums(int start, int end, int check) {
	return start <= check && end >= check ? 1 : 0;

}

int isAlpha(int check) {

	return check >= 65 && check <= 90 || check >= 97 && check <= 122 ? 1 : 0;
	//return (check >= 'A' && check <= 'Z') || (check >= 'a' && check <= 'z') ? 1 : 0;

}

void main() {
	/*int sNum = 0, eNum = 0, cNum = 0;
	printf("���۰� �Է� : "); scanf("%d", &sNum);
	printf("���� ���� �Է� : "); scanf("%d", &eNum);
	printf("�Է°� : "); scanf("%d", &cNum);

	
	if (isInputNumWithinTwoNums(sNum, eNum, cNum)) {
		printf("�Է°�: %d�� ���۰�: %d�� ����: %d ���̿� �ִ� ���Դϴ�.\n", cNum, sNum, eNum);
	}
	else {
		printf("�Է°�: %d�� ���۰�: %d�� ����: %d ���� ���� �� �Դϴ�.\n", cNum, sNum, eNum);
	}*/
	
	//��2) �Է��� ���� ���ĺ����� �ƴ��� �Ǻ��ϴ� �Լ� ����!
	     //���ĺ��� ���� (�Ű������� �� = A) 65 <=
	int check = ' ';
	printf("�Է� : ");  scanf("%d", &check);

	if (isAlpha(check)) {
		printf("���ĺ� %c�� �Է��ϼ̽��ϴ�\n", check);
	}
	else {
		printf("���ĺ��� �ƴմϴ�\n �Է°�: %c\n", check);
	}
}