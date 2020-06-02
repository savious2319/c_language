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
void showStdInfo(StdInfo **current, StdInfo **head);
//void backMenu() {
//	getchar();
//	char exit = ' ';
//	puts("\t   ������������������������������������������������������������������������������������������������������������");
//	puts("\t   ��\t   ���� �޴��� �̵��Ͻ÷��� q�� �����ּ���     \t��");
//	puts("\t   ������������������������������������������������������������������������������������������������������������");
//	printf("\t    �Է� : "); scanf("%c", &exit);
//	if (exit == 'q') {
//		system("cls");
//		main();
//	}
//}


int callMenu(StdInfo **current, StdInfo **head) {
	int choiceNum = 0;
	printf("�޴� ����\n");
	printf("1. �л� ���� �߰��ϱ�\n");
	printf("2. �л� ���� �����ϱ�\n");
	printf("3. �л� ���� �����ϱ�\n");
	printf("4. ���� �л� ���� ����ϱ�\n");
	printf("5. ��ü �л� ���� ����ϱ�\n");
	printf("0. ���� �ϱ�\n");
	scanf("%d", &choiceNum);
	return choiceNum;
}
void inputStdInfo(StdInfo **current, StdInfo **head,StdInfo **new_node) {
	int input = 0;
	int cnt = 0;
	system("cls");
	printf("�� ���� �����͸� �Է��Ͻðڽ��ϱ�? : "); scanf("%d", &input); getchar();
	//�Է�
	for (int i = 0; i < input; i++) {
		*new_node = (StdInfo *)malloc(sizeof(StdInfo));
		printf("������������������������ %d�� �л� ���� �Է� ������������������������\n", ++cnt);
		printf("\t�̸��� �Է��ϼ��� : "); gets((*new_node)->name);
		printf("\t���̸� �Է��ϼ��� : "); scanf("%d", &(*new_node)->age);	getchar();
		printf("\t������ �Է��ϼ���(��:M/��:F) : "); scanf("%c", &(*new_node)->gender);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.kor);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.eng);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.mat);
		printf("\t���������� �Է��ϼ��� : "); scanf("%d", &(*new_node)->p.sci); getchar();
		printf("\t�ڸ�Ʈ�� �����ּ��� : "); gets((*new_node)->comment);
		puts("����������������������������������������������������������������������������������������");
		(*new_node)->stdNum = cnt;
		(*new_node)->next = NULL;
		if (*head == NULL) {
			*head = (*new_node);
			*current = *head;
		}
		else {
			(*current)->next = *new_node;
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
void main() {
		  
		 StdInfo *head, *new_node, *current;
		 head = new_node = current = NULL;

		 //�л� ���� �Է�
		 //head ��� ���� & �ʱ�ȭ
		 // �߰�
		 inputStdInfo(&head,&new_node,&current);
		 showStdInfo(&current,&head);
		 //callMenu(current,&head);

		//��ü �л� ���
		
}
void showStdInfo(StdInfo **current, StdInfo **head) {
	if (*current != NULL) {
		puts("\t   ������������������������������������������������������������������������������������������������������������");
		puts("\t   ��\t   �Էµ� �л����� ������ ��� ����մϴ�.     \t��");
		puts("\t   ������������������������������������������������������������������������������������������������������������");
		puts("����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
		puts("\t��ȣ\t�̸�\t����\t����\t����\t����\t����\t����\t�ڸ�Ʈ");
		(*current) = *head;
		while ((*current) != NULL) {
			printf("\t%d��\t%s\t%d��\t%c\t%2d��\t%2d��\t%2d��\t%2d��\t%s\n", (*current)->stdNum, (*current)->name, (*current)->age, toupper((*current)->gender), (*current)->p.kor, (*current)->p.eng, (*current)->p.mat, (*current)->p.sci, (*current)->comment);
			(*current) = (*current)->next;
		}
		puts("����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
	}
	else {
		puts("\t   ������������������������������������������������������������������������������������������������������������");
		puts("\t   ��\t      �Էµ� �л����� ������ �����ϴ�.  \t��");
		puts("\t   ��\t     ���� �л����� ������ �Է����ּ���.   \t��");
		puts("\t   ������������������������������������������������������������������������������������������������������������");
		Sleep(2000);
		system("cls");
		main();
	}
}