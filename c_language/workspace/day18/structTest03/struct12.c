#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#pragma warning (disable :  4996)
typedef struct Profile {

	char _name[20];
	int _age;
	double _height;

}Profile, Prof ;

void main() {

	Prof myFrd = { 0 };
	Prof *p = &myFrd;

	// -> ȭ��ǥ �����ڸ� �̿��ؼ� ������ ������ �Է��� ������

	// ȭ��ǥ �����ڸ� �̿��ؼ� ����� ������

	/*printf("�̸��� �Է��ϼ��� : "); gets(p->_name); 
	printf("���̸� �Է��ϼ��� : "); scanf("%d", &p->_age);
	printf("Ű�� �Է��ϼ���(�Ҽ��� ���ڸ�) : "); scanf("%lf", &p->_height);

	printf("�̸� : %s\n", p->_name);
	printf("���� : %d��\n", p->_age);
	printf("Ű : %.1fcm\n", p->_height);*/


	//ģ������ �Է¹ް� ģ�� ����ŭ �����͸� �Է¹޾� ������
	int num = 0;
	Prof *pFrd = NULL; //���� �Ҵ� �޴� ������ ����
	printf("ģ���� �Է� : "); scanf("%d", &num);

	//���� �Ҵ� �ޱ�
	pFrd = (Prof *)malloc(num * sizeof(Prof));
	

	//������ �Է� �ϱ�
	for (int i = 0; i < num; i++){
		getchar();
		printf("%d�� ģ�� �̸��� �Է��ϼ��� : ", i+1); gets((pFrd+i)->_name);  //pFrd[i]->_name : pFrd[i]�� �̹� �ּҿ� ����� ��
																			  // -> : �ּҷ� ����!
																			 //�� _name���� -> ����°� ���� �ȵǼ� ����!
																			//pFrd[i] == *(pFrd +i)  //  pFrd[i]->_name == pFrd[i]._name
																			// *pFrd[i] == *(*(pFrd + i))
																		//���� pFrd[i]._name�� �ϰ� ������ (*(pFrd + i))._name���� �ؾ��Ѵ�. 
		printf("%d�� ģ�� ���̸� �Է��ϼ��� : ", i + 1); scanf("%d", &(pFrd + i)->_age);
		printf("%d�� ģ�� Ű�� �Է��ϼ���(�Ҽ��� ���ڸ�) : ", i + 1); scanf("%lf", &(pFrd + i)->_height);

	}
	puts("");
	//������ ����ϱ�
	for (int i = 0; i < num; i++) {		
		
		printf("%d�� ģ�� �̸� : %s\n", i + 1, pFrd[i]._name); // (pFrd + i)->_name; // %s�� ���ڿ� �ּҰ��� ������ش�
		printf("%d�� ģ�� ���� : %d\n", i + 1, pFrd[i]._age); // (*(pFrd+i))._age == (pFrd + i)->_age
		printf("%d�� ģ�� Ű : %.1f\n", i + 1, (pFrd + i)->_height);

		//pFrd[i]._name		==		(*(pFrd + i))._name			==		(pFrd + i)->_name		
		//pFrd[i]._age		==		(*(pFrd + i))._age			==		(pFrd + i)->_age
		//pFrd[i]._height	==		(*(pFrd + i))._height		==		(pFrd + i)->_height

	}
	//�޸� �����ϱ�
	free(pFrd);


}