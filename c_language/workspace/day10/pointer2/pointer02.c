#include <stdio.h>
/*
	포인터 변수(포인터 자료형의 특징)

*/
void main()
{
	int age = 10;
	int *pAge = 0;
	pAge = &age;  //age의 주소를 구해라!(??연산자) -> pAge에 대입시키자!
	//age는 4byte짜리 정수형 변수이다!
	//그럼 pAge는 몇 byte짜리 변수일까?
	printf("pAge의 크기:%dbyte pAge가 가리키고 있는 주소값 : %d번지\n", sizeof(pAge), pAge);

	char ch = 'A';
	char *pCh = &ch;	
	//pCh는 몇 byte짜리 변수일까?
	printf("pCh의 크기:%dbyte pCh가 가리키고 있는 주소값 : %d번지\n", sizeof(pCh), pCh);


	double pi = 3.14;
	double *pPi = &pi;
	printf("pPi의 크기:%dbyte pPi가 가리키고 있는 주소값 : %d번지\n", sizeof(double*), pPi);

	
	int a, b, c = 0;
	printf("&a:%d번지 &b:%d번지 &c:%d번지\n", &a, &b, &c);

	//pCh = &a;
	// 포인터변수를 만들 때 자료형은 대입받는 변수의 자료형과 동일해야 한다.
	// pCh에 있는 주소를 토대로 데이터를 찾아가서(1)
	//	그 데이터를 해석(2) 해야 하는데,
	//  이때(해석할 때) 그 크기를 알려준다!
}