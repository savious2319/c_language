#include <stdio.h>
/*
	������ ����(������ �ڷ����� Ư¡)

*/
void main()
{
	int age = 10;
	int *pAge = 0;
	pAge = &age;  //age�� �ּҸ� ���ض�!(??������) -> pAge�� ���Խ�Ű��!
	//age�� 4byte¥�� ������ �����̴�!
	//�׷� pAge�� �� byte¥�� �����ϱ�?
	printf("pAge�� ũ��:%dbyte pAge�� ����Ű�� �ִ� �ּҰ� : %d����\n", sizeof(pAge), pAge);

	char ch = 'A';
	char *pCh = &ch;	
	//pCh�� �� byte¥�� �����ϱ�?
	printf("pCh�� ũ��:%dbyte pCh�� ����Ű�� �ִ� �ּҰ� : %d����\n", sizeof(pCh), pCh);


	double pi = 3.14;
	double *pPi = &pi;
	printf("pPi�� ũ��:%dbyte pPi�� ����Ű�� �ִ� �ּҰ� : %d����\n", sizeof(double*), pPi);

	
	int a, b, c = 0;
	printf("&a:%d���� &b:%d���� &c:%d����\n", &a, &b, &c);

	//pCh = &a;
	// �����ͺ����� ���� �� �ڷ����� ���Թ޴� ������ �ڷ����� �����ؾ� �Ѵ�.
	// pCh�� �ִ� �ּҸ� ���� �����͸� ã�ư���(1)
	//	�� �����͸� �ؼ�(2) �ؾ� �ϴµ�,
	//  �̶�(�ؼ��� ��) �� ũ�⸦ �˷��ش�!
}