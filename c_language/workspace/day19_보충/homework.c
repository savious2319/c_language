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
	int idNum;

}tInfo;
typedef struct List {
	tInfo t;
	struct List *next;
	struct List *prev;

}list;
//�޴� �Լ�
void menu(list *pStart, list *new_node, list *current);
//��ü ���� ��� �Լ�
void displayData();
//���� �Է� �Լ�
void inputData(list *pStart, list *new_node, list *current);
//�Էµ� ������ ���� �Լ�
void showData(list *pStart);
//�߰� �Լ�
void newData();
//���� �Լ�
void insertData();
//���� �Լ�
void deleteData();
//���� �Լ�
void updateData();

void main() {

	list *pStart, *new_node, *current;
	pStart = new_node = current = NULL;

	//�޴�
	menu(pStart, new_node, current);

}

void menu(list *pStart, list *new_node, list *current) {
	while (1) {
		int choice = 0;
		puts("0. ��ü ���� ���� ����ϱ�\n1. ���� ���� �Է�\n2. ���� ���� �߰��ϱ�\n3. ���� ���� �����ϱ�\n4. ���� ���� �����ϱ�\n5. ���ϴ� ���� ���� ����\n6. ����\n");
		printf("���ϴ� ��ȣ�� ������ �ּ��� : "); scanf_s("%d", &choice);
		switch (choice) {
		case 0:
		case 1: inputData(pStart, new_node, current); break;
		case 2: newData(pStart); break;
		case 3:
		case 4:
		case 5: showData(pStart);
		default: break;
		}
	}

}

void inputData(list *pStart, list *new_node, list *current) {
	int input = 0;

	printf("�� ���� �����͸� �Է��Ͻðڽ��ϱ�? : "); scanf_s("%d", &input);
	puts("");
	for (int i = 0; i < input; i++) {
		//pStart->next = NULL;
		//pStart->prev = NULL;
		getchar();
		new_node = (list *)malloc(sizeof(list));
		printf("�մ� ID ��ȣ�� %d �Դϴ�\n", i + 1);
		new_node->t.idNum = i + 1;
		printf("%d�� �մ� ���� �������� �Է��ϼ��� : ", i + 1); gets(new_node->t.destination);
		printf("%d�� �մ� ���� �ο����� �Է��ϼ��� : ", i + 1); scanf_s("%d", &new_node->t.tourist);
		printf("%d�� �մ� ���� ��� �Է��ϼ��� : ", i + 1); scanf_s("%d", &new_node->t.cost);
		puts("");
		new_node->next = NULL;
		if (pStart == NULL) {
			pStart = new_node;
			current = new_node;
		}
		else {
			current->next = new_node;
			current = new_node;
		}
	}
}

void showData(list *pStart) {
	//prinf("�ּ� Ȯ�� : %d", pStart);
	while (1) {
		int num = 0;
		printf("�մ� ID ��ȣ�� �Է��ϼ��� : "); scanf_s("%d", &num);
		list *search = pStart;
		for (int i = 0; i < num - 1; i++) {
			search = search->next;
		}

		printf("���� ������ : %s\n", search->t.destination);
		printf("���� �ο��� : %d��\n", search->t.tourist);
		printf("���� ��� : %d��\n", search->t.cost);

	}

}

void newData(list *pStart) {
	int num = 0;
	printf("�߰� �� �մ� ���� �Է��ϼ��� : "); scanf_s("%d", &num);



}