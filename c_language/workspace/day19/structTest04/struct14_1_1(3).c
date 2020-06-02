#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct SubScore {
	int kor;
	int eng;
	int mat;
	int sci;
}SubScore;

typedef struct Data {
	char name[10];
	int age;
	SubScore p;
	struct Data *next;
}Data;	
//���ϴ� �л��� ������ ���
void showStdScore(Data *start) {
	int inputNum = 0;
	for (;;) {
		printf("���ڸ� �Է��ϼ��� : "); scanf("%d", &inputNum);
		Data *search = start;
		for (int i = 0; i < inputNum - 1; i++) {
			search = search->next;
		}
		printf("�̸� : %s\n", search->name);
		printf("���� : %d\n", search->age);
		printf("���� : %d\n", search->p.kor);
		printf("���� : %d\n", search->p.eng);
		printf("���� : %d\n", search->p.mat);
		printf("���� : %d\n", search->p.sci);
	}
}
//�߰��ϱ� 
void inputStdScore(Data *new_node,Data *start,Data *current) {
	int input = 0;

	printf("�� ���� �����͸� �Է��Ͻðڽ��ϱ�? : "); scanf("%d", &input);
	//�Է�
	for (int i = 0; i < input; i++) {
		getchar();
		new_node = (Data *)malloc(sizeof(Data));
		printf("�̸��� �Է��ϼ��� : "); gets(new_node->name);
		printf("���̸� �Է��ϼ��� : "); scanf("%d", &new_node->age);
		printf("���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.kor);
		printf("���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.eng);
		printf("���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.mat);
		printf("���������� �Է��ϼ��� : "); scanf("%d", &new_node->p.sci);
		new_node->next = NULL;
		if (start == NULL) {
			start = new_node;
			current = new_node;
		}
		else {
			current->next = new_node;
			current = new_node;
		}//end if
	}//end for
}
void main() {
	struct Data* start, *new_node, *current;	
	start = new_node = current = NULL;
	//�߰�
	inputStdScore(new_node, start, current);
	//���
	current = start;
	//while (current != NULL) {
	//	printf("�̸� : %s\n", current->name);
	//	printf("���� : %d\n", current->age);
	//	printf("���� : %d\n", current->p.kor);
	//	printf("���� : %d\n", current->p.eng);
	//	printf("���� : %d\n", current->p.mat);
	//	printf("���� : %d\n", current->p.sci);
	//	current = current->next;
	//}
	//���ϴ� �л� ���
	showStdScore(start);
	
	//�޸� ����
	while (start != NULL) {
		Data *temp;
		temp = start;
		start = start->next;
		free(temp);
		printf("�޸� ����\n");
	}
}