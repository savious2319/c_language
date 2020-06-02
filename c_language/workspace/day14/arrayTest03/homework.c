#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 5
#define BILL 2000
void inputTenant(int row, int col, int(*p)[5]);
void aptBill(int bill, int row, int col, int(*p)[5]);
void myBill(int bill, int row, int col, int(*p)[5]);
int totalBill(int bill, int row, int col, int(*p)[5]);
void floorBill(int bill, int row, int col, int(*p)[5]);
void billCompare(int bill, int row, int col, int(*p)[5]);
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
	int bill = 2000;
	int arApt[ROW][COL] = { 0 };
	int row = sizeof(arApt) / sizeof(arApt[0]);
	int col = sizeof(arApt[0]) / sizeof(arApt[0][0]);

	//�Է¹޴� ����
	int floor = 0;
	//�Է¹޴� ȣ��
	int num = 0;

	inputTenant(arApt);
	aptBill(bill, row, col, arApt);

	while (1) {
		int choice = 0;
		puts("==== KOREA ����Ʈ ������ ����====");
		printf("1. �ڱ� �� ������ ����\n2. ��ü ������ ����ϱ�\n3. ���� ��� ������ ����ϱ�\n4. ������ ���ϱ� :  ������ �� ȣ���� �Է��� �ּ���\n\n ��ȣ�� �������ּ���");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1: printf("���� ȣ���� �Է��ϼ���: "); 
			scanf_s("%d %d", &floor, &num); 
			myBill(floor,num, arApt); break;
		case 2: printf(" KOREA ������� �� %d�� �Դϴ�", totalBill(bill, row, col, arApt)); break;
		case 3: floorBill(bill, row, col, arApt); break;
		case 4: billCompare(bill, row, col, arApt); break;
		}
	}
}
void inputTenant(int(*p)[5]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d0%d�� ���ֹ� ���� �Է��ϼ��� : ", i + 1, j + 1);
			scanf_s("%d", &p[i][j]);
		}
	}
}
void aptBill(int bill, int row, int col, int(*p)[5]) {
	system("cls");
	int i = 0, j = 0;
	puts("[ KOREA ����Ʈ ������ ���� ]");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d0%dȣ(%d��) ", i + 1, j + 1, p[i][j]);
			bill *= p[i][j];
			printf("%d��\t", bill);
			bill = 2000;
		}
		puts("");
	}
}

void myBill(int(*p)[5]) {
	int floor = 0;
	int num = 0;
	printf("%d\n", p[0][0]);
	printf("���� ȣ���� �Է��ϼ���: "); scanf_s("%d %d", &floor, &num);

	printf("%d0%dȣ �̹��� ���� �ݾ��� %d�� �Դϴ�\n", floor, num, p[floor - 1][num - 1] * BILL);


}

int totalBill(int bill, int row, int col, int(*p)[5]) {
	int total = 0;
	//printf("%d�� �Դϴ�\n", p[0][0] * bill);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			bill *= p[i][j];
			total += bill;
			bill = 2000;
		}

	}
	//printf(" KOREA ������� �� %d�� �Դϴ�", total);
	return total;
}

void floorBill(int bill, int row, int col, int(*p)[5]) {
	printf("���� ������\n"); //����ϱ�(�� �� ������ ����� ? 2�� = > 2�� ������� �� 5, 000�� �Դϴ�)
	int floor = 0;
	int total = 0;
	double avgFloor = 0.0;
	printf("���� ������ �����? "); scanf_s("%d", &floor);

	for (int i = 0; i < col; i++)
	{
		avgFloor = (p[floor - 1][i] * bill) / col;
	}
	printf("%d�� ��� ������ : %d��\n", floor, avgFloor);

	//int *avgFloor = (int *)malloc(floor * sizeof(int));
	/*switch (floor) {
	case 1: for (int i = 0; i < 1; i++) {
		avgFloor[i] = 0;
		for (int j = 0; j < col; j++) {
			avgFloor[i] += (p[i][j] * bill);
		}
		printf("avgFloor[%d] : %d\n", i, avgFloor[i]);
		total += avgFloor[i];
	}

			printf("%d�� ��� ������� %.2f�Դϴ�\n", floor, (double)total / col);
			break;
	case 2:for (int i = 1; i < 2; i++) {
		avgFloor[i] = 0;
		for (int j = 0; j < col; j++) {
			avgFloor[i] += (p[i][j] * bill);
		}
		printf("avgFloor[%d] : %d\n", i, avgFloor[i]);
		total += avgFloor[i];
	}

		   printf("%d�� ��� ������� %.2f�Դϴ�\n", floor, (double)total / col);
		   break;
	case 3:for (int i = 2; i < 3; i++) {
		avgFloor[i] = 0;
		for (int j = 0; j < col; j++) {
			avgFloor[i] += (p[i][j] * bill);
		}
		printf("avgFloor[%d] : %d\n", i, avgFloor[i]);
		total += avgFloor[i];
	}

		   printf("%d�� ��� ������� %.2f�Դϴ�\n", floor, (double)total / col);
		   break;
	case 4:for (int i = 3; i < 4; i++) {
		avgFloor[i] = 0;
		for (int j = 0; j < col; j++) {
			avgFloor[i] += (p[i][j] * bill);
		}
		printf("avgFloor[%d] : %d\n", i, avgFloor[i]);
		total += avgFloor[i];
	}

		   printf("%d�� ��� ������� %.2f�Դϴ�\n", floor, (double)total / col);
		   break;
	default: break;
	}*/
}

void billCompare(int bill, int row, int col, int(*p)[5]) {
	int floor = 0;
	int num = 0;
	int total = 0;
	double avgFloor = 0.0;
	totalBill(bill, row, col, p);
	printf("������ ���� ȣ���� �Է��� �ּ���: "); scanf_s("%d %d", &floor, &num);
	printf("%d0%dȣ�� ��ü ������ ���� %d�� �����߽��ϴ�.\n",floor, num, (p[floor - 1][num - 1] * bill) - totalBill(bill, row, col, p) / (row*col));
	for (int i = 0; i < col; i++)
	{
		total += (p[floor - 1][i]) * BILL;
	}
	avgFloor = total / COL;

	printf("%d0%dȣ�� ��� ���� ������ ���� %d�� �����߽��ϴ�.\n", floor, num, (p[floor - 1][num - 1] * bill) - avgFloor);

	//         103ȣ��
	//            ��ü ������ ���� -10,000�� �����߽��ϴ�
	//		      ���� ������ ���� -3,000�� �����߽��ϴ�
}
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
//int *row = (int *)malloc(row * sizeof(int));
int *col = (int *)malloc(col * sizeof(int));

for (int i = 0; i < row; i++){
for (int j = 0; j < col; j++){
printf("����Ʈ ȣ�� �Է�: ");
scanf("%d", &col);
}
}
for (int i = 0; i < row; i++){
for (int j = 0; j < col; j++){
printf("%dȣ  ", col[i][j]);
}
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

