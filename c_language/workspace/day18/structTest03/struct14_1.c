#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Data {
	char name[10];
	int age;			//�� ��忡 �� ������
	struct Data* next;  // prev   �ڱ����� ����ü

}Data;  //Data�� �� ��带 �����ϴ� ������ �ȴ�.
	//�� ��忡�� ���� ��带 ���� �� �� �ִ� next��� ������ �����Ѵ�.
	//next�� ������ �����̱� ������ (*next).������� ==> next->������� �� ȣ���ϸ� �ȴ�.
													//"ȭ��ǥ������"


void main() {
	struct Data* start; // ����� ������ ���� �ִ� ������ ����!
	//ù��° ���
	start = (Data*)malloc(sizeof(Data));

	strcpy(start->name, "����");
	start->age = 11;
	//start->next ����?? //malloc���� ������� �����!
	start->next = (Data*)malloc(sizeof(Data));
	
	//�ι�° ���
	strcpy(start->next->name, "�ȳ�");
	start->next->age = 12;
	start->next->next = (Data*)malloc(sizeof(Data));

	//����° ���
	strcpy(start->next->next, "��");
	start->next->next->age = 22;
	start->next->next->next = NULL;

	//���
	printf("%s\t%d\n", start->name, start->age);
	printf("%s\t%d\n", start->next->name, start->next->age);
	printf("%s\t%d\n", start->next->next->name, start->next->next->age);

	//�޸� �ʱ�ȭ
	free(start->next->next);
	free(start->next);
	free(start);


}