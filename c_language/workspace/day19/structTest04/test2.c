#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*


	* ���� ���� ����Ʈ�� �̿��ؼ�
	  �߰�, ����, ������ �����մϴ�.

	  �� �ܰ躰�� �Լ��� ����
	  newData() : �߰�
	  insertData() : ����
	  deleteData() : ����
	  updateData() : ����

	  menu(){
			 0. ��ü ���� ����ϱ�
			 1. �����ϱ�
			 2. �����ϱ�
			 3. �����ϱ�
			 4. �����ͺ���showList(��ȣ)
			 5. ����
			 }

	  1. ��� ����ü
	  tytpedef struct List{

		��ø ����ü;

		struct List *next;
		struct List *prev;

	  }list;

	  2. ��ø ����ü : �����ϱ� 1) �л����� or 2)�������� or 3)�������� or 4)��Ÿ... �� �� 1
	  typedef struct ????{
		//�ع�����


	  }????;
	  3. �Լ���
	  void newData();
	  void insertData();
	  void deleteData();
	  void updateData();

	  4. �����Լ�
	  void main(){


	  }
	  �� ������ : struct14_2_�鼺��.c	ȥ�ڼ�...
				   struct14_2_�鼺��_�̼���_....		������
		������ / 0603 / homework // day19 ������ ����

*/
typedef struct TravelInfo {
	char destination[20];
	int tourist;
	int cost;

}tInfo;
typedef struct List {
	int idNum;
	tInfo t;
	struct List *next;
	struct List *prev;

}list;

//�޴� �Լ�
void menu(int *cnt, list *pStart, list *new_node, list *current);
//���� �Է� �Լ�
void inputTrvInfo(int *cnt, list **pStart, list **new_node, list **current);
//���� �߰� �Լ�
void addTrvInfo(int *cnt, list **pStart, list **new_node, list **current);
//���� ���� �Լ�
void updateTrvInfo(list **pStart, list **current);
//���� ���� �Լ�
void insertTrvInfo(list **pStart, list **new_node, list **current);
//���� ���� �Լ�
void deleteTrvInfo(list **pStart, list **current);
//����ڰ� ���ϴ� ���� ��� �Լ�
void displaySelectedTrvInfo(list *pStart);
//��ü ���� ��� �Լ�
void displayAllTrvInfo(list *pStart, list *current);

void main() {
	int *cnt = 0;
	list *pStart, *new_node, *current;
	pStart = new_node = current = NULL;

	//�޴�
	menu(cnt, pStart, new_node, current);

	//�޸� ����
	while (pStart != NULL) {
		list *temp;
		temp = pStart;
		pStart = pStart->next;
		free(temp);
		printf("�޸� ����\n");
	}

}

void menu(int *cnt, list *pStart, list *new_node, list *current) {
	while (1) {
		int choice = 0;
		puts("1. ���� ���� �Է��ϱ�\n2. ���� ���� �߰��ϱ�\n3. ���� ���� �����ϱ�\n4. ���� ���� �����ϱ�\n5. ���� ���� �����ϱ�\n6. ���ϴ� ���� ��������\n7. ��ü ���� ��������\n8. ����");
		printf("���ϴ� ��ȣ�� ������ �ּ��� : "); scanf_s("%d", &choice);
		if (choice == 8) { break; }
		switch (choice) {
		case 1: inputTrvInfo(&cnt, &pStart, &new_node, &current); break;
		case 2: addTrvInfo(&cnt, &pStart, &new_node, &current); break;
		case 3: updateTrvInfo(&pStart, &current); break;
		case 4: insertTrvInfo(&pStart, &new_node, &current); break;
		case 5: deleteTrvInfo(&pStart, &current); break;
		case 6: displaySelectedTrvInfo(pStart); break;
		case 7: displayAllTrvInfo(pStart, current); break;
		default: puts("�߸��� ��ȣ�� �Է��ϼ̽��ϴ�. �޴� 1~8 ����"); break;
		}
	}

}

void inputTrvInfo(int *cnt, list **pStart, list **new_node, list **current) {
	int input = 0;

	printf("�� ���� ���� ������ �Է��Ͻðڽ��ϱ�? : "); scanf_s("%d", &input);
	puts("");
	for (int i = 0; i < input; i++) {
		getchar();
		*new_node = (list *)malloc(sizeof(list));
		printf("������������ ���� ���� ������������\n");
		printf("������ ID ��ȣ : %d\n", ++(*cnt));
		printf("���� �������� �Է��ϼ��� : "); gets((*new_node)->t.destination);
		printf("���� �ο����� �Է��ϼ��� : "); scanf_s("%d", &(*new_node)->t.tourist);
		printf("���� ��� �Է��ϼ��� : "); scanf_s("%d", &(*new_node)->t.cost);
		puts("");
		(*new_node)->next = NULL;
		//(*new_node)->prev = NULL;
		(*new_node)->idNum = *cnt;
		if (*pStart == NULL) {
			*pStart = *new_node;
			*current = *pStart;
		}
		else {
			(*current)->next = *new_node;
			(*new_node)->prev = *current;
			*current = (*new_node);
		}

	}
}

void addTrvInfo(int *cnt, list **pStart, list **new_node, list **current) {
	int input = 0;

	printf("�� ���� ������ �� �߰� �Է��Ͻðڽ��ϱ�? : "); scanf_s("%d", &input);

	puts("");
	for (int i = 0; i < input; i++) {
		getchar();
		*new_node = (list *)malloc(sizeof(list));
		printf("������������ ���� ���� ������������\n");
		printf("������ ID ��ȣ : %d\n", ++(*cnt));
		printf("���� �������� �Է��ϼ��� : "); gets((*new_node)->t.destination);
		printf("���� �ο����� �Է��ϼ��� : "); scanf_s("%d", &(*new_node)->t.tourist);
		printf("���� ��� �Է��ϼ��� : "); scanf_s("%d", &(*new_node)->t.cost);
		puts("");
		(*new_node)->next = NULL;
		//(*new_node)->prev = NULL;
		(*new_node)->idNum = *cnt;
		if (*pStart == NULL) {
			*pStart = *new_node;
			*current = *pStart;
		}
		else {
			while ((*current)->next != NULL) {
				*current = (*current)->next;
			}
			(*current)->next = *new_node;
			(*new_node)->prev = *current;
			*current = (*new_node);
		}

	}
}

void updateTrvInfo(list **pStart, list **current) {
	int updateNum = 0;
	printf("������ �����ϰ� ���� ID��ȣ�� �Է����ּ���? : "); scanf_s("%d", &updateNum); getchar();
	*current = *pStart;
	for (int i = 0; i < updateNum - 1; i++) {
		*current = (*current)->next;
	}
	printf("������������ ���� ���� ������������\n");
	printf("���� �������� �Է��ϼ��� : "); gets((*current)->t.destination);
	printf("���� �ο����� �Է��ϼ��� : "); scanf_s("%d", &(*current)->t.tourist);
	printf("���� ��� �Է��ϼ��� : "); scanf_s("%d", &(*current)->t.cost);
	puts("");

}

void insertTrvInfo(list **pStart, list **new_node, list **current) {
	int insertNum = 0;
	printf("������ �����ϰ� ���� ��ġ�� ���°�ΰ���? : "); scanf_s("%d", &insertNum);
	getchar();
	*current = *pStart;
	*new_node = (list *)malloc(sizeof(list));
	printf("������������ ���� ���� ������������\n");
	printf("���� �������� �Է��ϼ��� : "); gets((*new_node)->t.destination);
	printf("���� �ο����� �Է��ϼ��� : "); scanf_s("%d", &(*new_node)->t.tourist);
	printf("���� ��� �Է��ϼ��� : "); scanf_s("%d", &(*new_node)->t.cost);
	puts("");
	for (int i = 0; i < insertNum - 1; i++) {
		*current = (*current)->next;
	}
	//��带 ó���� ������ ��
	if (*pStart == *current) {
		//(*new_node)->idNum = *cnt;
		(*current)->prev = new_node;
		(*new_node)->next = *current;
		*pStart = *new_node;
	}
	else {
		//��带 �߰��� ������ ��
		//(*new_node)->idNum = *cnt;
		(*new_node)->prev = *current;
		(*current)->next->prev = *new_node;
		(*new_node)->next = (*current)->next;
		(*current)->next = *new_node;
	}
	(*new_node)->idNum = insertNum + 1;
	*current = *pStart;
	for (int i = 0; i < insertNum+1; i++) {
		*current = (*current)->next;
		printf("�ٲ� ���� : %d", (*current)->idNum);
	}
	do {
		((*current)->idNum)++;
		printf("�ٲ� ���� : %d", (*current)->idNum);
	} while ((*current)->next != NULL);
		

		
}

void deleteTrvInfo(list **pStart, list **current) {
	int deleteNum = 0;
	printf("�����ϰ� ���� �մ� ID��ȣ�� �Է��� �ּ��� : "); scanf_s("%d", &deleteNum);
	list *remove = NULL;
	*current = *pStart;
	for (int i = 0; i < deleteNum - 1; i++) {
		(*current) = (*current)->next;
	}
	//�� ó�� ����� ��
	if (*pStart == *current) {
		*pStart = (*current)->next;
		free((*current));
	}
	//�� ������ ����� ��
	else if ((*current)->next == NULL) {
		(*current)->prev->next = NULL;
		free((*current));

	}
	//�߰� ����� ��
	else if ((*current)->next != NULL && (*current)->prev != NULL) {

		(*current)->next->prev = (*current)->prev;
		(*current)->prev->next = (*current)->next;
		free((*current));
	}


}

void displaySelectedTrvInfo(list *pStart) {

	int num = 0;
	printf("�մ� id ��ȣ�� �Է��ϼ��� : "); scanf_s("%d", &num);
	list *search = pStart;
	for (int i = 0; i < num - 1; i++) {
		search = search->next;
	}
	printf("������������ %d�� �մ� ���� ���� ������������\n", search->idNum);
	printf("���� ������ : %s\n", search->t.destination);
	printf("���� �ο��� : %d��\n", search->t.tourist);
	printf("���� ��� : %d��\n", search->t.cost);
	puts("");
}

void displayAllTrvInfo(list *pStart, list *current) {

	current = pStart;
	while (current != NULL) {

		printf("������������ %d�� �մ� ���� ���� ������������\n", current->idNum);
		printf("���� ������ : %s\n", current->t.destination);
		printf("���� �ο��� : %d��\n", current->t.tourist);
		printf("���� ��� : %d��\n", current->t.cost);
		puts("");

		current = current->next;

	}
}

