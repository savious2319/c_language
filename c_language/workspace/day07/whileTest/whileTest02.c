#include<stdio.h>
#include<Windows.h>
/*
	while��
	�Ĵ� �޴� �����
	********Korea �Ĵ� ******
	1. ��ġ�
	2. �����
	3. �δ��
	4. ���κ��
	�ֹ� : ��     //  \b

	�ֹ��Ͻ� �޴���
	000�Դϴ�.
*/
void main() {

	int meNum = 0;

	while (1) {
		puts("********Korea �Ĵ� ******");
		puts("1. ��ġ�\n2. �����\n3. �δ��\n4. ���κ��\n0. �ֹ� ����");
		printf("�ֹ� �ϼ��� : "); scanf("%d", &meNum);
		system("cls");

		if (meNum == 0) {
			puts("�ֹ��� �����մϴ�");
			break;
		}
		else {
			switch (meNum)
			{
			case 1: puts("��ġ�"); break;
			case 2: puts("�����"); break;
			case 3: puts("�δ��"); break;
			case 4: puts("���κ��"); break;

			}

		}
	}
	puts("\n\n���α׷�");


}