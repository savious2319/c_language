#include <stdio.h>
#include <string.h>  //strcpy() strcmp()...
#include<stdlib.h>
/*
	main()에서
	문자열을 입력받을 수 있는 포인터 변수를 만든다.

	input() 함수를 통해서 문자열을 입력받아 온다.
	---> input 함수 안에서는 12byte의 메모리 할당을 받은 후,
		 해당 주소에 "cabin" 이라는 영어단어를 붙여넣기(strcpy(주소, "cabin")) 한다.

	메인함수에서 문자열 포인터 변수를 출력하고,
	메모리를 해제한다.
*/
/*


void main() {

	char arName[12] = "cabin"; //문자열 저장 변수
	char *pName = "cabin"; // "cabin"을 문자열 포인터 변수에 담을 수 있을까?
						   // 담을 수 있다. 문자열은 주소값을 가지고 있다. 
						   //포인터 변수는 주소값을 저장할 수 있는 저장소
	//arName = "aaa";	%d, arName); 그 배열의 시작위치! arName은 이미 상수! 12byte위치값을 가르키는 상수

	//	 strcpy(여기에, 문자열); strcpy(arName, "cabin");
	//         (주소,  문자열);

	strcpy(arName, "cabin2");

	pName = "abc";
	printf("배열 : %s 포인터 : %s\n", arName, pName);


}*/

void input(const char **pN) { //const -> 상수로 만들어라!
							 //#define PI 3.14
							 //const  double  PI=3.14;
							 //const는 포인터를 붙일 수 있다! const* double PI=3.14;
							 //const int *a = 주소;  -> 주소는 바꿀 수 있다. 데이터는 바꾸지마
							 //int * const a = 주소 -> 주소를 바꿀 수 없다. 데이터는 바꿀 수 있다
							 //const int * const a =  아무것도 바꾸지마 (주소, 데이터)
	//★동적 할당
	*pN = (char *)malloc(12); //12byte만큼의 문자값을 heap에 할당해라 *pN이 가르키는 주소에 *pN == pName
	//문자열 복사
	strcpy(*pN, "Cabin"); // pN이 가르키는 주소에 "Cabin"을 복사하세요
						  //*pN -> "Cabin"의 주소를 가지고 있다. 
	printf("%s\n", *pN); //문자열은 주소에 대입할 수 있나??
}

void main() {

	//char *pName; 초기화가 안되어있다. 쓰레기 값이 들어있다.
	//printf("%d번지\n", pName); 초기화가 안되어 있는데 값을 출력할려고 하니까 오류가 난다

	//char *pName = 0; 초기화를 해주었다
	//printf("%d\n", pName); 초기화를 해주었기때문에 오류가 안나고 0이라는 값이 출력된다 

	char *pName; //초기화를 안해주었다. 쓰레기 값이 들어있다.
	printf("%d번지\n", &pName); //pName의 주소를 출력하기때문에 초기화를 안해주어도 출력이 된다.
							   

	input(&pName); //pName의 주소를 input()에 넘겨준다
	char sd[] = "Hello Brian";  //배열 갯수와 초기값의 갯수가 동일하다면 인덱스 생략 가능!!!
	printf("%s\n", sd); //<--- 문자열은 char배열이므로 %s로 출력하면 NULL값을 만날때까지 출력해 준다
	printf("%d\n", sd);
	printf("%s\n", pName);

	free(pName);
	pName = NULL;


	/*int a;

	printf("%d", &a);*/
}