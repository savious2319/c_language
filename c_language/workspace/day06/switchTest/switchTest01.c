#include<stdio.h>
/*
	if : ���ϼ���
	if else : ��������
	if else if else : ���� ����

	���ǹ�
	4) switch ~ case : ���� �б� �Ǵ� ���� ����

	(1) ���� �б�
	   switch(����)  //switch ������ ������ ���� �ǹ��Ѵ� (���ǽ��� ���� ���� ���� ����)
	                // (������, ����, ��� ���� ���� -> �Ǽ��� �ȵ�, �������� ǥ������)
	   {

		case ����� :  // switch(����) ���ǿ� �ش��ϴ� ������� ����, case ���� �ִ� ������� ã�ư��� �ȴ�.
		case ����� :  // ���� case ���� �ִ� ������� ����, ���� ������߸� �ȴ�.
		case ����� :  //                             ����, ����, �Ǽ�, ���ڿ� ���� (������ ���� ���ڿ��� ���)
		...
		default :

		}

	(2) ���� ����
		switch(����)
		{

		case ����� :    break;
		case ����� :    break;
		case ����� :    break;
		...
		default :
		
		}



*/
void main() {

	int num = 0;

	printf("���� �Է�(1~5) "); scanf("%d", &num);
	/*
	switch (num)
	{
	case 1:
		puts("1�Դϴ�."); break;
	case 2:
		puts("2�Դϴ�."); break;
	case 3:
		puts("3�Դϴ�."); break;
	case 4:
		puts("4�Դϴ�."); break;
	case 5:
		puts("5�Դϴ�."); break;
	default:
		puts("1~5�� �ƴմϴ�");
	}
	*/
	if (num == 1) {
		puts("1�Դϴ�.");
	}
	else if (num == 2) {
		puts("2�Դϴ�.");
	}
	else if (num == 3) {
		puts("3�Դϴ�.");
	}
	else if (num == 4) {
		puts("4�Դϴ�.");
	}
	else if (num == 5) {
		puts("5�Դϴ�.");
	}
	else {
		puts("1~5�� �ƴմϴ�");
	}
	puts("���α׷� ����");


}