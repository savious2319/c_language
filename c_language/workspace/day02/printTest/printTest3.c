#include<stdio.h>
/*
	서식문자 활요ㅕㅇ하기
*/
void main()
{
	/*

		%d : 인수를 십진수로 출력하기
		%o : 인수를 8진수로 출력하기
		%x : 인수를 16진수로 출력하기

		%.1f : 인수를 소수점 한자리로 출력하기
		%1f : 인수를 긴실수형 ( == double) 으로 출력하기 ( %f와 거의 비슷하다)

		%c : 인수를 문자형으로 출력하기

		%s : ????????????

	*/
	printf("16을 십진수 : %d 8진수 : %o 16진수 : %x\n", 16, 16, 16);

	printf("A : %c\n", 'A');
	printf("A : %d\n", 'A');
	printf("A : %c\n", 65);

	printf("%d , %c\n", 'D' + 32, 'D' + 32);

	/*
		아스키 코드 -> 문자는  아스키 코드로 치환된다.
				      아스키 코드는 문자에 붙인 고유의 식별번호(수)
					  그렇기 때문에 +32 등의 연산을 할 수 있는 것!
		 C언어의 문자 처리 방식은 아스키 방식!
		 ※ 자바는 문자를 2byte로 표시한다. 자바에서 'a' <-- 2byte
										  C언어에서는 'a' <-- 1byte
	*/

	/*
		%s : 문자영ㄹ은 시작 위치를 갖고 있다.
		     그리고 \0 널(NULL) 문자를 갖고 있다(항상..)
			 그래서 %s의 해석은 시작위치부터 널을 만날때까지 출력해라 라는 뜻이다!
			＊널 이란? : 아무것도 없는 상태, 0이라는 데이터는 정수로 분류되기 때문에
					    무형의 값을 표현하기에는 어려움이 있다.
						아무런 값이 없는 상태를 널 이라고 상징화 시켜놨다!
			
	*/
	printf("문자열 \"Korea\" 출력 : %s\n", "Korea");
	printf("문자열 \"Korea\"의 주소값(==위치값, 포인터) 출력 : %d번지\n", "Korea");

	//위치값(포인터)는 자리를 이동시킬 수 있다
	//위치값 +1, +2 등의 + 연산을 하면, 출력위치를 변경해서, 널문자를 만날때까지 출력시킨다!
	printf("======================================\n");
	printf("문자열 \"Korea\" 출력 : %s\n", "Korea"+1); //+1의 뜻은 오른쪽 옆칸으로 이동시켜라,
													  //'o'부터라는 뜻
													  //'o'부터 널을 만날때까지 출력할 것
	printf("문자열 \"Korea\" 출력 : %s\n", "Korea" + 2); //
	printf("문자열 \"Korea\" 출력 : %s\n", "Korea" + 3);
	printf("문자열 \"Korea\" 출력 : %s\n", "Korea" + 4);
	printf("문자열 \"Korea\" 출력 : %s\n", "Korea" + 5);

	/*\
	
		"Kor\0ea" <--- 메모리(ram)에 총 몇 byte로 잡힐까?
	
	*/

	printf("널까지 출력 : %s\n", "Kor\0ea");
	











}