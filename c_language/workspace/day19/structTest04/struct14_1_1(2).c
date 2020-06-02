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
	Data *pStart, *new_node, *current;
	pStart = new_node = current = NULL;
	//입력받을 개수
	int input = 0;

	printf("몇 명의 데이터를 입력하시겠습니까? : "); scanf("%d", &input);
	//입력
	for (int i = 0; i < input; i++) {
		getchar();
		new_node = (Data *)malloc(sizeof(Data));
		printf("이름을 입력하세요 : "); gets(new_node->name);
		printf("나이를 입력하세요 : "); scanf("%d", &new_node->age);
		printf("국어점수를 입력하세요 : "); scanf("%d", &new_node->p.kor);
		printf("영어점수를 입력하세요 : "); scanf("%d", &new_node->p.eng);
		printf("수학점수를 입력하세요 : "); scanf("%d", &new_node->p.mat);
		printf("과학점수를 입력하세요 : "); scanf("%d", &new_node->p.sci);
		new_node->next = NULL;
		if (pStart == NULL) {
			pStart = new_node;
			current = pStart;
		}
		else {
			current->next = new_node;
			current = new_node;
		}//end if
		//pNew->prev = pStart;
		
		
		
		
	}//end for
	
	//출력
	int inputNum = 0;
	for (;;) {
		printf("숫자를 입력하세요 : "); scanf("%d", &inputNum);
		Data *search = pStart;
		for (int i = 0; i < inputNum - 1; i++) {
			search = search->next;
		}
		printf("이름 : %s\n", search->name);
		printf("나이 : %d\n", search->age);
		printf("국어 : %d\n", search->p.kor);
		printf("영어 : %d\n", search->p.eng);
		printf("수학 : %d\n", search->p.mat);
		printf("과학 : %d\n", search->p.sci);
	}
	/*current = start;
	while (current != NULL) {
		printf("이름 : %s\n", current->name);
		printf("나이 : %d\n", current->age);
		printf("국어 : %d\n", current->p.kor);
		printf("영어 : %d\n", current->p.eng);
		printf("수학 : %d\n", current->p.mat);
		printf("과학 : %d\n", current->p.sci);
		current = current->next;
	}*/
	//메모리 해제
	/*while (start != NULL) {
		Data *temp;
		temp = start;
		start = start->next;
		free(temp);
		printf("메모리 해제\n");
	}*/
}