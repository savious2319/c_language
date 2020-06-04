#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
제작 : 백성민
주제 : 연결리스트를 통한 여행관리 프로그램
제작기간 : 2020년 06월 01일~04일
사용툴 : Microsoft Visual Studio 2015
주요 기능 : 구조체, 연결리스트, 함수, 포인터 등
소스결과 :
		

먼저 프로그램을 실행하게 되면 메인함수에서 메뉴함수를 호출해 메뉴가 나옵니다.
메뉴함수 안에서 while문안에 switch문을 작성해서 그 안에서 사용자가 원하는 번호를
선택합니다. 선택한 번호에 따라 그 함수가 호출이되고 그 함수의 기능이 실행됩니다.


*/

typedef struct TravelInfo {
	char destination[20];
	int tourist;
	int cost;

}tInfo;
typedef struct List {
	int idNum;
	tInfo t;
	struct List *next;
	struct List *prev;

}list;

//메뉴 함수
void menu(int *cnt, list *pStart, list *new_node, list *current);
//정보 입력 함수
void inputTrvInfo(int *cnt, list **pStart, list **new_node, list **current);
//정보 추가 함수
void addTrvInfo(int *cnt, list **pStart, list **new_node, list **current);
//정보 수정 함수
void updateTrvInfo(list **pStart, list **current);
//정보 삽입 함수
void insertTrvInfo(list **pStart, list **new_node, list **current);
//정보 삭제 함수
void deleteTrvInfo(list **pStart, list **current);
//사용자가 원하는 정보 출력 함수
void displaySelectedTrvInfo(list *pStart);
//전체 정보 출력 함수
void displayAllTrvInfo(list *pStart, list *current);

void main() {
	int *cnt = 0;
	list *pStart, *new_node, *current;
	pStart = new_node = current = NULL;

	//메뉴
	menu(cnt, pStart, new_node, current);

	//메모리 해제
	while (pStart != NULL) {
		list *temp;
		temp = pStart;
		pStart = pStart->next;
		free(temp);
		printf("메모리 해제\n");
	}

}

void menu(int *cnt, list *pStart, list *new_node, list *current) {
	while (1) {
		int choice = 0;
		puts("1. 여행 정보 입력하기\n2. 여행 정보 추가하기\n3. 여행 정보 수정하기\n4. 여행 정보 삽입하기\n5. 여행 정보 삭제하기\n6. 원하는 여행 정보보기\n7. 전체 여행 정보보기\n8. 종료");
		printf("원하는 번호를 선택해 주세요 : "); scanf_s("%d", &choice);
		if (choice == 8) { break; }
		switch (choice) {
		case 1: inputTrvInfo(&cnt, &pStart, &new_node, &current); break;
		case 2: addTrvInfo(&cnt, &pStart, &new_node, &current); break;
		case 3: updateTrvInfo(&pStart, &current); break;
		case 4: insertTrvInfo(&pStart, &new_node, &current); break;
		case 5: deleteTrvInfo(&pStart, &current); break;
		case 6: displaySelectedTrvInfo(pStart); break;
		case 7: displayAllTrvInfo(pStart, current); break;
		default: puts("잘못된 번호를 입력하셨습니다. 메뉴 1~8 선택"); break;
		}
	}

}

void inputTrvInfo(int *cnt, list **pStart, list **new_node, list **current) {
	int input = 0;

	printf("몇 명의 여행 정보를 입력하시겠습니까? : "); scanf_s("%d", &input);
	puts("");
	for (int i = 0; i < input; i++) {
		getchar();
		*new_node = (list *)malloc(sizeof(list));
		printf("┏━━━━━ 여행 정보 ━━━━━┓\n");
		printf("여행자 ID 번호 : %d\n", ++(*cnt));
		printf("여행 목적지를 입력하세요 : "); gets((*new_node)->t.destination);
		printf("여행 인원수를 입력하세요 : "); scanf_s("%d", &(*new_node)->t.tourist);
		printf("여행 경비를 입력하세요 : "); scanf_s("%d", &(*new_node)->t.cost);
		puts("");
		(*new_node)->next = NULL;
		//(*new_node)->prev = NULL;
		(*new_node)->idNum = *cnt;
		if (*pStart == NULL) {
			*pStart = *new_node;
			*current = *pStart;
		}
		else {
			(*current)->next = *new_node;
			(*new_node)->prev = *current;
			*current = (*new_node);
		}

	}
}

void addTrvInfo(int *cnt, list **pStart, list **new_node, list **current) {
	int input = 0;

	printf("몇 명의 정보를 더 추가 입력하시겠습니까? : "); scanf_s("%d", &input);

	puts("");
	for (int i = 0; i < input; i++) {
		getchar();
		*new_node = (list *)malloc(sizeof(list));
		printf("┏━━━━━ 여행 정보 ━━━━━┓\n");
		printf("여행자 ID 번호 : %d\n", ++(*cnt));
		printf("여행 목적지를 입력하세요 : "); gets((*new_node)->t.destination);
		printf("여행 인원수를 입력하세요 : "); scanf_s("%d", &(*new_node)->t.tourist);
		printf("여행 경비를 입력하세요 : "); scanf_s("%d", &(*new_node)->t.cost);
		puts("");
		(*new_node)->next = NULL;  //new_node는 맨 마지막 노드이기때문에 next를 NULL로 해줘야 한다!
								   //(*new_node)->prev = NULL;
		(*new_node)->idNum = *cnt;
		if (*pStart == NULL) {
			*pStart = *new_node;
			*current = *pStart;
		}
		else {
			while ((*current)->next != NULL) {
				*current = (*current)->next;
			}
			(*current)->next = *new_node;
			(*new_node)->prev = *current;
			*current = (*new_node);
		}

	}
}

void updateTrvInfo(list **pStart, list **current) {
	int updateNum = 0;
	printf("정보를 수정하고 싶은 ID번호를 입력해주세요? : "); scanf_s("%d", &updateNum); getchar();
	*current = *pStart;
	for (int i = 0; i < updateNum - 1; i++) {
		*current = (*current)->next;
	}
	printf("┏━━━━━ 여행 정보 ━━━━━┓\n");
	printf("여행 목적지를 입력하세요 : "); gets((*current)->t.destination);
	printf("여행 인원수를 입력하세요 : "); scanf_s("%d", &(*current)->t.tourist);
	printf("여행 경비를 입력하세요 : "); scanf_s("%d", &(*current)->t.cost);
	puts("");

}

void insertTrvInfo(list **pStart, list **new_node, list **current) {
	int insertNum = 0;
	printf("정보를 삽입하고 싶은 위치는 몇번째인가요? : "); scanf_s("%d", &insertNum);
	getchar();
	*current = *pStart;
	*new_node = (list *)malloc(sizeof(list));
	printf("┏━━━━━ 여행 정보 ━━━━━┓\n");
	printf("여행 목적지를 입력하세요 : "); gets((*new_node)->t.destination);
	printf("여행 인원수를 입력하세요 : "); scanf_s("%d", &(*new_node)->t.tourist);
	printf("여행 경비를 입력하세요 : "); scanf_s("%d", &(*new_node)->t.cost);
	puts("");
	for (int i = 0; i < insertNum - 1; i++) {
		*current = (*current)->next;
	}
	//노드를 처음에 삽입할 때
	if (*pStart == *current) {
		//(*new_node)->idNum = *cnt;
		(*current)->prev = new_node;
		(*new_node)->next = *current;
		*pStart = *new_node;
		(*pStart)->idNum = insertNum;
	/*	*current = *pStart;
		for (int i = 0; i < insertNum + 1; i++) {
			*current = (*current)->next;
			(*current)->idNum++;
			printf("for 바뀐 숫자 : %d", (*current)->idNum);
		}
		while ((*current)->next != NULL); {
			(*current)->idNum++;
			printf("바뀐 숫자 : %d", (*current)->idNum);
		}*/

	}
	else {
		//노드를 중간에 삽입할 때
		//(*new_node)->idNum = *cnt;
		(*new_node)->next = *current;
		(*current)->prev->next = *new_node;
		(*new_node)->prev = (*current)->prev;
		(*current)->prev = *new_node;
		(*new_node)->idNum = insertNum;
		/**current = *pStart;
		for (int i = 0; i < insertNum + 1 ; i++) {
		*current = (*current)->next;
		printf("바뀐 숫자 : %d", (*current)->idNum);
		}

		do {
		(*current)->idNum++;
		printf("바뀐 숫자 : %d", (*current)->idNum);
		} while ((*current)->next != NULL);*/
	}



}

void deleteTrvInfo(list **pStart, list **current) {
	int deleteNum = 0;
	printf("삭제하고 싶은 손님 ID번호를 입력해 주세요 : "); scanf_s("%d", &deleteNum);
	*current = *pStart;
	for (int i = 0; i < deleteNum - 1; i++) {
		(*current) = (*current)->next;
	}
	//맨 처음 노드일 때
	if (*pStart == *current) {
		*pStart = (*current)->next;
		free((*current));
		(*pStart)->idNum = deleteNum;
		/**current = *pStart;
		for (int i = 0; i < deleteNum + 1; i++) {
		*current = (*current)->next;
		printf("바뀐 숫자 : %d", (*current)->idNum);
		}
		do {
		(*current)->idNum--;
		printf("바뀐 숫자 : %d", (*current)->idNum);
		} while ((*current)->next != NULL);*/

	}
	//맨 마지막 노드일 때
	else if ((*current)->next == NULL) {
		(*current)->prev->next = NULL;
		free((*current));

	}
	//중간 노드일 때
	else if ((*current)->next != NULL && (*current)->prev != NULL) {

		(*current)->next->prev = (*current)->prev;
		(*current)->prev->next = (*current)->next;
		free((*current));
	}


}

void displaySelectedTrvInfo(list *pStart) {

	int num = 0;
	printf("손님 id 번호를 입력하세요 : "); scanf_s("%d", &num);
	list *search = pStart;
	for (int i = 0; i < num - 1; i++) {
		search = search->next;
	}
	printf("┏━━━━━ %d번 손님 여행 정보 ━━━━━┓\n", search->idNum);
	printf("여행 목적지 : %s\n", search->t.destination);
	printf("여행 인원수 : %d명\n", search->t.tourist);
	printf("여행 경비 : %d원\n", search->t.cost);
	puts("");
}

void displayAllTrvInfo(list *pStart, list *current) {

	current = pStart;
	while (current != NULL) {

		printf("┏━━━━━ %d번 손님 여행 정보 ━━━━━┓\n", current->idNum);
		printf("여행 목적지 : %s\n", current->t.destination);
		printf("여행 인원수 : %d명\n", current->t.tourist);
		printf("여행 경비 : %d원\n", current->t.cost);
		puts("");

		current = current->next;

	}
}

