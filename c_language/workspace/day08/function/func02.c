#include<stdio.h>
void goHome();  //���� ����

void goMarket() {
	puts("���� ����");
	puts("�̳��� ����");
	puts("�ᳪ�� ����");
	goHome();
}
void goHome() {

	//goMarket();
	puts("���� ���ϴ�");
	//goMarket();
	//�ڱ� ������ ȣ���� �� �ִ� : "��� ȣ��" : �ҽ����� -> �޸� ȿ���� ��������.
	//                            ���ȣ�⿡���� �Լ��� �����ϴ� ����� �ݵ�� �ʿ��ϴ�!
}

void main() {

	goMarket(); // ȣ��� -> �ٸ� �Լ������� ȣ���� �� �ִ�.

	//goHome();

}