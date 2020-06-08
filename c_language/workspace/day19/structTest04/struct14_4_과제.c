#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
/*
	���� : ����ȣ
	���� : ���Ḯ��Ʈ�� ���� ������� ���α׷�
	���۱Ⱓ : 2020�� 06�� 1�� ~ 06�� 3��
	����� : Visual Studio2015
	�ֿ� ��� : ����ü, ���Ḯ��Ʈ, �Լ�, ������, �����Ҵ�
	�ҽ���� : �޸��忡 ǥ���߽��ϴ�.

	�л� ���� �Է¹޾� �л� ����ŭ�� �����͸� �Է�, ����, ����, �����ϴ� ���α׷��� �ۼ��غ��ҽ��ϴ�.
	�л��� �����͸� �Է¹��� ����ü�� �����ϰ� �� ��� ������ �����߽��ϴ�.
	�׸��� �л����� ���� �Ҵ����� �޸𸮸� �Ҵ�ް�, �� �޸𸮿� �����͸� �����ϴ� ������� �����߽��ϴ�.
	�л��鳢���� �����ʹ�, ���� ���� ����Ʈ�� �̿��� next,prev(�ڱ� ���� ����ü)�� �̿��� �����غ��ҽ��ϴ�.
*/
typedef struct SubScore {
	int kor;	//����
	int eng;	//����
	int mat;	//����
	int sci;	//����
}SubScore;
typedef struct StdInfo {
	int stdNum;				//��ȣ
	char name[10];			//�̸�
	int age;				//����
	char gender;			//����
	char comment[1024];		//�ڸ�Ʈ
	SubScore p;				//����
	struct StdInfo *prev;	//���� ���
	struct StdInfo *next;	//���� ���
}StdInfo;
//���
void showStdInfo(StdInfo **head) {
	system("cls");
	puts("������������������������������������������������������������������������������������������������������������");
	puts("��        �Էµ� �л����� ������ ��� ����մϴ�.     ��");
	puts("������������������������������������������������������������������������������������������������������������");
	puts("����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
	puts("\t�̸�\t����\t����\t����\t����\t����\t����\t�ڸ�Ʈ");
	StdInfo *current = *head;
	while (current != NULL) {
		printf("\t%s\t%d��\t%c\t%2d��\t%2d��\t%2d��\t%2d��\t%s\n", current->name, current->age, toupper(current->gender), current->p.kor, current->p.eng, current->p.mat, current->p.sci, current->comment);
		current = current->next;
	}
	puts("����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
}
//�߰�
void addStdInfo(StdInfo **head) {
	int stdNum = 0;
	system("cls");
	puts("����������������������������������������������������������������������������������������������");
	printf("      �� ���� ������ �߰��Ͻðڽ��ϱ�? : "); scanf("%d", &stdNum); getchar();
	puts("����������������������������������������������������������������������������������������������");

	for (int i = 0; i < stdNum; i++) {
		StdInfo *new_node = (StdInfo *)malloc(sizeof(StdInfo));
		printf("������������������������������  �л� ���� �Է� ������������������������������\n");
		printf("\t�̸��� �Է��ϼ��� : "); gets(new_node->name);
		printf("\t���̸� �Է��ϼ��� : "); scanf("%d", &(new_node->age));	getchar();
		printf("\t������ �Է��ϼ���(��:M/��:F) : "); scanf("%c", &new_node->gender);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.kor);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.eng);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.mat);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.sci); getchar();
		printf("\t�ڸ�Ʈ�� �����ּ��� : "); gets(new_node->comment);
		puts("����������������������������������������������������������������������������������������������");
		new_node->next = NULL;
		new_node->prev = NULL;
		if (*head == NULL) {		//head�� ���
			*head = new_node;
		}
		else {
			StdInfo *current = (*head);
			while (current->next != NULL) {		//������ ��� ã�� -> next�� NULL�� ������ ã��
				current = current->next;
			}
			current->next = new_node;
			new_node->prev = current;
		}//end if
	}//end for
}
//�޴� ����
int selectMenu(int select) {
	puts("������������������������������������������������������");
	printf("��\t  �޴� ����       ��\n");
	puts("������������������������������������������������������");
	printf("��  1. �л� ���� �߰��ϱ�  ��\n");
	printf("��  2. �л� ���� �����ϱ�  ��\n");
	printf("��  3. �л� ���� �����ϱ�  ��\n");
	printf("��  4. �л� ���� �����ϱ�  ��\n");
	printf("��  5. �л� ���� ����ϱ�  ��\n");
	printf("��  0. ���� �ϱ�           ��\n");
	puts("������������������������������������������������������");
	printf("  �Է� : "); scanf("%d", &select);
	return select;
}
//����
void insStdInfo(StdInfo **head) {
	int insStdNum = 0;
	int count = 1;
	puts("����������������������������������������������������������������������������������������������������");
	printf("   �� ��° ��ġ�� �����͸� �����Ͻðڽ��ϱ�? : "); scanf("%d", &insStdNum); getchar();
	puts("����������������������������������������������������������������������������������������������������");
	StdInfo *new_node = (StdInfo *)malloc(sizeof(StdInfo));
	printf("������������������������  �л� ���� ���� ������������������������\n");
	printf("\t�̸��� �Է��ϼ��� : "); gets(new_node->name);
	printf("\t���̸� �Է��ϼ��� : "); scanf("%d", &new_node->age);	getchar();
	printf("\t������ �Է��ϼ���(��:M/��:F) : "); scanf("%c", &new_node->gender);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.kor);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.eng);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.mat);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.sci); getchar();
	printf("\t�ڸ�Ʈ�� �����ּ��� : "); gets(new_node->comment);
	puts("����������������������������������������������������������������������������������");
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL) {
		*head = new_node;
	}
	/*
	���� ������ �ϳ����̶� �߸��ɰ�� ������ �߻��� �� �ֽ��ϴ�.
	���� ������ ������ �����ѵ�, new_node�� �����ؾ� �մϴ�.
	current->next = new_node;
	new_node->prev = current;
	current->next->prev = new_node;
	new_node->next = current->next;
	*/
	else {
		StdInfo *current = *head;
		while (count != insStdNum) {		//������ ��� ã�� -> next�� NULL�� ������ ã��
			current = current->next;
			count++;
		}
		if (current->next == NULL) {
			current->next = new_node;
			new_node->prev = current;
		}
		else {
			current->next->prev = new_node;
			new_node->next = current->next;
			new_node->prev = current;
			current->next = new_node;
		}
	}
	//
	//if (current->prev == NULL && current->next == NULL) {	//������ ��ġ�� ��尡 head�� ���
	//	(current)->next = new_node;
	//	(new_node)->prev = current;
	//}
	//else {
	//		if (current->next == NULL) {							//������ ��ġ�� ��尡 tail�� ���
	//			current->next = new_node;
	//			new_node->prev = current;
	//			new_node->next = NULL;
	//		}
	//		else {													//�׿� 
	//			while (count != insStdNum) {							//������ ��ġ�� ��� ã��
	//				current = current->next;
	//				count++;
	//			}
	//		(current)->next = new_node;
	//		(new_node)->prev = current;
	//		(current)->next->prev = new_node;
	//		(new_node)->next = (current)->next;
	//	}
	//}
}
//����
void delStdInfo(StdInfo **head) {
	int delStdNum = 0;
	int count = 1;
	puts("������������������������������������������������������������������������������������������������������");
	printf("    �� ��° �л��� �����͸� �����Ͻðڽ��ϱ�? : "); scanf("%d", &delStdNum); getchar();
	puts("������������������������������������������������������������������������������������������������������");
	StdInfo *current = *head;
	while (count != delStdNum) {	//������ ��ġ�� ��� ã��
		current = current->next;
		count++;
	}
	if (current->next == NULL && current->prev == NULL) {
		free(current);
		*head = NULL;
		return;
	}
	if (current == *head){			//������ ��尡 head�� ���
		*head = current->next;
	}
	if (current->next != NULL) {	//������ ����� next�� NULL�� �ƴ� ���
		current->next->prev = current->prev;
	}
	else {
		current->prev->next = NULL;
	}
	if (current->prev != NULL) {	//������ ����� prev�� NULL�� �ƴ� ���
		current->prev->next = current->next;
	}
	free(current);
}
//����
void editStdInfo(StdInfo **head) {
	int editStdNum = 0;
	int count = 1;
	printf("�� ��° ��ġ�� �����͸� �����Ͻðڽ��ϱ�? : "); scanf("%d", &editStdNum); getchar();
	StdInfo *current = *head;
	//������ ��ġ�� ��� ã��
	while (count != editStdNum) {
		current = current->next;
		count++;
	}
	printf("������������������������  �л� ���� ���� ������������������������\n");
	printf("\t�̸��� �Է��ϼ��� : "); gets((current)->name);
	printf("\t���̸� �Է��ϼ��� : "); scanf("%d", &(current)->age);	getchar();
	printf("\t������ �Է��ϼ���(��:M/��:F) : "); scanf("%c", &(current)->gender);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(current)->p.kor);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(current)->p.eng);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(current)->p.mat);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(current)->p.sci); getchar();
	printf("\t�ڸ�Ʈ�� �����ּ��� : "); gets((current)->comment);
	puts("����������������������������������������������������������������������������������");
}
void main() {
	StdInfo *head = NULL;
	int select = 0;
	for (;;) {
		select = selectMenu(select);
		switch (select) {
		case 1: addStdInfo(&head); break;
		case 2: insStdInfo(&head); break;
		case 3: editStdInfo(&head); break;
		case 4: delStdInfo(&head); break;
		case 5: showStdInfo(&head); break;
		}
		if (select == 0) break;
	}
	//�޸� ����
	while (head) {
		StdInfo *temp;
		temp = head;
		head = head->next;
		free(temp);
	}
}