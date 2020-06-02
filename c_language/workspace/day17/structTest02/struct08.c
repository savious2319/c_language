#include <stdio.h>

typedef struct _Type {

	int kor;
	int eng;
	int math;


} Type;

void main() {

	Type std1 = { 10, 20, 30 };
	Type *pStd = NULL;

	printf("%dbyte\tstd1의 %d번지\n", sizeof(std1), &std1); //sizeof(Type)  써도 된다.

	//offset : 떨어진 거리  각 멤버변수간의 offset을 알 수 있다!
	printf("std1의 멤버중 kor의 위치 : %d번지\n", &std1.kor); //std1에서 멤버변수를 호출한다음에 그 변수의 주소값을 읽는다
	printf("std1의 멤버중 eng의 위치 : %d번지\n", &std1.eng);
	printf("std1의 멤버중 math의 위치 : %d번지\n", &std1.math);

	//pStd는 몇 byte씩 읽는 포인터 변수어야 하는가?
	pStd = &std1;

	// *pStd == 해당 변수와 동일!   *은 주소를 통해서 변수(=영역)을 만든다!
	//*pStd = std1

	//printf("pStd를 통해서 국어 점수를 읽어보자 : %d\n", *pStd.kor);
	//왜 에러지? 점이 최우선 연산자인데 주소에가서 읽어라?? . 그래서 소괄호로 주소를 변수로 만들어야 한다

	printf("pStd를 통해서 국어 점수를 읽어보자 : %d\n", (*pStd).kor);
	//주소를 먼저 *을 통해 "구조체 변수"로 만든 후 .을 통해 호출하고자 하는 멤버변수를 부르면 된다. (*구조체ptr).멤버변수
	//(*주소).  --->  주소->멤버변수 연사자로 바꿀 수 있다. -> : 주소가 가리키는 멤버변수를 호출해라!

	printf("pStd를 통해서 영어 점수를 읽어보자 : %d\n", (*pStd).eng);
	printf("pStd를 통해서 수학 점수를 읽어보자 : %d\n", (*pStd).math);

	// (* 주소) . 멤버변수 :: 주소 -> 멤버변수  형태로 치환할 수 있다!
	puts("==============================");
	printf("국어 : %d점\n", pStd->kor); // pStd가 가리키는 kor에가서 값을 읽어와!
	printf("영어 : %d점\n", pStd->eng); 
	printf("수학 : %d점\n", pStd->math);

	/*
	
		&pStd->kor  
		&pStd->eng
		&pStd->math : pStd가 "가리키는" math 변수에 가서 (math의)주소를 구해봐라!

	*/
}