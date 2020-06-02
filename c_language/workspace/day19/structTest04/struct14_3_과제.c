#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
//printf("�޴� ����\n");
//printf("1. �л� ����/���� �Է��ϱ�\n");
//printf("2. �л� ���� �߰��ϱ�\n");
//printf("3. �л� ���� �����ϱ�\n");
//printf("4. �л� ���� �����ϱ�\n");
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
void showStdInfo(StdInfo *current, StdInfo*head) {
	puts("\t   ������������������������������������������������������������������������������������������������������������");
	puts("\t   ��\t   �Էµ� �л����� ������ ��� ����մϴ�.     \t��");
	puts("\t   ������������������������������������������������������������������������������������������������������������");
	puts("����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
	puts("\t�̸�\t����\t����\t����\t����\t����\t����\t�ڸ�Ʈ");
	current = head;
	while (current) {
		printf("\t%s\t%d��\t%c\t%2d��\t%2d��\t%2d��\t%2d��\t%s\n",current->name, current->age, toupper(current->gender), current->p.kor, current->p.eng, current->p.mat, current->p.sci, current->comment);
		current = current->next;
	}
	puts("����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
}
//����
void inputStdInfo(StdInfo **current, StdInfo **head,StdInfo **new_node) {
	int input = 0;
	system("cls");
	printf("�� ���� �����͸� �Է��Ͻðڽ��ϱ�? : "); scanf("%d", &input); getchar();
	//�Է�
	for (int i = 0; i < input; i++) {
		*new_node = (StdInfo *)malloc(sizeof(StdInfo));
		printf("������������������������ %d�� �л� ���� �Է� ������������������������\n", i+1);
		printf("\t�̸��� �Է��ϼ��� : "); gets((*new_node)->name);
		printf("\t���̸� �Է��ϼ��� : "); scanf("%d", &(*new_node)->age);	getchar();
		printf("\t������ �Է��ϼ���(��:M/��:F) : "); scanf("%c", &(*new_node)->gender);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.kor);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.eng);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.mat);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.sci); getchar();
		printf("\t�ڸ�Ʈ�� �����ּ��� : "); gets((*new_node)->comment);
		puts("����������������������������������������������������������������������������������������");
		(*new_node)->next = NULL;
		if (*head == NULL) {
			*head = (*new_node);
			*current = *head;
		}
		else {
			(*current)->next = (*new_node);
			(*new_node)->prev = (*current);
			*current = (*new_node);
		}//end if
	}//end for
	puts("\t   ������������������������������������������������������������������������������������������������������������");
	printf("\t   ��\t      %d���� �л����� ������ �Է��߽��ϴ�.  \t��\n", input);
	puts("\t   ��\t          ���� �޴��� ���ư��ϴ�.   \t\t��");
	puts("\t   ������������������������������������������������������������������������������������������������������������");
	Sleep(2000);
	system("cls");
}
//�߰�
void addStdInfo(StdInfo **current, StdInfo **head, StdInfo **new_node) {
	int stdNum = 0;
	printf("�� ���� ������ �߰��Ͻðڽ��ϱ�? : "); scanf("%d", &stdNum); getchar();
	for (int i = 0; i < stdNum; i++) {
		*new_node = (StdInfo *)malloc(sizeof(StdInfo));
		printf("������������������������ %d�� �л� ���� �Է� ������������������������\n",i+1);
		printf("\t�̸��� �Է��ϼ��� : "); gets((*new_node)->name);
		printf("\t���̸� �Է��ϼ��� : "); scanf("%d", &(*new_node)->age);	getchar();
		printf("\t������ �Է��ϼ���(��:M/��:F) : "); scanf("%c", &(*new_node)->gender);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.kor);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.eng);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.mat);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.sci); getchar();
		printf("\t�ڸ�Ʈ�� �����ּ��� : "); gets((*new_node)->comment);
		puts("����������������������������������������������������������������������������������������");
		(*new_node)->next = NULL;
		if (*head == NULL) {
			*head = (*new_node);
			*current = *head;
		}
		else {
			(*current)->next = (*new_node);
			(*new_node)->prev = (*current);
			*current = (*new_node);
		}//end if
	}//end for
}
//����
void insStdInfo(StdInfo **current, StdInfo **head, StdInfo **new_node) {
	int insStdNum = 0;
	printf("�� ��° ��ġ�� �����͸� �����Ͻðڽ��ϱ�? : "); scanf("%d", &insStdNum); getchar();
	*current = *head;
	*new_node = (StdInfo *)malloc(sizeof(StdInfo));
	printf("������������������������  �л� ���� ���� ������������������������\n");
	printf("\t�̸��� �Է��ϼ��� : "); gets((*new_node)->name);
	printf("\t���̸� �Է��ϼ��� : "); scanf("%d", &(*new_node)->age);	getchar();
	printf("\t������ �Է��ϼ���(��:M/��:F) : "); scanf("%c", &(*new_node)->gender);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.kor);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.eng);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.mat);
	printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.sci); getchar();
	printf("\t�ڸ�Ʈ�� �����ּ��� : "); gets((*new_node)->comment);
	puts("����������������������������������������������������������������������������������");
	for (int i = 0; i < insStdNum-1; i++) {
		*current =(*current)->next;
	}
	(*new_node)->prev = *current;
	(*current)->next->prev = *new_node;
	(*new_node)->next = (*current)->next;
	(*current)->next = *new_node;
}
//����
void delStdInfo(StdInfo **current, StdInfo **head) {
	int delStdNum = 0;
	printf("�� �� �л��� �����͸� �����Ͻðڽ��ϱ�? : "); scanf("%d", &delStdNum); getchar();
	(*current) = *head;
	for (int i = 0; i < delStdNum - 1; i++) {
		(*current) = (*current)->next;
	}
	(*current)->next->prev = (*current)->prev;
	(*current)->prev->next = (*current)->next;
	free((*current));
}
void main() {
	StdInfo *head, *new_node, *current;
	head = new_node = current = NULL;

	//����
	inputStdInfo(&current,&head,&new_node);
	showStdInfo(current,head);
	//�߰�
	addStdInfo(&current, &head, &new_node);
	showStdInfo(current, head);
	//����
	insStdInfo(&current, &head, &new_node);
	showStdInfo(current, head);
	//����
	delStdInfo(&current, &head);
	showStdInfo(current, head);

	//�޸� ����
	while (head) {
		StdInfo *temp;
		temp = head;
		head = head->next;
		free(temp);
	}
}