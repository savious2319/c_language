#include<stdio.h>
/*
	while����
	do~while�� �ٲ㺸��

*/

int menu() {
	int menuNum = 0;
	puts("********Korea �Ĵ� ******");
	puts("1. ��ġ�\n2. �����\n3. �δ��\n4. ���κ��\n0. �ֹ� ����");
	printf("�ֹ� �ϼ��� : "); scanf("%d", &menuNum);
	return menuNum;

}

void printBill(int k, int d, int s, int b) {
	//SUN * s 

}
void main() {

	int meNum = 0;

	//do~while �� ������ �� �Ǵ�!!! ���� �ѹ��� �ݺ��ϰ� ���߿� �ݺ����θ� �����ϴ� ��
	do { //while( menu() != 0)


		//�޴���� �Լ��� ������!
		meNum = menu();

		system("cls");
		//������ �Լ��� ������!
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
		}while(1); //do~while���� ���� ; �����ݷ����� ������ �Ѵ�.

		puts("\n\n���α׷�");

}