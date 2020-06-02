#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	쌍방향

	su
	-  첫번째 노드 100
	-  두번째 노드 300
	-  삽입   노드 200

	출력
	(시작 : pList / 추가 : pNew / 삽입 : pIns)

	출력 함수 : void displayList(시작점을 던져준다)
				모든 노드에 있는 su를 출력해 보자!

				displayList(list *pList)
				{

					list *search = pList;

					while(search){
						printf("%d\n", search->??);
						//주소를 검색해서 (next가 갖고 있는 값이 )NULL이 나올때까지 search에게 계속 대입시켜 보자!
						//마지막 노드의 next는 NULL을 갖고 있기 때문에!
						//while문에서 자동으로 break되면서 탈출 할 수 있게 된다.
					}
				
				}


*/
typedef struct List {
	int su;    //저장하려는 정보

			   //자기참조 구조체
	//struct check *next;  //타입을 만들기전이기때문에 strcut가 필요하다
	//struct check *prev;
	struct List *next; //list 정의되기전에 구조체 안에서 멤버변수로 사용하기 위해서는 앞에 struct를 붙여야 한다.
	struct List *prev;

}list;
void displayList(list *pList) {
	list *search = pList;

	while (search) {

		//printf("pList : %d pNew : %d pIns: %d\n", search->su);
		printf("정보 (su) : %d", search->su);  
		search = search->next;  //마지막 노드가 갖고 있는 next의 NULL을 search가 갖게된다.
	
	}
	printf("출력 종료\n");
	free(search);


}

void main() {// shift + del : 행을 한꺼번에 삭제


	list *pList = NULL;

	//생성
	pList = (list *)malloc(sizeof(list));
	pList->next = NULL;
	pList->prev = NULL;
	pList->su = 100;
	puts("생성");
	displayList(pList); // 입력값 확인

	//추가
	list *pNew = NULL;
	pNew = (list *)malloc(sizeof(list));

	pList->next = pNew;
	pNew->su = 300;
	puts("추가");
	pNew->prev = pList;
	pNew->next = NULL; 
	displayList(pList);

	//삽입
	list *pIns = NULL;
	pIns = (list *)malloc(sizeof(list));
	pIns->next = pNew;
	pIns->prev = pList;
	pList->next = pIns;
	pNew->prev = pIns;
	pIns->su = 200;
	puts("삽입");
	
	displayList(pList);

	//삭제 : pIns를 삭제한다!
	//결과 : 정보(su) 100   정보(su) 300
	//삭제를 할 때, pIns를 메모리 해제 해야한다.
	//pList의 next는 어디를 가리켜야 할까?
	//pList는 어떤 멤버변수에게 대입시켜야 할까?

	pList->next = pNew; // pIns->next;   //다음을 어떤거 가리킬거야? pNew 노드를 가리킬거야..
	pNew->prev = pList; // pIns->prev;    //pNew는 누굴 가리켜야 하지? (pIns를 가리키고 있었는데...) pList를 가리켜야한다!

	/*pIns->next = pList;
	pList->next = pNew;     =====> pList->next = pNew;

	pIns->prev = pNew;
	pNew->prev = pList;     =====> pNew->prev = pList;
 	
	*/
	free(pIns);

	puts("삭제");
	displayList(pList);


	//free(pIns);
	free(pNew);
	free(pList);


}