#include<stdio.h>
// �������� ����

int global; // �ڵ� �ʱ�ȯ �ȴ�

void fct3(); //fct��� ����ܾ�� �Լ���!
            //�Լ��� �Ӹ��θ� "���� ����" �ߴ�
            //"�Լ�����"

extern int global2; // "���� ����"
extern int st_global;
void main() {

	int local = 0; // �ʱ�ȭ ���� ������ �� <=== ���� '����'
	
	printf("�������� global : %d\n", global);

	printf("�������� global : %d\n", local);

	fct3();

	printf("�������� global2 : %d\n", global2);

	printf("�������� st_global : %d\n", st_global);
}


int global2 = 999;