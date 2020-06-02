#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Data {
	char name[10];
	int age;			//각 노드에 들어갈 데이터
	struct Data* next;  // prev   자기참조 구조체

}Data;  //Data는 각 노드를 구성하는 단위가 된다.
	//각 노드에는 다음 노드를 연결 할 수 있는 next라는 변수가 존재한다.
	//next는 포인터 변수이기 때문에 (*next).멤버변수 ==> next->멤버변수 로 호출하면 된다.
													//"화살표연산자"


void main() {
	struct Data* start; // 노드의 시작을 갖고 있는 포인터 변수!
	//첫번째 노드
	start = (Data*)malloc(sizeof(Data));

	strcpy(start->name, "시작");
	start->age = 11;
	//start->next 에는?? //malloc으로 저장공간 만들기!
	start->next = (Data*)malloc(sizeof(Data));
	
	//두번째 노드
	strcpy(start->next->name, "안녕");
	start->next->age = 12;
	start->next->next = (Data*)malloc(sizeof(Data));

	//세번째 노드
	strcpy(start->next->next, "끝");
	start->next->next->age = 22;
	start->next->next->next = NULL;

	//출력
	printf("%s\t%d\n", start->name, start->age);
	printf("%s\t%d\n", start->next->name, start->next->age);
	printf("%s\t%d\n", start->next->next->name, start->next->next->age);

	//메모리 초기화
	free(start->next->next);
	free(start->next);
	free(start);


}