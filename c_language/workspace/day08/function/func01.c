#include<stdio.h>
//�Լ� �����!!!

//���忡 ���� ���� 3���� ��ɴϴ�.
//puts("���� ����");
//puts("�̳��� ����");
//puts("�ᳪ�� ����");

// ���忡 ����! ��� �Լ� ���� ���� 3���� ����� ����
void goMarket();
void goHome();

void main() {

	goMarket(); // 25 -> 11 -> 12 ~ 14 -> 16 -> 25(�Լ� �̸�) returnŸ���� void�̱⶧���� �Լ��̴�

	goHome();

}

void goMarket() {
	puts("���� ����");
	puts("�̳��� ����");
	puts("�ᳪ�� ����");

}

void goHome() {

	puts("���� ���ϴ�");
}
