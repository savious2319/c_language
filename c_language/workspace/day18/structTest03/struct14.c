#include <stdio.h>
/*
	����ü ���� - �ڱ�����(������) ����ü
		- ����ü ��������� �ڽ��� ������ ������ ����Ǿ� �ִ� ����ü


*/
typedef struct Simple {
	int age; //����!
	//struct Simple sim; // ���� �Ǵ� ����!
	struct Simple *pM;   //pM�� �ڱ�Ÿ���� ������ �����̴�!
}Simple;
void main() {

	Simple sim;
	Simple sim2;

	sim.age = 10;
	sim2.age = 20;

	sim.pM = &sim2;  //�����Ű�� �ʹ� -> sim�� pM����!!
  
	//�ּҰ� ����� �ϸ鼭 ���� ����
	//1. sim.pM �� ���� �ִ� ���� ������ ���� sim2�� �ּҰ�(&sim2) �̴�!
	//2. sim2�� pM ���� ���� ������ �ּҰ��� ��� �ִ�.
	sim2.pM = NULL; // �ε� / ����Ʈ�� ������
	printf("sim.pM �ּҰ� : %d\n", sim.pM);
	printf("sim.pM �ּҰ� : %d\n", &sim2);


}