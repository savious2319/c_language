#include <stdio.h>
#include <stdlib.h>
/*
	�ܹ��� (single linked list) : �����ͺ���(�ڱ�����) 1��

	*�ֹ��� (double linked list) : �����ͺ��� 2��




*/
typedef struct List{
	int su;    //�����Ϸ��� ����
	
	//�ڱ����� ����ü
	list *next;
	list *prev;

}list;
void main() {

	//������
	list *pList = NULL;

	//ù��° ���
	pList = (list *)malloc(sizeof(list));
	pList->next = NULL;
	pList->prev = NULL;

	//�ι�° ���
	list *pNew = NULL;
	pNew = (list *)malloc(sizeof(list));
	//ù��°(pList)�� �ι�° ���(pNew)�� ����
	//ù��° ��忡�� �ι�° ���� ����Ű�� �ؾ���
	pList->next = pNew;

	//�ι�° ����� prev �� ù��° ���� �����Ű�� �ȴ�.
	pNew->prev = pList;
	pNew->next = NULL; //�ι�°���� ����°�� ���� �ϴ� ���� ���� �غ����� �ʾ���!

	//����° ��� ����
	//pIns ��� �̸� : insert ������ �ϰڴ�!
	
	// ���Գ�� (����° ���) ������ �����Ѿ� �Ѵ�. �� ������ pNew�� ���� �ִ�.
	// ���Գ���� prev �� pList�� ���� �ִ�.
	// ù��° ���(pList)�� ������ ó���� pNew�� �����״µ�... pIns�� ����Ű�� �ϸ� �ȴ�.
	// �ι�° ���(pNew)�� ������ ���� pList�� �����״µ�, pIns�� ����Ű�� �ϸ� �ȴ�.
	// �� ������� �ϸ� pInst�� pList�� pNew ���̿� ���Ե� �� �ִ�.
	// �� pNew�� pList�� ���� pIns�� next�� prev���� ���� �˷�����Ѵ�(�ȱ׷�, �ּҰ��� ��ǵ� �� �ִ�)
	// ���� pList�� next�� pNew�� prev�� ���� pInst���� ��������!

	//1. pIns ����
	list *pIns = NULL;
	pIns = (list *)malloc(sizeof(list));
	//2. pIns next�� pNew ����
	pIns->next = pNew;
	//3. pIns prev�� pList ����
	pIns->prev = pList;
	//4. pList�� next�� pIns ����
	pList->next = pIns;
	//5. pNew�� prev�� pIns ����
	pNew->prev = pIns;

	free(pIns);
	free(pNew);
	free(pList);


}