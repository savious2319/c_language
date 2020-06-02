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
void menu(int cnt, list *pStart, list *new_node, list *current);
//���� �Է� �Լ�
void inputData(int *cnt, list **pStart, list **new_node, list **current);
//��ü ���� ��� �Լ�
void displayAllData(list *pStart, list *current);
//����ڰ� ���ϴ� ���� ��� �Լ�
void displaySelectedData(list *pStart);
//���� �߰� �Լ�
void addData(int *cnt, list **pStart, list **new_node, list **current);
//���� ���� �Լ�
void deleteData(list *new_node, list *current);
//���� ���� �Լ�
void updateData();

void main() {
	int cnt = 0;
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

void menu(int cnt, list *pStart, list *new_node, list *current) {
	while (1) {
		int choice = 0;
		puts("1. ���� ���� �Է��ϱ�\n2. ���� ���� �߰��ϱ�\n3. ���� ���� �����ϱ�\n4. ���� ���� �����ϱ�\n5. ���ϴ� ���� ��������\n6. ��ü ���� ��������\n7. ����");
		printf("���ϴ� ��ȣ�� ������ �ּ��� : "); scanf("%d", &choice);
		if (choice == 7) { break; }
		switch (choice) {
		case 1: inputData(&cnt, &pStart, &new_node, &current); break;
		case 2: addData(&cnt, &pStart, &new_node, &current); break;
		case 3: 
		case 4:
		case 5: displaySelectedData(pStart); break;
		case 6: displayAllData(pStart, current); break;
			
		default: break;
		}
	}

}

void inputData(int *cnt, list **pStart, list **new_node, list **current) {
	int input = 0;

	printf("�� ���� ���� ������ �Է��Ͻðڽ��ϱ�? : "); scanf("%d", &input);
	puts("");
	for (int i = 0; i < input; i++) {
		getchar();
		*new_node = (list *)malloc(sizeof(list));
		printf("������������ ���� ���� ������������\n");
		printf("������ ID ��ȣ : %d\n", ++(*cnt));
		printf("���� �������� �Է��ϼ��� : "); gets((*new_node)->t.destination);
		printf("���� �ο����� �Է��ϼ��� : "); scanf("%d", &(*new_node)->t.tourist);
		printf("���� ��� �Է��ϼ��� : "); scanf("%d", &(*new_node)->t.cost);
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

void addData(int *cnt, list **pStart, list **new_node, list **current) {
	int input = 0;

	printf("�� ���� ������ �� �߰� �Է��Ͻðڽ��ϱ�? : "); scanf("%d", &input);
		
	puts("");
	for (int i = 0; i < input; i++) {
		getchar();
		*new_node = (list *)malloc(sizeof(list));
		printf("������������ ���� ���� ������������\n");
		printf("������ ID ��ȣ : %d\n", ++(*cnt));
		printf("���� �������� �Է��ϼ��� : "); gets((*new_node)->t.destination);
		printf("���� �ο����� �Է��ϼ��� : "); scanf("%d", &(*new_node)->t.tourist);
		printf("���� ��� �Է��ϼ��� : "); scanf("%d", &(*new_node)->t.cost);
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

void update() {


}

void deleteData(list **pStart, list *current) {
	int num = 0;
	printf("�����ϰ� ���� �մ� ID��ȣ�� �Է��� �ּ��� : "); scanf("%d", &num);
	list *remove = NULL;
	current = *pStart;
	for (int i = 0; i < num - 1; i++) {
		current = current->next;

	}
	if (*pStart == remove) {
		pStart = remove->next;
	}
	if (remove->next != NULL) {
		remove->next->prev = remove->prev;
	}

	if (remove->prev != NULL) {
		remove->prev->next = remove->next;
	}
	

	free(remove);
	
}

void displaySelectedData(list *pStart) {
	
	int num = 0;
	printf("�մ� id ��ȣ�� �Է��ϼ��� : "); scanf("%d", &num);
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

void displayAllData(list *pStart, list *current) {
	
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

