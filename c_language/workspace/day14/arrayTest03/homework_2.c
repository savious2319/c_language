#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 5
#define BILL 2000
void inputTenant(int row, int col, int(*p)[5]);
void aptBill(int bill, int row, int col, int(*p)[5]);
int myBill(int floor, int num, int(*p)[5]);
int totalBill(int(*p)[5]);
double floorBill(int floor, int(*p)[5]);
void billCompare(int floor, int num, int(*p)[5]);
/*void main()
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

	while (1) {
		int choice = 0;
		puts("==== KOREA ����Ʈ ������ ����====");
		printf("1. �ڱ� �� ������ ����\n2. ��ü ������ ����ϱ�\n3. ���� ��� ������ ����ϱ�\n4. ������ ���ϱ� :  ������ �� ȣ���� �Է��� �ּ���\n\n ��ȣ�� �������ּ���");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1: printf("���� ȣ���� �Է��ϼ���: ");
				scanf_s("%d %d", &floor, &num);
				printf("%d0%dȣ �̹��� ���� �ݾ��� %d�� �Դϴ�\n", floor, num, myBill(floor, num, arApt));
				break;

		case 2: printf(" KOREA ������� �� %d�� �Դϴ�", 
				totalBill(arApt)); 
				break;

		case 3: printf("���� ������ �����? "); 
				scanf_s("%d", &floor); 
				printf("%d�� ��� ������ : %d��\n", floor, floorBill(floor, arApt)); break;
		case 4: printf("������ ���� ȣ���� �Է��� �ּ���: "); scanf_s("%d %d", &floor, &num); 
				billCompare(floor, num, arApt); break;
		}
	}
}
*/

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
	//printf(" KOREA ������� �� %d�� �Դϴ�", total);
	return sum;
}

double floorBill(int floor, int(*p)[5]) {
	//printf("���� ������\n"); //����ϱ�(�� �� ������ ����� ? 2�� = > 2�� ������� �� 5, 000�� �Դϴ�)
	int total = 0;
	double avgFloor = 0.0;

	for (int i = 0; i < COL; i++)
	{
		avgFloor = (p[floor - 1][i] * BILL) / COL;
	}
	return avgFloor;

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

void billCompare(int floor, int num, int(*p)[5]) {

	double avgFloor = 0.0;
	myBill(floor, num, p);
	totalBill(p);
	floorBill(floor, p);
	
	printf("%d0%dȣ�� ��ü ������ ���� %d�� �����߽��ϴ�.\n", floor, num, myBill(floor, num, p) - totalBill(BILL, ROW, COL, p) / (ROW*COL));
	
	printf("%d0%dȣ�� ��� ���� ������ ���� %d�� �����߽��ϴ�.\n", floor, num, myBill(floor, num, p) - floorBill(floor, p));

	//         103ȣ��
	//            ��ü ������ ���� -10,000�� �����߽��ϴ�
	//		      ���� ������ ���� -3,000�� �����߽��ϴ�
}
void buildApt(int row, int col);
void main() {

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
printf("���ϴ� ����Ʈ ������ �Է��ϼ���: "); scanf_s("%d", &row);
printf("���ϴ� ����Ʈ ȣ���� �Է��ϼ���: "); scanf_s("%d", &col);
buildApt(row, col);
}

void buildApt(int row, int col) {

for (int i = 0; i < row; i++){
for (int j = 0; j < col; j++){
printf("%d0%dȣ ", i+1, j+1);

	}
puts("");
}

}

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

