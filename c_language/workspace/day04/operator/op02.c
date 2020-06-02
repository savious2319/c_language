#include <stdio.h>
/*
	2. 단항 연산자 : unary 연산자, 연산자는 일반적으로 항을 두개 갖고 있는 경우가 많다.
	               그런데, 단항 연산자는 연산자가 항을 하나만 갖고도 연산이 되기 때문에
				   단항 연산자라고 부른다.
	   종류 : +  -  !  ~  *  &  ()  ++  --  sizeof()

*/
void main() {

//1. +. - 연산자
// + : 부호 유지 연산자
// - : 부호 변경 연산자
// +a 변수에만 적용 (+1) * a // -a : (-1) * a
//	좌표계 -> 횡축(x)
	int x = 10;
	printf("+x : %d = -x: %d\n", +x, -x);

//2. ! : 느낌표 연산자 (논리 부정 연산자)
	//논리값 : 참, 거짓 두개의 값으로 표현한다.
	// on / off의 개념,
	// true / false
	// 1 / 0 bit 값을 결과를 만들어 내지만, 1byte 값으로 처리한다.
	// c언어에서 참의 개념 : 0을 제외한 모든 값을 참으로 간주한다.
	// 5 <--- 정수값이지만 논리값으로 처리할 땐, 0이 아니기 때문에 "참"이다!
	// 5-5 <--- 이 결과값은 0이다. 논리값으로 치면 "거짓"이 된다.
	// C언어에서는 논리값의 형태를 0, 1 으로 표현하기 때문에, %d로 출력해야하고, 정수값과 헷갈리기 때문에,,
	// 자바 등의 언어에서는 true, false 값으로 표현하기도 한다. 이때는 boolean 이라는 자료형을 쓰게 된다!
	// c언어에서는 논리값을 표현하는 자료형이 없음!
	printf("!5 의 논리값 : %d\n", !5);

	// ~ : 물결 연산자 tilde 연산자
	// 비트값을 반대로 뒤집어라!
	// ~12 <--- 12의 비트모양을 0->1, 1->0으로 변경해라!
	// R G B 에서 틸드를 걸면 반대로 뒤집는다. 예) 검정 ~ -> 흰색

	printf("~8 %d\n", ~8);

	int num = 20;
	printf("~8 : %d\n", ~num);

	//4. &, *
	// 1) &변수 : 번지(를 구해주는) 연산자
	// int age; printf("%d번지\n", &age); age의 위치값을 알려준다

	// 2) *번지 : 번지에 들어가 있는 데이터
    //           * : 번지에 가서 첫번째 비트부터 마지막비트까지 해석해라
	//               번지에 역으로 찾아가서 비트의 내용을 해석하는 연산자
	//    앞으로는 포인터 연산자 라고 부른다!
	//    포인터(=주소에 찾아가서 값을 읽어내는) 연산자

	int age = 10;
	printf("age의 위치 : %d번지\n", &age);

	printf("age에 가서 값(데이터)를 읽으면? :  %d\n", *&age); // 1) age 2) & 3) *(변수)
	// <--- 10을 읽기위해 연산자를 2개나 사용했다!!
	// 어???
	printf("age에 가서 값(데이터)를 읽으면? :  %d\n", age);

	//5. () 소괄호 연산자 : 단항 일때는 강제 형변환할때 사용한다.
	//          1) 최우선 : 우선순위, 함수
	//          2) 단항 :  강제 형변환(== 명시적 형변환)
	//      (타입)변수, 상수 등을 기재한다.
	/*int*/ num = 10;
	printf("%d : 의 강제형변환 : %.1f\n", num, (double)num);
	/*
		char    -    int   -    float    -   double

		수정자 (modifier) 자료형을 디테일하게 꾸며주는 명령어
		unsigned 자료형 

		char < unsigned char
		1byte    1byte
	  -128~127     0~255

	    short int < int 4byte < unsigned int < long int
		*short 은 2byte로 줄여라!
		 2byte         4byte         4byte       4byte
       -32768~32767   -21~21         0~42억      -21~21억

	   => 큰 타입 + 작은 타입 연산을하면 큰 타입으로 자동으로 형변환 된다.
	   => 자동 형변환
	      실수형변수 = 정수형데이터 (대입 가능, 값손실 없음)
       => (타입)큰타입 + 작은타입 <--- 사용자가 원하는 타입으로 변경할 수 있다.
	   => 강제형변환
	   => 정수형변수 = 실수형변수; 실수값(소수부 탈락) 후 정수부만 변수에 들어간다. 값손실


	*/
	unsigned char ch = 48; // 문자 0 
	printf("48 >> 문자값 : %c\t십진수 아스키값 : %d\n", ch, ch);

	unsigned int playTime = -1;
	printf("플레이 횟수 : %d회 %u회\n", playTime, playTime);



	//6. siezeof() : 크기 알려주는 연산자
	// sizeof(변수, 상수, 타입) 이런거 쓰면 byte수 알려준다.
	// 컴파일러가 자동으로 계산해 준다!
	// 결과값은 정수기 때문에, 연산을 시킬 수 있다.
	// siezeof(int) + sizeof(5) *3


	printf("%d\n", sizeof(int) + sizeof(5) * 3);


	//7. ++   --   :   
	// ++ : 1을 증가시켜라
	// -- : 1을 감소시켜라
	// "증감" 연산자
	// 정수변수에 사용하자! (상수에는 쓸 수 없다)
	// int num = 10;
	// num++; //수식의 완성  num 변수엔 값이 11
	// 원래 num에 11을 만들려면?
	// num = num + 1;

	// num = 20;
	// 감소 연산자 : --num; 결과값은 19;


	// 증감연산자가 수식에서 혼자 있을 때는 전, 후를 따지지 않는다.
	// 다른 연산자하고 같은 수식을 구성할 때는,
	// 전위형인지 후위형인지 구분해서 우선순위를 정해 줘야한다.

	// 전위형 : (연산자가) 앞에
	// 후위형 : (연산자가) 뒤에

	// 전위형 : 나를 먼저 하고 남을 나중에 한다.
	// 후위형 : 나를 나중에 하고 남을 먼저 한다.

	int numA = 10;
	int numB = 20;
	int result = 0;

	result = numA++;
	//대입을 먼저하고, numA의 값에 1을 증가시킨다.
	//result = numA;
	//numA++       ; <--- 이렇게 두 줄을 쓰기 싫어서 한줄로.. result = numA++; 표현함

	numA = 10;
	result = ++numA;  //numA의 값을 먼저 1증가시키고, result에 대입시키자!
	//numA++; 하고
	//result = numA; 이렇게 쓸 내용을 한줄로 쓴거임!

	numA = 0;
	printf("전위형 ++numA : %d\n", ++numA);

	numA = 0;
	printf("후위형 numA++ : %d\n", numA++);
	printf("numA의 값 : %d\n", numA);

	//numA + 3; <---- 4   numA에 어떤값이 있는지 확인  









}