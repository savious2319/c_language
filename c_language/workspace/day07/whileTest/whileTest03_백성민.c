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



void main() {

	char meNum = ' ';
	int cntKimchi = 0;
	int cntDanjang = 0;
	int cntBudae = 0;
	int cntSunduboo = 0;
	int totalPrice = 0;
	int totalDish = 0;
	int kimchiTotal = 0;
	int danjangTotal = 0;
	int budaeTotal = 0;
	int sudubooTotal = 0;


	while (1) {
		puts("********Korea �Ĵ� ******");
		puts("1. ��ġ�   - 5000��\n2. �����   - 6000��\n3. �δ��   - 7000��\n4. ���κ�� - 8000��\n0. �ֹ� ����\n");
		printf("1. ��ġ�     %d�� %d��\n2. �����     %d�� %d��\n3. �δ��     %d�� %d��\n4. ���κ��   %d�� %d��\n", cntKimchi, kimchiTotal, cntDanjang, danjangTotal,
			cntBudae, budaeTotal, cntSunduboo, sudubooTotal);
		printf("�ֹ� �ϼ��� : "); meNum = getch(); //scanf("%d", &meNum);
		system("cls");

		switch (meNum) {

		case '1':
			//puts("��ġ�");
			cntKimchi++;
			kimchiTotal += Kimchi;
			//printf("��ġ� %d�� %d��\n", cntKimchi, kimchiTotal);
			break;
		case '2':
			//puts("�����"); 
			cntDanjang++;
			danjangTotal += Danjang;
			//printf("����� %d�� %d��\n", cntDanjang, danjangTotal);
			break;
		case '3':
			//puts("�δ��");
			cntBudae++;
			budaeTotal += Budae;
			//printf("�δ�� %d�� %d��\n", cntBudae, budaeTotal);
			break;
		case '4':
			//puts("���κ��"); 
			cntSunduboo++;
			sudubooTotal += Suduboo;
			//printf("���κ�� %d�� %d��\n", cntSunduboo, sudubooTotal);
			break;

		}
		//totalPrice += kimchiTotal + danjangTotal + budaeTotal + sudubooTotal; //ó������ totalPrice = 0(totalPrice) + 5000(kimchiTotal) �ε�
		//�����Ҷ��� totalPrice = 5000(totalPrice) + 5000(kimchiTotal) ����� ���� ������.
		//totalDish += cntKimchi + cntDanjang + cntBudae + cntSunduboo; // ����������.

		//totalPrice = kimchiTotal + danjangTotal + budaeTotal + sudubooTotal; �̷��� �ϸ� ������ �ȵȴ�.
		//totalDish = cntKimchi + cntDanjang + cntBudae + cntSunduboo;


		if (meNum == '0') {

			totalPrice += kimchiTotal + danjangTotal + budaeTotal + sudubooTotal;
			totalDish += cntKimchi + cntDanjang + cntBudae + cntSunduboo;

			puts("�ֹ��� �����մϴ�");
			printf("*** Korea�Ĵ� ������ ***\n");
			if (cntKimchi != 0) { printf("��ġ�     %d�� %d��\n", cntKimchi, kimchiTotal); }
			if (cntDanjang != 0) { printf("�����     %d�� %d��\n", cntDanjang, danjangTotal); }
			if (cntBudae != 0) { printf("�δ��     %d�� %d��\n", cntBudae, budaeTotal); }
			if (cntSunduboo != 0) { printf("���κ��   %d�� %d��\n", cntSunduboo, sudubooTotal); }
			printf("����         %d�� %d��\n", totalDish, totalPrice);
			break;
		}
	}//end while

	puts("\n\n���α׷� ����");


}