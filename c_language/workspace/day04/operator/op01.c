#include<stdio.h>
/*
	** ������ ����
	�ֿ켱 : () [] . ->
	����	  : + -  !  ~  *  &  ()  ++ -- sizeof()
	���  :  * / % + -
	����Ʈ : <<  >>
	���� : <  >  <=  >==  ==  !=
	���� : &  |  ^  &&  ||
	���� : (��1)?(��2) : (��3) -> ?:
	���� : = += -+ *= /= <<== ....
	(�޸�) �� ������ ������, ����� �� ���Ѵ�!

	1. �ֿ켱 ������
	   1) () �Ұ�ȣ ������
	     (1) ���� �켱���� ����
		 (2) �Լ� ȣ�� ������ :  �Լ� ȣ�� �� ��
	   2) [] ���ȣ ������
	     (1) �迭�� �����ϰ� �� ��, �迭�� �� ��Ҹ� ȣ���� ��
		     �迭�� ������ ��, ���ȣ�� ������, �̶��� �����ڰ� �ƴϴ�!
			 ���� ����, �迭�� �� ĭ�� �θ����� �� ���� �������̴�!
	   3) . ��(period) ������
	     (1) ����ü���� ����ü ������� �ϳ��� ��Ī�� �� ���� �������̴�.
	   4) -> ȭ��ǥ ������
	     (1) ����ü���� ��������� �����ͷ� �θ� �� ����ϴ� �������̴�.

		 . �������� : ����ȣ��
		 -> ȭ��ǥ : (�����͸� �̿��ؼ�) ����ȣ��


*/
/*
//1. �Լ� ȣ���ϱ�

//����ڰ� �Լ��� ���� �� �ִ�. <--printf() puts() scanf()
//�׷��� �ʿ信 ���� �츮�� ���� �Լ��� ���� �� �ִ�. : "����� ���� �Լ�"
//����� ��ġ�� ������ϰ� body�� ���̿�..(main�Լ� ���� ����� �ȴ�)
//����� ������ �����Լ� ������� �ڷ��� �Լ��̸� �Ұ�ȣ {} �� �����ȴ�.
int getAdd() // <- �Լ��� ���� �� ����ϴ� ()�� "���� declare" �̶�� �Ѵ�.
{
	return 5 + 3; //<--8�̶�� ������� ������ ���ư�!

}
void main()
{
	//����ڰ� ���� getAdd ��� �Լ��� ȣ�� �� �� �ִ�!!! �̶� ����ϴ� ()�� �������̴�.

	int getSum = getAdd(); //<---getAdd��� �Լ��� �ٳ�Ͷ�!!
					       //�޸𸮿� �ö󰣴� <-- "���� define(=make): �޸𸮿� ������ �ö� ��"
	                      // �Լ��� ���𰮰��� �޸𸮿� �ö��� �ʰ�, 48�� ����ó��, ȣ���� �� �� ��μ�
	                       // "����" �� ���� ��ġ �ּ�ó�� ���ڿ� ������ �ʴ´�!

	printf("getAdd() ȣ�� ��� : %d\n", getSum);


	printf("�� ������ ����� : %d\n", getAdd() + getAdd()); // �����ڰ� 4��
	//printf�� ������Ϸ� ���� �´�

}
*/
/*
//2. �迭 ȣ���ϱ�
void main()
{
	
	
	int number1; // ���� ����(x) -> ���� ����
	int number2;
	int number3;
	
	int number[3]; //�迭 ���� �̶� []�� ���¸� ����� �ִ� �����̴�. int�� ������ ������ ��
	               //��, �����ڰ� �ƴϴ�!
	// [] ������
	number[0] = 100; //�迭�� ù��° 0�̴� //������ 2�� (���ȣ 1���� -> = 2����) �� -> ��
	number[1] = 90; // []�� ��ġ�� ������ ��, �����͸� ���� �ϰ� �ȴ�.
	number[2] = 80; // []�� �ֿ켱 �������̱� ������, ���� �޸𸮸� ����Ű�� ����, �����͸� ���Խ�Ű�� ����!

	int total = number[0] + number[1] + number[2];
	printf("�� �� : %d\n", total);
}
*/
///*
//3. . �� ������ : ����ü���� ��������� ȣ���� �� ����ϴ� ������ "��� ����ȣ�� ������"
//                  �ڹٿ����� ���� ���̴� ������
//                  ����ü����.������� -> ����ü ������ ���� �ִ� ����߿� "�������"�� ȣ���ض�!
// ����ü : {} �ȿ� ���� ������ ��Ƽ� ������ �� �ִ� �ڷ���
//          *�迭�� ������ �Ѱ��� Ÿ�Ը� ����ü�� ������ �� ������, ����ü�� ���� Ÿ���� ��� ������ �� �ִ�.
//          ����ü�� ���� Ÿ���� ���� �� �ֱ� ������ ��뷮 �����͸� ó���ϴµ� �����ϴ�.
//          ����ü �ȿ� ����ü, �迭, �⺻�ڷ��� ���� �� ���� �� �ִ� ����� ���� �ڷ����̴�!
//          ����ü �ȿ� ���� �ڷ����� ���� ��, .�� ����ؼ� �ϳ��� �ϳ��� �ҷ��� �����͸� �ְ� �ȴ�!

//4. -> ȭ��ǥ ������ (arrow ������)
//      ����ü������ �����͸� ����� ��������� ����ų �� ����Ѵ�.
//      (*����ü����).������ >>>>>> �����ϰ� �����ڸ� ���� ����ߴ� �׷���... ȭ��ǥ �����ڷ� ǥ���� �� �ִ�.
//      ����ü���� -> ������� (���߿� ����ü���� �ٽ� ������ ����!)

// ����ü �����
struct Point{ // <---int, double, char, float �� �⺻ �ڷ���, Point�� ���� ���� �ڷ���!!
	int _x;  //�������, x�� y�� �������.
	int _y;
};
void main()
{
	int x = 10; //�������� local variable
	int y = 20;

	printf("���� ��ǥ>> x:%d\ty:%d\n", x, y);

	//���� ���� ����ü�ε� ǥ���� ����!
	//����ü �ڷ��� + ����; �ڷ���(struct Point) + ����(here)
	struct Point here;

	//here �� ��������!! �׷���,  here �ȿ��� here�� �����ϴ� ������� ����ִ�~
	//�� ������� ��� ������� �θ���,, �� ��� ���� �߿� �ϳ��� ��Ī�ؾ� �����͸� ���� ��ų �� �ִ�~
	//������� �ϳ��� ��Ī�� �� ���� �����ڰ� �ٷ� . �� �������̴�!!!
	here._x = 100;
	here._y = 200;

	printf("����ü ��������� ��� ���� ��ǥ>> x:%d\ty:%d\n", here._x, here._y);
	
}
//*/





