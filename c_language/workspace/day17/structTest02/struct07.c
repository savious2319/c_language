#include "myFriend.h"


typedef unsigned char* U_CHAR_PTR;

FRD inputData(FRD person) { // return �ϴ� Ÿ���̶� �Լ� Ÿ���̶� �¾ƾ� �Ѵ�!!!
	printf("�̸��� �Է��� �ּ��� : "); gets(person.name);       // gets() ���ڿ� �޴� �Լ�
	printf("�ڵ��� ��ȣ�� �Է��� �ּ��� : "); gets(person.number);
	printf("Ű�� �Է��� �ּ��� : "); scanf("%lf", &person.height);
	//getchar();
	puts("");
	return person;
}

void inputDataPtr(FRD *person) {
	//fflush(stdin); //ǥ���Է���ġ�� �ִ� ���۸� �� �о������! : ms�迭�� �����Ϸ��� ����ϴ� ��! ȣȯ�� ������

	getchar();
	printf("�̸��� �Է��� �ּ��� : "); gets(person->name);  //person�� �ּҴ�!     // gets() ���ڿ� �޴� �Լ�
	printf("�ڵ��� ��ȣ�� �Է��� �ּ��� : "); gets(person->number);
	printf("Ű�� �Է��� �ּ��� : "); scanf("%lf", &person->height); // -> �� & ���� ������ �������� ����! person�� ����Ű�� height���� �ּҰ��� �Է��� �޾�!
	puts("");

}
void main() {

	FRD frd1 = { "�鼺��", "01034005125", 176.7 },
		frd2 = { "�̼���", "01034005125", 167.7 },
		frd3 = { "�ڹ���", "01034005125", 167.7 },
		frd4 = { 0 }, frd5 = { 0 };	

	printFriend(frd1);
	//printFriend(frd2);
	//printFriend(frd3);

	frd4 = inputData(frd4); //frd4 Ÿ���� ����ü
	//inputData(frd5);

	inputDataPtr(&frd5);  //Call by pointer
				     //���ڷ� frd5�� �ּҸ� �ѱ���
					 //(�Լ��� �Ű������� �����ͷ� �ް���?)
				     //�Լ� ���ο��� �Ű������� ���ؼ�
					 // scanf()�� ������ �ȴ�! �̶�, 
					 // �Ű�����(�� ����)  ������� ȣ�� (*).  or  ->

	printFriend(frd4); //  �Էµ� �� Ȯ��
	printFriend(frd5);

}