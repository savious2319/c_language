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
	struct Data *prev;
}Data;
void main() {
	Data *pStart, *pNew, *pIns;
	pStart = pNew = pIns = NULL;
	//�Է¹��� ����
	int input = 0;

	//printf("�� ���� �����͸� �Է��Ͻðڽ��ϱ�? : "); scanf_s("%d", &input);
	//�Է�
	//for (int i = 0; i < input; i++) {
		//getchar();
		pStart = (Data *)malloc(sizeof(Data));
		printf("�̸��� �Է��ϼ��� : "); gets(pStart->name);
		printf("���̸� �Է��ϼ��� : "); scanf_s("%d", &pStart->age);
		printf("���������� �Է��ϼ��� : "); scanf_s("%d", &pStart->p.kor);
		printf("���������� �Է��ϼ��� : "); scanf_s("%d", &pStart->p.eng);
		printf("���������� �Է��ϼ��� : "); scanf_s("%d", &pStart->p.mat);
		printf("���������� �Է��ϼ��� : "); scanf_s("%d", &pStart->p.sci);
		

		printf("�̸� : %s\n", pStart->name);
		printf("���� : %d\n", pStart->age);
		printf("���� : %d\n", pStart->p.kor);
		printf("���� : %d\n", pStart->p.eng);
		printf("���� : %d\n", pStart->p.mat);
		printf("���� : %d\n", pStart->p.sci);

		pNew = (Data *)malloc(sizeof(Data));
		pStart->next = pNew;
		pNew->prev = pStart;
		getchar();
		printf("�̸��� �Է��ϼ��� : "); gets(pNew->name);
		printf("���̸� �Է��ϼ��� : "); scanf_s("%d", &pNew->age);
		printf("���������� �Է��ϼ��� : "); scanf_s("%d", &pNew->p.kor);
		printf("���������� �Է��ϼ��� : "); scanf_s("%d", &pNew->p.eng);
		printf("���������� �Է��ϼ��� : "); scanf_s("%d", &pNew->p.mat);
		printf("���������� �Է��ϼ��� : "); scanf_s("%d", &pNew->p.sci);
		
		printf("�̸� : %s\n", pNew->name);
		printf("���� : %d\n", pNew->age);
		printf("���� : %d\n", pNew->p.kor);
		printf("���� : %d\n", pNew->p.eng);
		printf("���� : %d\n", pNew->p.mat);
		printf("���� : %d\n", pNew->p.sci);


	//}//end for
	//free(current);

	//���
	//int inputNum = 0;
	//for (;;) {
	//	printf("���ڸ� �Է��ϼ��� : "); scanf_s("%d", &inputNum);
	//	Data *search = pStart;
	//	printf("%d", search->next);
	//	for (int i = 0; i < inputNum - 1; i++) {
	//		printf("%d", search->next);
	//		search = search->next;
	//	}
	//	printf("�̸� : %s\n", search->name);
	//	printf("���� : %d\n", search->age);
	//	printf("���� : %d\n", search->p.kor);
	//	printf("���� : %d\n", search->p.eng);
	//	printf("���� : %d\n", search->p.mat);
	//	printf("���� : %d\n", search->p.sci);
	//}



	/*current = start;
	while (current != NULL) {
		printf("�̸� : %s\n", current->name);
		printf("���� : %d\n", current->age);
		printf("���� : %d\n", current->p.kor);
		printf("���� : %d\n", current->p.eng);
		printf("���� : %d\n", current->p.mat);
		printf("���� : %d\n", current->p.sci);
		current = current->next;
	}*/
	//�޸� ����
	/*while (start != NULL) {
		Data *temp;
		temp = start;
		start = start->next;
		free(temp);
		printf("�޸� ����\n");
	}*/
}