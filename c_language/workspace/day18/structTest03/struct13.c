#include<stdio.h>
//��ø ����ü
/*
	
	����ü �ȿ� ����ü ��������� ���� �ִ�.
	
*/

// ��ǥ(��), ������
struct Point{
	int _x;
	int _y;

};

typedef struct Circle {
	struct Point p; //����ü �ȿ� ����ü����� ����ִ�!
	double radius;


} Circle;

void printData(int length, Circle *pWon);
void main(){

	//�ʱ�ȭ -> ���
	//10, 20, ������ 5.6
	//Circle won = { 10, 20, 5.6 };
	//Circle won2 = { {10,20}, 5.6 };
	//Circle won3 = { {10,}, 5.6 };   // y ����� �ڵ��ʱ�ȭ �ȴ�
	//Circle won4 = { 10,20 };  // radius�� 0.0 ���� �ʱ�ȭ�� �ȴ�

	Circle won[4] = {
		{ 10, 20, 5.6 },
		{ {10, 20}, 5.6 },
		{ { 10, }, 5.6 },
		{ 10,20 }

	};
	int length = sizeof(won) / sizeof(won[0]);
	printData(length, won);
}
	//������ �����͸� ����� ������!

void printData(int length, Circle *pWon) {
		for (int i = 0; i < 4; i++) {


			printf("x : %d��\n", pWon[i].p._x);
			printf("y : %d��\n", pWon[i].p._y);
			printf("������ : %.1fcm\n", pWon[i].radius);

		}
	}