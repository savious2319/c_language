#include <stdio.h>
/*
	����ü ����



*/
struct MyType {
	int x;
	int y;
	int z;

};

void main() {

	//p1, p2, p3 ����ü ������ �����,
	//p1 10, 11, 12�� �ʱ�ȭ
	//p2 20, 21, 22�� �ʱ�ȭ
	//p3 30, 31, 32�� �ʱ�ȭ

	//���� ����� ����� ������
	//��) p1�� ��ǥ�� x:10, y:11, z:12
	//    p2...
	//    p3...

	//�ʱ�ȭ ����, ���!!!





	struct MyType2 {    //�Լ��ȿ� ����ü ����
		int x;
		int y;
		int z;
	};

	/*struct MyType p1 = { 111, 10, 12 };
	struct MyType p2 = { 20, 21, 22 };
	struct MyType p3 = { 30, 31, 32 };*/

	struct MyType 
		p1 = { 111, 10, 12 }, 
		p2 = { 20, 21, 22 }, 
		p3 = { 30, 31, 32 };



	printf("p1�� ��ǥ�� x: %d, y: %d, z: %d\n", p1.x, p1.y, p1.z);
	printf("p2�� ��ǥ�� x: %d, y: %d, z: %d\n", p2.x, p2.y, p2.z);
	printf("p3�� ��ǥ�� x: %d, y: %d, z: %d\n", p3.x, p3.y, p3.z);

	struct MyType2 a1 = { 25, 26, 27 };
	struct MyType2 a2 = { 35, 36, 37 };
	struct MyType2 a3 = { 41, 42, 43 };

	printf("a1�� ��ǥ�� x: %d, y: %d, z: %d\n", a1.x, a1.y, a1.z);
	printf("a2�� ��ǥ�� x: %d, y: %d, z: %d\n", a2.x, a2.y, a2.z);
	printf("a3�� ��ǥ�� x: %d, y: %d, z: %d\n", a3.x, a3.y, a3.z);
	

}