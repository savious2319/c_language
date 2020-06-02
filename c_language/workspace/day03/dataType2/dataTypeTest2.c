#include<stdio.h>
	/*
	1. 자료형 : 키워드(명령)
		         저장소(=변수)를 만들 수 있는 명령어 이다.
		종류 : int, char, float, double, char[], int*, 등등
		용량 : int 4byte (-2147483648 ~ 2147483647)
			   char 1byte (-128 ~ 127)
			   float 4byte (소수점 38자리)   <-- 이론상 사용하는 것이기 때문에
			   double 8byte (소수점 308 자리)    실수의 범위는 크게 중요하지 않다!
												실수에서는 두 자료형 중, double을 기본형으로 한다.
	*  용량이 의미하는 건 다룰 수 있는 데이터의 크기를 의미한다.

	2. 변수: 자료형을 이용해, 메모리(RAM)에 데이터가 들어갈 저장소를 만들 때 쓰는 영어단어
	      "저장소에 붙이는 이름 == 식별자"
	  **변수 작명 규칙
	
	3. 변수 선언하기 (=만들기)
		int a;
		int b;
		char c;
		double d;
		*기본형

		char [];  합성형 <-- 대괄호로 만든 자료형을 "배열" 이라고 한다.
		int [];
		float [];
		double [];

		int
		char   *  파생형 <-- 자료형 뒤에 별이 붙어 있으면 "포인터 변수" 라고 한다.
		float
		double

		*자료형
		함수()
		구조체  
			

	*/

void main()
{
	// 책정보
	// - 페이지 수  정수형 bNum (book number)
	// - 가격       정수형 bPrice (book price)
	// - 가로크기   실수형 bWidth (book width)
	// - 세로크기   실수형 bHeight (book height)
	// - 제목       문자배열 == 문자열  char bTitle[101] <-- 1byte 문자 100개를 쓸 수 있다?!!
	//             "a" = 'a' + '\0'
	//             'ㄱ' <--- C언어에서는 에러!
	//             "ㄱ" <--- ㄱ은 기본 2byte이다! + '\0' 총 3byte가 된다.
	//             "강" <--- 3byte char char char -> char 이름 [3]
	//             "강남" <--- "강" 2byte + "남" 2byte + '\0' --> 총 5byte 
	//			   char arLocal[5] = "강남";
	//			   // 이름 이순신
	//				char arName[7] = "이순신";
	//				char arName[100]; <--- "초기화 initialize"를 안했네??
	//				arName = "이순신" <---- 에러!!!!!
	//				배열은 데이터를 저장하는 저장소는 맞는데,
	//				일반 변수하고는 다르다! 즉, 직접 대입을 할 수 없다!
	//				왜냐하면, 배열명은 "상수"로 취급되기 때문이다!
	//				상수로 처리되는 이유: 배열명은 "포인터 상수" 이다!
	//				문자열 배열에 값응ㄹ 넣을 때, strcpy() 함수로 값을 입력할 수 있다.
    // - 작가		char arAuthor[50] = "조앤 K 롤링";
	//

	// 출력문 예
	/*
		**************** 책 정보 *********************
		제목 : 
		작가 :
		가격 :
		크기(총면적) : 
		페이지 :
		....	
	*/
	//변수 선언부
	int bNum = 440;
	int bPrice = 22000;
	double bWidth = 24.1;
	double bHeight = 26.3;
	char bTitle[100] = "설민석의 삼국지 1";
	char bAuthor[50] = "설민석";

	//연산 <- 책의 면적
	double bSize = bWidth * bHeight;


	//출력부
	//printf("************[책 정보]**************");
	puts("************[책 정보]**************");  // puts는 기본적으로 \n  을 내장하고 있다!
												//문자열만 출력하는 함수
												//putchar(' ');
	puts(bTitle);
	printf("책 제목 :%s\n", bTitle);
	printf("작가 :%s\n", bAuthor);
	printf("페이지 :%d장\n", bNum);
	printf("가격 :%d원\n", bPrice);
	printf("가로x세로(총크기) : %.1fcm X %.1fcm(%.1f)\n",bWidth, bHeight, bSize);
	puts("-----------------------------");




}