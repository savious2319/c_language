#include<stdio.h>
/*
	call by value

	void fct(�Ű�����){

	}

	void fctByPointer(int *pAge){
		printf("pAge�� �ּҰ� : %d\n", pAge);

	}

	main(){
		int age = -1;
		fct(age);
		fctByPointer(&��); //�ּҸ� ���� �� �ִ�. call by address(pointer)
	}
*/
void fctP(int *pAge) {
	*pAge = 99; //pAge ������ age�� �ּҰ��� ���� �ִ�.
			    //���� age�� ������� *������ ���� age�� ������ ����Ű�� �ؾ��Ѵ�.
			    //�� ��, 99��� �����͸� ���Խ�Ű��,
			    // age��� ������ ��ġ�� ���� 99�� �����ϰ� �ȴ�.
			    // �ᱹ �����͸� ����ϸ�, Ÿ �Լ��� ���������� ����� �� �ִ�!
			    //
}

void main() {

	int age = -1;

	fctP(&age);
	printf("fctP() ���� �� age �� : %d��\n", age);
}