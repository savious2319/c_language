#include <stdio.h>

//����!!!! � ����̳ĸ�...
struct ClassInfo {
	char name[20];
	char number[30];
	double height;
};// ���踦 �Ϸ� �ߴ�!  ����� �������!! Modelling �����͸� �𵨸� �ߴ�. �ٿ��� ���̶�� �Ѵ�. �������� ������ �𵨸� �ߴ�. ��! MVC �� �߿� M�� �ش�!

void main() {

	//�츮�� �̸�, ��ȣ, Ű(�Ҽ��� ���ڸ�)
	//3���� �ִ�!
	struct ClassInfo 
	 bsm = { "�鼺��", "010-3400-5125", 175.7 },
	 ysh = { "����ȣ", "010-5674-5436", 173.7 },
	 pjy = { "������", "010-7865-8765", 177.7 },
	frd1 = { 0 },
	frd2 = { 0 };

	printf("bsm �̸�: %s\t��ȣ: %s\tŰ: %.1fcm\n", bsm.name, bsm.number, bsm.height);
	printf("ysh �̸�: %s\t��ȣ: %s\tŰ: %.1fcm\n", ysh.name, ysh.number, ysh.height);
	printf("pjy �̸�: %s\t��ȣ: %s\tŰ: %.1fcm\n", pjy.name, pjy.number, pjy.height);

	/*printf("�̸��� �Է��ϼ���"); scanf("%s", &bsm.name);
	printf("1�� �л� �̸� : %s\n", bsm.name);*/

	for (int i = 0; i < 2; i++)
	{
	//�Է¹ޱ�
	printf("���л� %d�� ���� ���� �Է�\n", i+1);
	printf("�̸��� �Է��� �ּ��� : "); gets(frd1.name);       // gets() ���ڿ� �޴� �Լ�
	//getchar();
	printf("�ڵ��� ��ȣ�� �Է��� �ּ��� : "); gets(frd1.number);
	printf("Ű�� �Է��� �ּ��� : "); scanf("%lf", &frd1.height);

	//�Է°� ����Ͻ�
	printf("==���л� %d�� ����==\n", i+1);
	printf("frd1 �̸�: %s\t��ȣ: %s\tŰ: %.1fcm\n", frd1.name, frd1.number, frd1.height);

	}



}