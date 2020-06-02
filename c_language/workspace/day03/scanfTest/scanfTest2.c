#include<stdio.h>
/*
	정수형 -> 문자, 문자열

	실수 입력받기

	scanf("%c", &문자형변수);

	scanf("%s", 문자배열);

	scanf(".1f%", &실수형변수); <---실수를 입력받을 때는 %f를 쓰지 않고, %1f로 입력을 받아야 한다.
									//long float의 약자 -> double를 의미한다.
									//실수의 기본형은 double이니까.. %1f로 입력받자!
									// (출력할 때는 %f로 출력하면 된다)

*/

void main()
{

	//printf("이름을 입력하세요 : "); scanf("%s", arName);  //배열명은 이미 주소이니때문에 &가 필요없음!
	//printf("주소를 입력하세요 : "); scanf("%s", arAddress); //배열명은 "포인터 상수" 다!!!

	//scanf_s() 함수란???
	//printf("주소를 입력하세요 : "); scanf_s("%s", arAddress, 문자열의 크기);
	// 크기(byte수) 를 알려주는 연산자 : sizeof()
	//sizeof(인자); 인자 : 자료형, 변수, 사용자가 만든 타입, 상수 등등을 써주면,
	//					  RAM에 몇바이트로 만들어져 있는지 크기를 알려주는 연산자이다!
	//printf("주소를 입력하세요 : "); scanf_s("%s", arAddress, 100);
	//이렇게 써도 된다. 하지만,,, 매번 크기를 기억했다 쓸 수 없으니까. sizeof()를 사용하자!!!
	//printf("주소를 입력하세요 : "); scanf_s("%s", arAddress, sizeof(arAddress));

	//sizeof()
	/*
	printf("int 자료형 : %dbyte\n", sizeof(int));
	printf("char 자료형 : %dbyte\n", sizeof(char));
	printf("double 자료형 : %dbyte\n", sizeof(double));
	printf("float 자료형 : %dbyte\n", sizeof(float));
	printf("문자 상수 : %dbyte\n", sizeof('a'));
	printf("정수 상수 : %dbyte\n", sizeof(10));
	printf("문자열 상수 : %dbyte\n", sizeof("5"));
	printf("문자열 상수 : %dbyte\n", sizeof("a"));
	printf("문자열 상수 : %dbyte\n", sizeof("ㄱ"));
	printf("문자열 상수 : %dbyte\n", sizeof("강남"));
	printf("문자열 상수 : %dbyte\n", sizeof("abcd"));

	int a, b, c;
	printf("변수 : %dbyte\n", sizeof(a));
	printf("변수 : %dbyte\n", sizeof(a));
	printf("변수 : %dbyte\n", sizeof(a) + sizeof(b)); //<--+ 는 의미없다! 결과가 숫자로 나오기때문에
												   // 연산을 시켜본것
	printf("변수 : %dbyte\n", sizeof(a) * sizeof(arAddress));
	*/

	//printf("%dByte\n", sizeof(3.4));
	//byte수를 알려준다

	char arName[10] = "";
	char arAddress[100] = "";

	printf("이름을 입력하세요 : "); scanf_s("%s", arName, sizeof(arName)); 
	printf("주소를 입력하세요 : "); scanf_s("%s", arAddress, sizeof(arAddress));
	//입력할 때, 공백이 있으면 앞에 한 단어만 출력된다. 공백이 "구분자"로 쓰였기 때문이다!
	//입력할 때, 공백대신 _밑줄로 문장을 입력할 수 있도록 하자!
	//서울시 강남구 대신 "서울시_강남구" 이런 식으로 공백없이!!!


	//출력문 완성하기
	printf("이름 : "); puts(arName);
	printf("주소 : "); puts(arAddress);
	//printf("이름: %s\n주소: %s\n", arName, arAddress);


}