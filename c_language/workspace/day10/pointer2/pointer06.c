#include <stdio.h>

void inputData(int *pAge) {
	//*pAge = 20;
	printf("�� ���̼���? "); scanf("%d", pAge);
	// scanf("%d", &pAge); pAge�� �ּ� ���� "�����ͺ���"��. �̹� �ּҸ� ���Թޱ�� �Ű������� �����߱� ������...
	//&�� ������ �ʴ´�.
	//������, pAge�� ����Ű�� �ִ� �ּҴ� age�� �����Ǳ� ������...
	//age�� ���� �Է°��� �۾��ؾ� �Ѵ�. �� &age�� pAge�� ���� �ֱ� ������
	//scanf("%d", pAge)�� age�� �ּҰ��� ��ü�ؼ� ���� ���̴�!
}

void changeData(int *pData) {
	 *pData = 99999;
	//pData = (int *)99999; //int�� �ּҰ� �ڷ��� ���� ����ȯ
}
void main() {

	int age = -1; //���� -1�̸� 0�� �����ͷ� ���� ��ų �� �ֱ⶧����

	printf("input() ���� �� : %d��\n", age);
	if (age < 0) {
		
		inputData(&age); //���ϵ� ����.. �Լ��� ȣ���ߴµ�,, age�� ���� ����ȴ�??
	}
	printf("input() ���� �� : %d��\n", age);
	
	changeData(&age);
	printf("changeData() ���� �� age�� �� : %d��\n", age); //9999�� ���;� �Ѵ�
}