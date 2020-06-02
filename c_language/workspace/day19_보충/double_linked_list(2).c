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
	//입력받을 개수
	int input = 0;

	//printf("몇 명의 데이터를 입력하시겠습니까? : "); scanf_s("%d", &input);
	//입력
	//for (int i = 0; i < input; i++) {
		//getchar();
		pStart = (Data *)malloc(sizeof(Data));
		printf("이름을 입력하세요 : "); gets(pStart->name);
		printf("나이를 입력하세요 : "); scanf_s("%d", &pStart->age);
		printf("국어점수를 입력하세요 : "); scanf_s("%d", &pStart->p.kor);
		printf("영어점수를 입력하세요 : "); scanf_s("%d", &pStart->p.eng);
		printf("수학점수를 입력하세요 : "); scanf_s("%d", &pStart->p.mat);
		printf("과학점수를 입력하세요 : "); scanf_s("%d", &pStart->p.sci);
		

		printf("이름 : %s\n", pStart->name);
		printf("나이 : %d\n", pStart->age);
		printf("국어 : %d\n", pStart->p.kor);
		printf("영어 : %d\n", pStart->p.eng);
		printf("수학 : %d\n", pStart->p.mat);
		printf("과학 : %d\n", pStart->p.sci);

		pNew = (Data *)malloc(sizeof(Data));
		pStart->next = pNew;
		pNew->prev = pStart;
		getchar();
		printf("이름을 입력하세요 : "); gets(pNew->name);
		printf("나이를 입력하세요 : "); scanf_s("%d", &pNew->age);
		printf("국어점수를 입력하세요 : "); scanf_s("%d", &pNew->p.kor);
		printf("영어점수를 입력하세요 : "); scanf_s("%d", &pNew->p.eng);
		printf("수학점수를 입력하세요 : "); scanf_s("%d", &pNew->p.mat);
		printf("과학점수를 입력하세요 : "); scanf_s("%d", &pNew->p.sci);
		
		printf("이름 : %s\n", pNew->name);
		printf("나이 : %d\n", pNew->age);
		printf("국어 : %d\n", pNew->p.kor);
		printf("영어 : %d\n", pNew->p.eng);
		printf("수학 : %d\n", pNew->p.mat);
		printf("과학 : %d\n", pNew->p.sci);


	//}//end for
	//free(current);

	//출력
	//int inputNum = 0;
	//for (;;) {
	//	printf("숫자를 입력하세요 : "); scanf_s("%d", &inputNum);
	//	Data *search = pStart;
	//	printf("%d", search->next);
	//	for (int i = 0; i < inputNum - 1; i++) {
	//		printf("%d", search->next);
	//		search = search->next;
	//	}
	//	printf("이름 : %s\n", search->name);
	//	printf("나이 : %d\n", search->age);
	//	printf("국어 : %d\n", search->p.kor);
	//	printf("영어 : %d\n", search->p.eng);
	//	printf("수학 : %d\n", search->p.mat);
	//	printf("과학 : %d\n", search->p.sci);
	//}



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