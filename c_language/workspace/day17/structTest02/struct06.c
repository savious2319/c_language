#include <stdio.h>
/*
	����ü�� �Լ��� ��������!

*/

typedef struct ClassInfo 
{
	char name[10];
	char number[15];
	double height;
} Friend;
void printFriend(Friend person) {
	printf("�̸�\t��ȣ\t\tŰ\n");
	printf("%s\t%s\t%.1fcm\n", person.name, person.number, person.height);
	puts("");
}

void main() {

	Friend hgd = { "ȫ�浿", "01034005125", 178.4 };
	Friend iss = { "�̼���", "01034005125", 156.4 };
	Friend pms = { "�ڹ���", "01034005125", 189.4 };

	//���
	printFriend(hgd);
	printFriend(iss);
	printFriend(pms);
	

}