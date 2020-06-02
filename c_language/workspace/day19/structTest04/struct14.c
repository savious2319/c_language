#include <stdio.h>
#include <stdlib.h>
/*
	단방향 (single linked list) : 포인터변수(자기참조) 1개

	*쌍방향 (double linked list) : 포인터변수 2개




*/
typedef struct List{
	int su;    //저장하려는 정보
	
	//자기참조 구조체
	list *next;
	list *prev;

}list;
void main() {

	//시작점
	list *pList = NULL;

	//첫번째 노드
	pList = (list *)malloc(sizeof(list));
	pList->next = NULL;
	pList->prev = NULL;

	//두번째 노드
	list *pNew = NULL;
	pNew = (list *)malloc(sizeof(list));
	//첫번째(pList)와 두번째 노드(pNew)를 연결
	//첫번째 노드에서 두번째 노드로 가리키게 해야함
	pList->next = pNew;

	//두번째 노드의 prev 를 첫번째 노드로 연결시키면 된다.
	pNew->prev = pList;
	pNew->next = NULL; //두번째에서 세번째를 연결 하는 노드는 아직 준비하지 않았음!

	//세번째 노드 생성
	//pIns 노드 이름 : insert 삽입을 하겠다!
	
	// 삽입노드 (세번째 노드) 다음을 가리켜야 한다. 그 정보는 pNew가 갖고 있다.
	// 삽입노드의 prev 는 pList가 갖고 있다.
	// 첫번째 노드(pList)의 다음은 처음엔 pNew를 가리켰는데... pIns를 가리키게 하면 된다.
	// 두번째 노드(pNew)의 이전은 원래 pList를 가리켰는데, pIns를 가리키게 하면 된다.
	// 이 순서대로 하면 pInst가 pList와 pNew 사이에 삽입될 수 있다.
	// ※ pNew와 pList를 먼저 pIns의 next와 prev에게 먼저 알려줘야한다(안그럼, 주소값이 상실될 수 있다)
	// 이후 pList의 next와 pNew의 prev를 각각 pInst에게 전달하자!

	//1. pIns 생성
	list *pIns = NULL;
	pIns = (list *)malloc(sizeof(list));
	//2. pIns next와 pNew 연결
	pIns->next = pNew;
	//3. pIns prev와 pList 연결
	pIns->prev = pList;
	//4. pList의 next와 pIns 연결
	pList->next = pIns;
	//5. pNew의 prev와 pIns 연결
	pNew->prev = pIns;

	free(pIns);
	free(pNew);
	free(pList);


}