#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*


	* 이중 연결 리스트를 이용해서
	  추가, 삽입, 삭제를 진행합니다.

	  각 단계별로 함수를 제작
	  newData() : 추가
	  insertData() : 삽입
	  deleteData() : 삭제
	  updateData() : 수정

	  menu(){
			 0. 전체 정보 출력하기 
			 1. 삽입하기	
			 2. 삭제하기		
			 3. 수정하기		
			 4. 데이터보기showList(번호)		
			 5. 종료 
			 }

	  1. 노드 구조체
	  tytpedef struct List{
		
		중첩 구조체;

		struct List *next;
		struct List *prev;

	  }list;

	  2. 중첩 구조체 : 선정하기 1) 학생정보 or 2)도서정보 or 3)여행정보 or 4)기타... 중 택 1
	  typedef struct ????{
		//멈버변수


	  }????;
	  3. 함수부
	  void newData();
	  void insertData();
	  void deleteData();
	  void updateData();

	  4. 메인함수
	  void main(){


	  }
	  ※ 제출방법 : struct14_2_백성민.c	혼자서...
	               struct14_2_백성민_이순신_....		팀과제
		수요일 / 0603 / homework // day19 폴더에 제출

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
void menu(int cnt, list *pStart, list *new_node, list *current);
//정보 입력 함수
void inputData(int *cnt, list **pStart, list **new_node, list **current);
//전체 정보 출력 함수
void displayAllData(list *pStart, list *current);
//사용자가 원하는 정보 출력 함수
void displaySelectedData(list *pStart);
//정보 추가 함수
void addData(int *cnt, list **pStart, list **new_node, list **current);
//정보 삭제 함수
void deleteData(list *new_node, list *current);
//정보 수정 함수
void updateData();

void main() {
	int cnt = 0;
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

void menu(int cnt, list *pStart, list *new_node, list *current) {
	while (1) {
		int choice = 0;
		puts("1. 여행 정보 입력하기\n2. 여행 정보 추가하기\n3. 여행 정보 수정하기\n4. 여행 정보 삭제하기\n5. 원하는 여행 정보보기\n6. 전체 여행 정보보기\n7. 종료");
		printf("원하는 번호를 선택해 주세요 : "); scanf("%d", &choice);
		if (choice == 7) { break; }
		switch (choice) {
		case 1: inputData(&cnt, &pStart, &new_node, &current); break;
		case 2: addData(&cnt, &pStart, &new_node, &current); break;
		case 3: 
		case 4:
		case 5: displaySelectedData(pStart); break;
		case 6: displayAllData(pStart, current); break;
			
		default: break;
		}
	}

}

void inputData(int *cnt, list **pStart, list **new_node, list **current) {
	int input = 0;

	printf("몇 명의 여행 정보를 입력하시겠습니까? : "); scanf("%d", &input);
	puts("");
	for (int i = 0; i < input; i++) {
		getchar();
		*new_node = (list *)malloc(sizeof(list));
		printf("┏━━━━━ 여행 정보 ━━━━━┓\n");
		printf("여행자 ID 번호 : %d\n", ++(*cnt));
		printf("여행 목적지를 입력하세요 : "); gets((*new_node)->t.destination);
		printf("여행 인원수를 입력하세요 : "); scanf("%d", &(*new_node)->t.tourist);
		printf("여행 경비를 입력하세요 : "); scanf("%d", &(*new_node)->t.cost);
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

void addData(int *cnt, list **pStart, list **new_node, list **current) {
	int input = 0;

	printf("몇 명의 정보를 더 추가 입력하시겠습니까? : "); scanf("%d", &input);
		
	puts("");
	for (int i = 0; i < input; i++) {
		getchar();
		*new_node = (list *)malloc(sizeof(list));
		printf("┏━━━━━ 여행 정보 ━━━━━┓\n");
		printf("여행자 ID 번호 : %d\n", ++(*cnt));
		printf("여행 목적지를 입력하세요 : "); gets((*new_node)->t.destination);
		printf("여행 인원수를 입력하세요 : "); scanf("%d", &(*new_node)->t.tourist);
		printf("여행 경비를 입력하세요 : "); scanf("%d", &(*new_node)->t.cost);
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

void update() {


}

void deleteData(list **pStart, list *current) {
	int num = 0;
	printf("삭제하고 싶은 손님 ID번호를 입력해 주세요 : "); scanf("%d", &num);
	list *remove = NULL;
	current = *pStart;
	for (int i = 0; i < num - 1; i++) {
		current = current->next;

	}
	if (*pStart == remove) {
		pStart = remove->next;
	}
	if (remove->next != NULL) {
		remove->next->prev = remove->prev;
	}

	if (remove->prev != NULL) {
		remove->prev->next = remove->next;
	}
	

	free(remove);
	
}

void displaySelectedData(list *pStart) {
	
	int num = 0;
	printf("손님 id 번호를 입력하세요 : "); scanf("%d", &num);
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

void displayAllData(list *pStart, list *current) {
	
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

