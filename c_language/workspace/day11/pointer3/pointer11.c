#include<stdio.h>
/*
	이중 포인터 (다중 포인터)
	int *pAge;		// = 1차원 배열과 연결
	int **ppAge;	// = 2차원 배열과 연결
	int ***pppAge;	// = 3차원 배열과 연결

*/
void main() {

	//2중 포인터는 동적메모리를 만들고, 각각의 저장소에 다시 주소값을 받아야 할 때 사용
	//이전에는 동적메모리를 만들고(int *) 각각의 저장소에 정수값(변수)를 받았다!
	//그런데 2중 포인터를 쓰면, "재할당"을 받을 수 있다
	// 1반에 3명		2반에 3명	 3반에 3명		4반에 3명
	// 반을 만들기 위해서 4개 저장소가 필요하다!
	// 각각의 반은 다시 3명씩 저장소가 필요하다!

	//그렇기 때문에 반을 만드는 저장소는 "재할당"을 받기 위해서
	//주소값으로 모양을 만들어야 한다!

	// * : 찾아가서 읽기! = 영역을 해석 그랬더니 변수더라!
	//int age = 0; int *pAge = &age;	// *pAge -> pAge의 영역을 읽어라!

	//int **ppAge;		*pAge -> pAge에 가서 읽어봐라! 그랬더니 어라?????? 주소형이네!!

	//출력
	//ppMem을 통해서 'A'를 출력해 보세요
	//pMem을 통해서 'A' 출력
	//pMem이 갖고 있는 데이터는 타입이 무엇일까요?
	//ppMem이 갖고 있는 데이터는 타입이 무엇일까요?

	char mem = 'A';
	char *pMem;
	char **ppMem;

	pMem = &mem;
	ppMem = &pMem;

	printf("ppMem : %c\n", **ppMem); //'A'출력
	printf("pMem : %c\n", *pMem);// 'A'출력

	/*
		mem == ?? pMem == ?? ppMem

		&mem == ?? pMem == ?? ppMem

		*&mem == ? ? ? pMem == ??? ppMem

*/






	
}