#include <stdio.h>
#include<stdlib.h>
/*
	동적 메모리(2)
	stdlib.h
	malloc.h

	1. 생성
	1) malloc()
			(1) heap에 메모리를 만든 후 주소값을 리턴하는 함수
			(2) 소괄호 안에 원하는 byte수의 "정수"를 입력한다.
			    void * malloc(10); heap에 10byte를 만든 후....
				10byte 시작번지를 리턴해라!
			(3) 리턴되는 주소값이 void * 이다!
			(4) 그래서 malloc()를 사용하고 난 후,
			    바로 형변환 해서 사용하자!



				정수 2개 데이터를 heap에다 만들고 싶다!

				int *ptr변수 = (int *)malloc(8)   ;

				첫번째 영역에 데이터 10 넣기
				ptr변수 10을 넣고 싶다!
				*(ptr변수+0) = 10;

				두번째 영역에 데이터 20 넣기
				*(ptr변수+1) = 20;


	2. 소멸
	1) free()
	     free(주소)

*/
void inputNum(int *pNum) {
	printf("정수 2개 입력 : ");
	scanf("%d %d", pNum, pNum + 1);
}

void printInputNum(int *pNum) {
	printf("첫 번째 정수 : %d\t두번째 정수 : %d\n", *pNum, *(pNum + 1));

}



void main() {

	//정수 변수 두개를 heap에다 만든다!
	int *ptrNum = (int *)malloc(sizeof(int) *2); 
	//사용자한테 입력받을 때 malloc(n * size(int, double, char)); 

	//값을 scanf()로 입력받는다.
	printf("정수 2개 입력 : ");
	scanf("%d %d", ptrNum, ptrNum + 1);
	//inputNum(ptrNum);


	//출력한다.
	printf("첫 번째 정수 : %d\t두번째 정수 : %d\n", *ptrNum, *(ptrNum + 1));

	//printInputHeap(ptrNum);

	/*int userNum = 0;
	//사용자로부터 값을 입력 받는다
	printf("원하는 값 입력 : "); scanf("%d", &userNum);

	//만약 입력받은 값이 5이고 int의 크기로 메모리에 할당받고 싶으면 sizeof(int)로 4byte를 곱해서 20byte가 메모리에 올라간다
	//5개의 정수를 주소값에 집어 넣을 수 있다

	int *ptrNum = (int *)malloc(userNum * sizeof(int));

	//void *로 주소값을 리턴하기 때문에 주소타입을 int*으로 강제 형 변환시켜줘야 한다 
	//그리고 주소값을 리턴하기 때문에 포인터 변수 int *ptrNum에 대입해야한다

	//for문을 이용해서 사용자가 원하는 값을 입력한다
	for (int i = 0; i < userNum; i++){
		printf("%d의 값에 들어갈 정수\n", i+1);
		scanf("%d", (ptrNum+i));
		//입력한 값이 잘 들어갔는지 확인한다
	}
	for (int i = 0; i < userNum; i++) {
		printf("%d번의 값 : %d\n", (i + 1), *(ptrNum+i));
	}*/

	//메모리 해제한다.
	//malloc 초기화(heap)영역
	free(ptrNum); //메모리 누수(leak)

	//stack 영역 초기화
	ptrNum = NULL; //완전 초기화

	printf("%d\n", ptrNum);
	

}