#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	�ֹ���

	su
	-  ù��° ��� 100
	-  �ι�° ��� 300
	-  ����   ��� 200

	���
	(���� : pList / �߰� : pNew / ���� : pIns)

	��� �Լ� : void displayList(�������� �����ش�)
				��� ��忡 �ִ� su�� ����� ����!

				displayList(list *pList)
				{

					list *search = pList;

					while(search){
						printf("%d\n", search->??);
						//�ּҸ� �˻��ؼ� (next�� ���� �ִ� ���� )NULL�� ���ö����� search���� ��� ���Խ��� ����!
						//������ ����� next�� NULL�� ���� �ֱ� ������!
						//while������ �ڵ����� break�Ǹ鼭 Ż�� �� �� �ְ� �ȴ�.
					}
				
				}


*/
typedef struct List {
	int su;    //�����Ϸ��� ����

			   //�ڱ����� ����ü
	//struct check *next;  //Ÿ���� ��������̱⶧���� strcut�� �ʿ��ϴ�
	//struct check *prev;
	struct List *next; //list ���ǵǱ����� ����ü �ȿ��� ��������� ����ϱ� ���ؼ��� �տ� struct�� �ٿ��� �Ѵ�.
	struct List *prev;

}list;
void displayList(list *pList) {
	list *search = pList;

	while (search) {

		//printf("pList : %d pNew : %d pIns: %d\n", search->su);
		printf("���� (su) : %d", search->su);  
		search = search->next;  //������ ��尡 ���� �ִ� next�� NULL�� search�� ���Եȴ�.
	
	}
	printf("��� ����\n");
	free(search);


}

void main() {// shift + del : ���� �Ѳ����� ����


	list *pList = NULL;

	//����
	pList = (list *)malloc(sizeof(list));
	pList->next = NULL;
	pList->prev = NULL;
	pList->su = 100;
	puts("����");
	displayList(pList); // �Է°� Ȯ��

	//�߰�
	list *pNew = NULL;
	pNew = (list *)malloc(sizeof(list));

	pList->next = pNew;
	pNew->su = 300;
	puts("�߰�");
	pNew->prev = pList;
	pNew->next = NULL; 
	displayList(pList);

	//����
	list *pIns = NULL;
	pIns = (list *)malloc(sizeof(list));
	pIns->next = pNew;
	pIns->prev = pList;
	pList->next = pIns;
	pNew->prev = pIns;
	pIns->su = 200;
	puts("����");
	
	displayList(pList);

	//���� : pIns�� �����Ѵ�!
	//��� : ����(su) 100   ����(su) 300
	//������ �� ��, pIns�� �޸� ���� �ؾ��Ѵ�.
	//pList�� next�� ��� �����Ѿ� �ұ�?
	//pList�� � ����������� ���Խ��Ѿ� �ұ�?

	pList->next = pNew; // pIns->next;   //������ ��� ����ų�ž�? pNew ��带 ����ų�ž�..
	pNew->prev = pList; // pIns->prev;    //pNew�� ���� �����Ѿ� ����? (pIns�� ����Ű�� �־��µ�...) pList�� �����Ѿ��Ѵ�!

	/*pIns->next = pList;
	pList->next = pNew;     =====> pList->next = pNew;

	pIns->prev = pNew;
	pNew->prev = pList;     =====> pNew->prev = pList;
 	
	*/
	free(pIns);

	puts("����");
	displayList(pList);


	//free(pIns);
	free(pNew);
	free(pList);


}