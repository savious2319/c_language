#include <stdio.h>

struct MyClass {
	int bun;
	char name[20]; //�̸�
	char gender;   //���� m   ���� f


};
void main() {

	struct MyClass bh = { 0 };

	//�Է� �ް�
	printf("��ȣ�� �Է��ϼ��� : "); scanf("%d", &bh.bun); getchar(); // scanf�� ������������ �Է¹ޱ⶧����() getchar();�� ���Ͱ��� ó���ؾ���!
	printf("�̸��� �Է��ϼ��� : "); gets(bh.name);  //gets()���� �Է��� ���Ͱ��� scanf�� ������ ��ġ���ʴ´�!
	//gets(bh.name); // ���ڿ��� �Է��� �Ŀ�, '����=\n'�� ���ۿ� ���´�.
	           // �ؿ� �ٿ��� gender �� ���������� �Է��ϴ� �Ŷ�, ���Ͱ� gender�� ���� �ȴ�.
	           // ���� getchar() ������ ���Ͱ��� ó������!
			  // �� ���ڿ� scanf�� �����̳� ������������ �Է¹޴´�.
	          // ������ �ִ� ���ڿ� �Է½� gets()�� ����ϵ��� ����!
	printf("������ �Է��ϼ���(����:m//����:f) : "); scanf("%c", &bh.gender);
	

	// (�Է�) ���� (�Է�) ����  %c�� �Է��� ������ ���Ͱ� ���� ������. 


	//����ϱ�
	printf("1���л� ��ȣ: %d\t�̸�: %s\t����: %c\n", bh.bun, bh.name, bh.gender);
}