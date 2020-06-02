#include<stdio.h>
#define Kimchi 5000
#define Danjang 6000
#define Budae 7000
#define Suduboo 8000


/*

�Ĵ� �޴� �����
********Korea �Ĵ� ******
1. ��ġ� - 5000��
2. ����� - 6000��
3. �δ�� - 7000��
4. ���κ�� - 8000��
�ֹ� : ��     //  \b

������ ���!
��1) �ֹ� Ƚ���� ����
ǰ�� ���� ������ ���;� �Ѵ�.
1�� 2ȸ, 3�� 2ȸ �ֹ�

��� ��)
*** Korea�Ĵ� ������ ***
��ġ� 2�� 10000��
�δ�� 2�� 14000��
����        24000��

*/

void printBill(int k, int d, int b, int s, int kTotal, int dTotal, int bTotal, int sTotal, int totalPrice, int totalDish) {

	totalPrice += kTotal + dTotal + bTotal + sTotal;
	totalDish += k + d + b + s;
	system("cls");
	puts("�ֹ��� �����մϴ�");
	printf("*** Korea�Ĵ� ������ ***\n");
	if (k != 0) { printf("��ġ�     %d�� %d��\n", k, kTotal); }
	if (d != 0) { printf("�����     %d�� %d��\n", d, dTotal); }
	if (b != 0) { printf("�δ��     %d�� %d��\n", b, bTotal); }
	if (s != 0) { printf("���κ��   %d�� %d��\n", s, sTotal); }
	printf("����         %d�� %d��\n", totalDish, totalPrice);
}

char menuOrder(char meNum) {

	puts("********Korea �Ĵ� ******");
	puts("1. ��ġ�   - 5000��\n2. �����   - 6000��\n3. �δ��   - 7000��\n4. ���κ�� - 8000��\n0. �ֹ� ����\n");
	printf("�ֹ� �ϼ��� : "); 
	return getch();

}

void main() {

char meNum = ' ';
int cntKimchi = 0, cntDanjang = 0, cntBudae = 0, cntSunduboo = 0;
int kimchiTotal = 0, danjangTotal = 0, budaeTotal = 0, sudubooTotal = 0;
int totalPrice = 0, totalDish = 0;
		
while ((meNum = menuOrder(meNum)) != '0') { //menuOrder�Լ��� meNum���ڸ� �Ѱ��־ �޾ƿ� ���� 
											//�� meNum���� ����!! 
											//�� �� ������ '0'�� ��!! 
											//�׷��� (meNum = menuOrder(meNum))�� �Ұ�ȣ�� ����� �Ѵ�!!!
			
			switch (meNum) {
			case '1':
				cntKimchi++;
				kimchiTotal += Kimchi;
				break;
			case '2':
				cntDanjang++;
				danjangTotal += Danjang;
				break;
			case '3':
				cntBudae++;
				budaeTotal += Budae;
				break;
			case '4':
				cntSunduboo++;
				sudubooTotal += Suduboo;
				break;
			}
			system("cls");
			printf("1. ��ġ�     %d�� %d��\n2. �����     %d�� %d��\n3. �δ��     %d�� %d��\n4. ���κ��   %d�� %d��\n",
				cntKimchi, kimchiTotal, cntDanjang, danjangTotal, cntBudae, budaeTotal, cntSunduboo, sudubooTotal);
		}
	printBill(cntKimchi, cntDanjang, cntBudae, cntSunduboo, kimchiTotal, danjangTotal, budaeTotal, sudubooTotal, totalPrice, totalDish);
		

	puts("\n\n���α׷� ����");

}


