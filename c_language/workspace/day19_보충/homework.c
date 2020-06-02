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
	int idNum;

}tInfo;
typedef struct List {
	tInfo t;
	struct List *next;
	struct List *prev;

}list;
//메뉴 함수
void menu(list *pStart, list *new_node, list *current);
//전체 정보 출력 함수
void displayData();
//정보 입력 함수
void inputData(list *pStart, list *new_node, list *current);
//입력된 데이터 보는 함수
void showData(list *pStart);
//추가 함수
void newData();
//삽입 함수
void insertData();
//삭제 함수
void deleteData();
//수정 함수
void updateData();

void main() {

	list *pStart, *new_node, *current;
	pStart = new_node = current = NULL;

	//메뉴
	menu(pStart, new_node, current);

}

void menu(list *pStart, list *new_node, list *current) {
	while (1) {
		int choice = 0;
		puts("0. 전체 여행 정보 출력하기\n1. 여행 정보 입력\n2. 여행 정보 추가하기\n3. 여행 정보 삭제하기\n4. 여행 정보 수정하기\n5. 원하는 여행 정보 보기\n6. 종료\n");
		printf("원하는 번호를 선택해 주세요 : "); scanf_s("%d", &choice);
		switch (choice) {
		case 0:
		case 1: inputData(pStart, new_node, current); break;
		case 2: newData(pStart); break;
		case 3:
		case 4:
		case 5: showData(pStart);
		default: break;
		}
	}

}

void inputData(list *pStart, list *new_node, list *current) {
	int input = 0;

	printf("몇 명의 데이터를 입력하시겠습니까? : "); scanf_s("%d", &input);
	puts("");
	for (int i = 0; i < input; i++) {
		//pStart->next = NULL;
		//pStart->prev = NULL;
		getchar();
		new_node = (list *)malloc(sizeof(list));
		printf("손님 ID 번호는 %d 입니다\n", i + 1);
		new_node->t.idNum = i + 1;
		printf("%d번 손님 여행 목적지를 입력하세요 : ", i + 1); gets(new_node->t.destination);
		printf("%d번 손님 여행 인원수를 입력하세요 : ", i + 1); scanf_s("%d", &new_node->t.tourist);
		printf("%d번 손님 여행 경비를 입력하세요 : ", i + 1); scanf_s("%d", &new_node->t.cost);
		puts("");
		new_node->next = NULL;
		if (pStart == NULL) {
			pStart = new_node;
			current = new_node;
		}
		else {
			current->next = new_node;
			current = new_node;
		}
	}
}

void showData(list *pStart) {
	//prinf("주소 확인 : %d", pStart);
	while (1) {
		int num = 0;
		printf("손님 ID 번호를 입력하세요 : "); scanf_s("%d", &num);
		list *search = pStart;
		for (int i = 0; i < num - 1; i++) {
			search = search->next;
		}

		printf("여행 목적지 : %s\n", search->t.destination);
		printf("여행 인원수 : %d명\n", search->t.tourist);
		printf("여행 경비 : %d원\n", search->t.cost);

	}

}

void newData(list *pStart) {
	int num = 0;
	printf("추가 할 손님 수를 입력하세요 : "); scanf_s("%d", &num);



}