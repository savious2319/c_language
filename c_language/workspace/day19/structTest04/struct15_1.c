#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*


* ���� ���� vs ���� ����


*/
typedef struct tagFriend {
	char *name;		
	int age;		
	double ki;		

}tF;
void main() {

	
	tF hgd = { NULL, 29, 178.1 }; //hgd ����� name�� �����Ҵ� ���� ����
	tF cpyHgd; 

			  
	hgd.name = (char *)malloc(100);
	strcpy(hgd.name, "ȫ�浿");

	//���� ���� ����
	cpyHgd = hgd;   //�⺻ �ڷ����� ���� �ִ� ������� ������ ����ü������ ������ ����!

	//���� ���� //�����͸���������� �ٽ� ���� �Ҵ��� �� �� ��, ���ڿ��� �����Ű��!
	//cpyHgd.name ���� �����Ҵ� (������ : hgd�� name ���ڿ��� ���� ������ �ľ�)
	//���ڿ��� ���ڰ��� �ľ� string length : strlen(���ڿ�)
	//strlen(���ڿ�) : \0���� ������ ""�ȿ� �ִ� ������ ������ ������ �ش�.
	//strlen("Korea"); <---- 5�� �����Ѵ�!
	//"Korea"�� �ش��ϴ� ���ڿ� �����迭�� å���Ϸ���...
	//strlen("Korea") + 1	(������ + 1�� NULL���� ������ ����� ����Ѵ�)
	cpyHgd.name = (char *)malloc(strlen(hgd.name) + 1);
	strcpy(cpyHgd.name, hgd.name);
	//     ~~~~��,  ~~~~~�� �����ض�

	//���
	printf("%s  %d��  %.1fcm\n", hgd.name, hgd.age, hgd.ki);
	printf("(����) %s  %d��  %.1fcm\n", cpyHgd.name, cpyHgd.age, cpyHgd.ki);

	//�޸� ����	free_alloc(����ü�ּ� ������)
	free(cpyHgd.name);
	//free(hgd.name);  // <---- cpyHgd �� �̹� �������� ������, hgd.name�� free�� �� �� ���� �ȴ�! "����"
	free(hgd.name);
	// ���� ������ �Ѱ�!!!!
}