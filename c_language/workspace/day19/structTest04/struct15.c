#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*


	* ���� ���� vs ���� ����


*/
typedef struct tagFriend {
	char *name;		//���ڿ��� �Է¹޴µ�, ���� �迭���� ������ ù ����!!
	int age;		//�⺻�ڷ���
	double ki;		//�⺻�ڷ���

}tF;
void main() {

	//���� ����(�� �Ѱ�)
	//����ü �ΰ� ����(A, B)   A�� ��� name�� �����Ҵ�
	// B�� A�� �����͸� �״�� ������
	// A�� name ��� free ����
	// B�� name ����� free ����  <---- ���⼭ ���� �߻�!
	// free(A.name) free(B.name) �ϰ� �Ǹ� ���� ����� �����Ҵ� �ּҸ� �ι� ����� ���� �Ǳ� ������
	// �޸� ������ ���� �߻�!
	tF hgd = { NULL, 29, 178.1 }; //hgd ����� name�� �����Ҵ� ���� ����
	tF cpyHgd; // �����Ⱚ ������!

	//hgd�� name ������� ���ڿ� �����Ҵ� �ޱ�!
	hgd.name = (char *)malloc(100);
	strcpy(hgd.name, "ȫ�浿");

	//���� ���� ����
	cpyHgd = hgd;  

	//���
	printf("%s  %d��  %.1fcm\n", hgd.name, hgd.age, hgd.ki);
	printf("(����) %s  %d��  %.1fcm\n", cpyHgd.name, cpyHgd.age, cpyHgd.ki);

	//�޸� ����	free_alloc(����ü�ּ� ������)
	free(cpyHgd.name); 
	//free(hgd.name);  // <---- cpyHgd �� �̹� �������� ������, hgd.name�� free�� �� �� ���� �ȴ�! "����"
				     // ���� ������ �Ѱ�!!!!
}