#include<stdio.h>

void main() {

	//���Ϻ��� 1~15�� ���ڰ� �ִ�.
	//1~7���� low��
	//8���� middle��
	//9~15���� high ���̴�.
	//�� ��ȣ�� ������ ��(�Է¹��� ��), �ش� ���� "low��" "high��" "middle��" �Դϴ� ��� �޼����� ���� �� �ְ� ����
	// 1)if else�� ������
	// 2)switch�� ������

	//1)if��
	int num = 0;
	printf("�� ��ȣ ����: "); scanf("%d", &num);
	/*if (num >= 1 && num <= 7) {
		printf("%d�� ���� \"low�� �Դϴ�\"\n", num);
		puts("low��");
	}
	else if (num >= 9 && num <= 15) {
		puts("high��");
	}
	else {
		puts("middle��");
	}*/


	//2)switch��

	switch (num)
	{
	case 1: 
	case 2:
	case 3: 
	case 4: 
	case 5: 
	case 6: 
	case 7: printf("%d�� ���� \"low�� �Դϴ�\"\n", num); break;
	case 8: printf("%d�� ���� \"low�� �Դϴ�\"\n", num); break;
	case 9: 
	case 10: 
	case 11: 
	case 12: 
	case 13: 
	case 14: 
	case 15: printf("%d�� ���� \"low�� �Դϴ�\"\n", num); break;
	}
}