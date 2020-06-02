#include <stdio.h>
#include <Windows.h>
#define ROW 4
#define COL 5
#define BILL 2000
void inputTenant(int(*p)[5]);
void aptBill(int(*p)[5]);
int myBill(int floor, int num, int(*p)[5]);
int totalBill(int(*p)[5]);
int floorBill(int floor, int(*p)[5]);
void billCompare(int floor, int num, int(*p)[5]);
void main()
{
	//��1)
	// korea ����Ʈ�� ������� �Ѵ�.
	// 4��, 5ȣ�Ǳ��� �ִ�.
	// �� ȣ�ǿ� ���ֹ��� �� �����̴�.

	// ���ֹ��� ���ֹ� ����ŭ ȣ�Ǹ��� ������ ���� �Ѵ�.
	// ���� ��� 103ȣ ���ֹ� : 4��  �̷��� �Է��ϸ�
	// 4����� ������ ����ؾ� �Ѵ�.
	// ������� 1��� 2,000�� �̴�.

	// �� ȣ�Ǹ��� ���ֹ��� �Է¹ް�
	//     ���� ��¹��� �޾ƾ� �� ������ ȣ�Ǹ��� ����� �ּ��� 
	//    (���ڰ� ����� �ּ���, main �Լ��ܿ� �ּ� �Լ� 1���� ����� �ּ���!)
	//
	//          [  KOREA ����Ʈ ������ ���� ]
	//      101ȣ(15)  102ȣ(20)	     103ȣ      104ȣ
	//      30,000��   40,000��      20,000��   6,000��
	int arApt[ROW][COL] = { 0 };
	//�Է¹޴� ����
	int floor = 0;
	//�Է¹޴� ȣ��
	int num = 0;
	inputTenant(arApt);
	aptBill(arApt);

	while (1) {
		int choice = 0;
		char exit = ' ';
		puts("==== KOREA ����Ʈ ������ ����====");
		printf("1. �ڱ� �� ������ ����\n2. ��ü ������ ����ϱ�\n3. ���� ��� ������ ����ϱ�\n4. ������ ���ϱ� :  ������ �� ȣ���� �Է��� �ּ���\n\n��ȣ�� �������ּ��� :");
		scanf("%d", &choice);

		switch (choice) {
		case 1: printf("���� ȣ���� �Է��ϼ���: "); scanf("%d %d", &floor, &num);
			printf("%d0%dȣ �̹��� ���� �ݾ��� %d�� �Դϴ�\n\n", floor, num, myBill(floor, num, arApt)); break;

		case 2: printf("KOREA ������� �� %d�� �Դϴ�\n\n", totalBill(arApt)); break;

		case 3: printf("���� ������ �����? "); scanf("%d", &floor);
			floorBill(floor, arApt);
			printf("%d�� ��� ������ : %d��\n\n", floor, floorBill(floor, arApt)); break;
		case 4: printf("������ ���� ȣ���� �Է��� �ּ���: "); scanf("%d %d", &floor, &num);
			billCompare(floor, num, arApt);
		}
		getchar();
		puts("");
		puts("------------------------------------");
		puts("�ٽ� ��ȸ�Ͻ÷��� �ƹ� Ű�� �����ּ���.");
		printf("����� q�� �����ּ��� : ");
		scanf("%c", &exit);
		if (exit == 'q') break;
		//���ֹ� ������ ǥ �ٽ� ���
		aptBill(arApt);
	}//end while
	puts("���α׷��� �����մϴ�.");
	puts("�̿����ּż� �����մϴ�.");
}
void inputTenant(int(*p)[5]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d0%d�� ���ֹ� ���� �Է��ϼ��� : ", i + 1, j + 1);
			scanf("%d", &p[i][j]);
		}
	}
}
void aptBill(int(*p)[5]) {
	system("cls");
	int i = 0, j = 0, total = 0;
	puts("[ KOREA ����Ʈ ������ ���� ]");
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%d0%dȣ(%d��) ", i + 1, j + 1, p[i][j]);
			total = BILL * p[i][j];

			printf("%d��\t", total);
		}
		puts("");
	}
	puts("");
}

int myBill(int floor, int num, int(*p)[5]) {

	return p[floor - 1][num - 1] * BILL;
}

int totalBill(int(*p)[5]) {
	int total = 0;
	int sum = 0;
	//printf("%d�� �Դϴ�\n", p[0][0] * bill);
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			total += p[i][j];
			sum = total * BILL;
		}
	}
	return sum;
}

int floorBill(int floor, int(*p)[5]) {
	int total = 0;
	for (int i = 0; i < COL; i++) {
		total += p[floor - 1][i] * BILL;
	}
	return total / COL;
}

void billCompare(int floor, int num, int(*p)[5]) {

	printf("�� ������ : %d��\n", myBill(floor, num, p));
	//totalBill(p);
	//floorBill(floor, p);
	printf("%d0%dȣ�� ��ü ��� ������ ���� %d�� �����߽��ϴ�.\n\n", floor, num, myBill(floor, num, p) - (totalBill(p) / (ROW*COL)));
	printf("%d0%dȣ�� ��� ���� ������ ���� %d�� �����߽��ϴ�.\n\n", floor, num,
		myBill(floor, num, p) - floorBill(floor, p));
}
void buildApt(int row, int col);
/*void main() {

//��2)  KOREA ����Ʈ�� ������ �մϴ�.
//     ���� �Լ����� ������ ȣ���� �Է¹޾�
//     ����Ʈ�� ���� ������.  (�ּ� �����Լ��ܿ� ����� �Լ� 1���� ����ؾ� �մϴ�.)
//  ������� �ϴ� ���� : 2
//  ������� �ϴ� ȣ�� : 5
// ��°��
//         ....     ...    ....     ...   .n0nȣ
//         201ȣ   202ȣ   203ȣ    204ȣ  205ȣ
//         101ȣ   102ȣ   103ȣ    104ȣ  105ȣ

int row = 0;
int col = 0;
printf("���ϴ� ����Ʈ ������ �Է��ϼ���: "); scanf("%d", &row);
printf("���ϴ� ����Ʈ ȣ���� �Է��ϼ���: "); scanf("%d", &col);
buildApt(row, col);
}

void buildApt(int row, int col) {

for (int i = 0; i < row; i++){
for (int j = 0; j < col; j++){
printf("%d0%dȣ  ", i+1, j+1);

}
puts("");
}

}*/

//��3)  ������ �Է¹��� KOREA ����Ʈ�� ������ �����ϴ� ���α׷��Դϴ�.


//      ==== KOREA ����Ʈ ������ ���� =====
//     1.  �ڱ� �� ������ ����    (  ���� ȣ���� �Է��� �ּ��� : 1��  3ȣ =>  103ȣ �̹��� ���� �ݾ��� 6,000�� �Դϴ�)
//     2.  ��ü ������ ����ϱ�   (  KOREA ������� �� 324,000�� �Դϴ�)
//     3.  ���� ��� ������ ����ϱ�  ( �� �� ������ �����?  2��  => 2�� ������� �� 5,000�� �Դϴ�)
//	   4.  ������ ���ϱ� : ������ �� ȣ���� �Է��� �ּ���.  ( ���� ȣ���� �Է��� �ּ��� : 1, 3 => 
//         103ȣ��
//            ��ü ������ ���� -10,000�� �����߽��ϴ�
//		      ���� ������ ���� -3,000�� �����߽��ϴ�

//��3-1)   ������ ���� �ο����� �Է��ؼ�   ������ ����� �Ǵ��� ����!
//			���� ���)   4�� 5�� ¥�� ����Ʈ�� ������ٰ� �������� ��,
//			�����ο����� �ʱⰪ���� �־� ������ �ȴ�!
/*
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#define ROW_SIZE 4
#define COL_SIZE 5
#define PRICE 2000
//��1)
// korea ����Ʈ�� ������� �Ѵ�.
// 4��, 5ȣ�Ǳ��� �ִ�.
// �� ȣ�ǿ� ���ֹ��� �� �����̴�.

// ���ֹ��� ���ֹ� ����ŭ ȣ�Ǹ��� ������ ���� �Ѵ�.
// ���� ��� 103ȣ ���ֹ� : 4��  �̷��� �Է��ϸ�
// 4����� ������ ����ؾ� �Ѵ�.
// ������� 1��� 2,000�� �̴�.

// �� ȣ�Ǹ��� ���ֹ��� �Է¹ް�
//     ���� ��¹��� �޾ƾ� �� ������ ȣ�Ǹ��� ����� �ּ���
//    (���ڰ� ����� �ּ���, main �Լ��ܿ� �ּ� �Լ� 1���� ����� �ּ���!)
//
//          [  KOREA ����Ʈ ������ ���� ]
//      101ȣ(15)  102ȣ(20)	     103ȣ      104ȣ
//      30,000��   40,000��      20,000��   6,000��
/*
void inputNum(int row, int col, int(*pAr)[5]);
void totalPrice(int row, int col, int(*pAr)[5]);
void main() {
//��
int row = 4;
//ȣ
int col = 5;
//���ֹ� �� ������ �迭 ����
int arrNum[4][5] = { 0, };
//���ֹ� �� �Է�
inputNum(row, col, arrNum);
puts("");
//��,ȣ �� ���������
totalPrice(row, col, arrNum);
}
//���ֹ� �� ���� �Լ�
void inputNum(int row, int col, int (*pAr)[5]) {
for (int i = 0; i < row; i++) {
printf("%d���� ���ֹ��� �����մϴ�.\n", i + 1);
puts("------------------------------------");
for (int j = 0; j < col; j++) {
printf("%d�� 10%dȣ�� ���ֹ��� �� ���Դϱ�? : ", i + 1, j + 1);
scanf("%d", &pAr[i][j]);
}
puts("------------------------------------");
}
}
//������ ��� �Լ�
void totalPrice(int row,int col, int(*pAr)[5]) {
for (int i = 0; i < row; i++) {
puts("------------------------------------------------------");
for (int j = 0; j < col; j++) {
printf("%d�� 10%dȣ�� ���ֹ� : %d��\t������ : %d��\n", i + 1, j + 1, pAr[i][j], pAr[i][j] * PRICE);
}
puts("------------------------------------------------------");
Sleep(2000);
}
}

//��3)  ������ �Է¹��� KOREA ����Ʈ�� ������ �����ϴ� ���α׷��Դϴ�.
void inputChoice(int *choice);
void callMenu(int choice);
void checkMyPrice(int(*pAr)[COL_SIZE]);
void totalPrice(int(*pAr)[COL_SIZE]);
void comPrice(int(*pAr)[COL_SIZE]);
void maxPrice(int(*pAr)[COL_SIZE]);
void avgPrice(int(*pAr)[COL_SIZE]);
void backMenu();
void main() {
//�޴� ����
int choice = 0;
//��, ȣ ����

//�����ο��� �ʱ�ȭ �迭
int arrNum[ROW_SIZE][COL_SIZE] = {
{ 1,2,3,4,5 },
{ 1,2,3,4,5 },
{ 1,2,3,4,5 },
{ 1,2,3,4,5 }
};
//�޴� ����
inputChoice(&choice);
//�޴� ȣ���ϱ�
callMenu(choice, arrNum);


}
void inputChoice(int *choice) {
for (;;) {
puts("");
puts("\t�������������� KOREA ����Ʈ ������ ���� ��������������");
puts("\t��\t\t\t\t       ��");
puts("\t��   1.  �ڱ� �� ������ ����\t       ��");
puts("\t��\t\t\t\t       ��");
puts("\t��   2.  ��ü ������ ����ϱ�\t       ��");
puts("\t��\t\t\t\t       ��");
puts("\t��   3.  ���� ��� ������ ����ϱ�      ��");
puts("\t��\t\t\t\t       ��");
puts("\t��   4.  ������ ���ϱ�  \t       ��\n\t��   : ������ �� ȣ���� �Է��� �ּ���.  ��");
puts("\t��\t\t\t\t       ��");
puts("\t��   0.  �����ϱ�\t\t       ��");
puts("\t��������������������������������������������������������������������������������");
printf("\t �Է� : ");
scanf("%d", choice);
if (0 <= *choice && *choice <= 4) break;
puts("***** ERROR *****");
puts("�޴��� 1~4�� �߿��� ������ �ּ���.");
puts("����� 0���Դϴ�.");
puts("*********************************");
Sleep(2000);
system("cls");
}
}
void callMenu(int choice, int(*pAr)[COL_SIZE]) {
switch (choice) {
case 1:
checkMyPrice(pAr);
break;
case 2:
totalPrice(pAr);
backMenu();
break;
case 3:
avgPrice(pAr);
break;
case 4:
comPrice(pAr);
break;
case 0:
break;
}
}
void checkMyPrice(int(*pAr)[COL_SIZE]) {
int row = 0;
int col = 0;
char exit = ' ';
for (;;) {
system("cls");
puts("");
puts("\t�������������� ���� �� ������ ���� ��������������");
printf("\t       �� ���Դϱ�?(1 ~ 4��) : ");
scanf("%d", &row);
if (row < 0 || row > 4) {
puts("");
puts("\t   �� ����Ʈ�� 1 ~ 4������ �ֽ��ϴ�.");
puts("\t\t  �ٽ� �Է��ϼ���.");
Sleep(2000);
continue;
}
printf("\t       �� ȣ �Դϱ�?(1 ~ 5ȣ) : ");
scanf("%d", &col);
if (col < 0 || col > 5) {
puts("");
puts("\t   �� ����Ʈ�� 1 ~ 5ȣ���� �ֽ��ϴ�.");
puts("\t\t  �ٽ� �Է��ϼ���.");
Sleep(2000);
continue;
}
else {
puts("\t����������������������������������������������������������������������");

puts("\t  ����������������������������������������������������������");
printf("\t    ������ ���� %d0%dȣ �Դϴ�. \n", row, col);
printf("\t     ������� %5d�� �Դϴ�.    \n", pAr[row - 1][col - 1] * PRICE);
puts("\t  ����������������������������������������������������������");
getchar();
puts("\t�ٽ� ��ȸ�Ͻ÷��� �ƹ� Ű�� �����ּ���.");
printf("\t����� q�� �����ּ��� : ");
scanf("%c", &exit);
if (exit == 'q') break;
system("cls");
}
}//end for
backMenu();
}//end checkMyPrice

void backMenu() {
puts("\t  ��������������������������������������������������������������");
printf("\t  ��    ���� �޴��� �̵��մϴ�.  ��\n");
printf("\t  ��     ��ø� ��ٷ� �ּ���.   ��\n");
puts("\t  ��������������������������������������������������������������");
Sleep(2000);
system("cls");
main();
}//end backMenu

void totalPrice(int(*pAr)[COL_SIZE]) {
int sum = 0;
for (int i = 0; i < ROW_SIZE; i++) {
for (int j = 0; j < COL_SIZE; j++) {
sum += pAr[i][j] * PRICE;
}
}
puts("\t  ����������������������������������������������������������������������");
printf("\t  �� Korea ����Ʈ�� �� �������Դϴ�. ��\n");
printf("\t  ��   �� ������� %5d�� �Դϴ�.  ��\n", sum);
puts("\t  ����������������������������������������������������������������������");
}
void comPrice(int(*pAr)[COL_SIZE]) {
int max = 0;
int row = 0;
int col = 0;
char exit = ' ';
int *rowPri = (int *)malloc(sizeof(int) * ROW_SIZE);
double *rowAvg = (double *)malloc(sizeof(double) * ROW_SIZE);
for (;;) {
system("cls");
puts("");
puts("\t  �������������� ���� �� ������ �� ��������������");
printf("\t         �� ���Դϱ�?(1 ~ 4��) : ");
scanf("%d", &row);
if (row < 0 || row > 4) {
puts("");
puts("\t     �� ����Ʈ�� 1 ~ 4������ �ֽ��ϴ�.");
puts("\t\t    �ٽ� �Է��ϼ���.");
Sleep(2000);
continue;
}
printf("\t         �� ȣ �Դϱ�?(1 ~ 5ȣ) : ");
scanf("%d", &col);
if (col < 0 || col > 5) {
puts("");
puts("\t     �� ����Ʈ�� 1 ~ 5ȣ���� �ֽ��ϴ�.");
puts("\t\t    �ٽ� �Է��ϼ���.");
Sleep(2000);
continue;
}
else {
puts("\t  ����������������������������������������������������������������������");

puts("\t    ��������������������������������������������������������������");
printf("\t    �� ������ ���� %d0%dȣ �Դϴ�. ��\n", row, col);
printf("\t    ��   ������� %5d�� �Դϴ�.  ��\n", pAr[row - 1][col - 1] * PRICE);
puts("\t    ��������������������������������������������������������������");

maxPrice(&max, pAr);
puts("");
puts("\t    ��������������������������������������������������������������");
printf("\t    ��      �ְ� ������ �ݾ׺���  \n", row, col);
printf("\t    ��      %5d�� �����߽��ϴ�.    \n", (max *PRICE) - (pAr[row - 1][col - 1] * PRICE));
puts("\t    ��������������������������������������������������������������");
getchar();
puts("\t  �ٽ� ��ȸ�Ͻ÷��� �ƹ� Ű�� �����ּ���.");
printf("\t  ����� q�� �����ּ��� : ");
scanf("%c", &exit);
if (exit == 'q') break;
system("cls");
}
}//end for
backMenu();
}

void maxPrice(int *max, int(*pAr)[COL_SIZE]) {
for (int i = 0; i < ROW_SIZE; i++) {
for (int j = 0; j < COL_SIZE; j++) {
if (pAr[i][j] < pAr[i][j + 1]) {
*max = pAr[i][j + 1];
}
}
}
printf("\t   �ְ� ������ �ݾ��� %d�� �Դϴ�.", (*max * PRICE));
}

//���� ��� ������
void avgPrice(int(*pAr)[COL_SIZE]) {
for (;;) {
int floor = 0;
int sum = 0;
char exit = ' ';
int i, j;
puts("\t�������������� ���� ��� ������ ���� ��������������");
printf("\t         �� ���Դϱ�?(1 ~ 4��) : ");
scanf("%d", &floor);
for (i = 0; i < COL_SIZE; i++) {
sum += pAr[floor - 1][i] * PRICE;
}
printf("\t\t  %d���� ��� ������ \n\t\t  : %d�� �Դϴ�.\n", floor, sum / COL_SIZE);
puts("        ��������������������������������������������������������������������������");
getchar();
puts("\t�ٽ� ��ȸ�Ͻ÷��� �ƹ� Ű�� �����ּ���.");
printf("\t����� q�� �����ּ��� : ");
scanf("%c", &exit);
if (exit == 'q') break;
system("cls");
}//end for
backMenu();
}

//      ==== KOREA ����Ʈ ������ ���� =====
//     1.  �ڱ� �� ������ ����    (  ���� ȣ���� �Է��� �ּ��� : 1��  3ȣ =>  103ȣ �̹��� ���� �ݾ��� 6,000�� �Դϴ�)
//     2.  ��ü ������ ����ϱ�   (  KOREA ������� �� 324,000�� �Դϴ�)
//     3.  ���� ��� ������ ����ϱ�  ( �� �� ������ �����?  2��  => 2�� ������� �� 5,000�� �Դϴ�)
//	   4.  ������ ���ϱ� : ������ �� ȣ���� �Է��� �ּ���.  ( ���� ȣ���� �Է��� �ּ��� : 1, 3 =>
//         103ȣ��
//            ��ü ������ ���� -10,000�� �����߽��ϴ�
//		      ���� ������ ���� -3,000�� �����߽��ϴ�

//��3-1)   ������ ���� �ο����� �Է��ؼ�   ������ ����� �Ǵ��� ����!
//			���� ���)   4�� 5�� ¥�� ����Ʈ�� ������ٰ� �������� ��,
//			�����ο����� �ʱⰪ���� �־� ������ �ȴ�!


*/
