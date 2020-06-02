#include<stdio.h>
/*
	대입받은 주소값을 이용해서
	데이터를 읽어오자!

	이 때 사용하는 "연산자"가 *연산이다!


	int age = 11;
	int *pAge = age;  <--- 이때 *은 구분자(기호) 이다!

	%d번지, pAge);  <---- pAge에 주소값을 출력해~
	%d살, *pAge);  <---- pAge에 있는 주소값을 찾아가서 비트를 해석해라!!
	                  (이게 연산자)
	float f_pi = 3.14F;   // long int a = 1L;
	int *pPi = &f_pi;	  // 데이터를 저장하고 있는 변수는 실수(4byte)
					      // 포인터 변수도 int* (4byte) 규격은 맞을지라도,
						  // int형 변수와 float형 변수의 규격이 다르기 때문에,
						  // *가 비트를 해석할 때 정상적인 데이터를 처리할 수 없다.

	%d, *pPi); ---> pPi가 갖고 있는 주소로 찾아가기
					pPi의 (시작번지부터 끝 번지까지) 해석하기 <---- 이때 해석이 안된다!

	★ 따라서, 변수의 타입과 포인터 변수의 타입은 일치 해야 한다!



*/


void main() {

	//몸무게, 키 값을 갖고 있는 변수
	int age = 37;
	int weight = 66;
	int height = 172;

	//소스를 완성하세요.
	//주소를 저장할 수 있는 포인터 변수 선언
	int *pAge = 0;
	int *pWeight = 0;
	int *pHeight = 0;

	//포인터 변수에 age, weight, height의 주소를 대입
	pAge = &age;       // *는 자료형과 변수 사이에 와야한다! 여기서 *를 변수 앞에 붙이면 에러!!
	pWeight = &weight;
	pHeight = &height;

	// * 연산으로 각각 데이터 출력해 보기
	//나이 출력해 보기
	printf("pAge가 갖고 있는 값 : %d번지 pAge가 가리키고 있는 데이터 : %d살\n", pAge, *pAge);//*pAge는 저장된 주소값에 있는 데이터 출력, pAge는 저장된 주소값 출력
																						//pAage 앞에 붙은 *는 값을 읽어오라는 연산자 기능!!
																						//간접적으로 *(&weight)로 할 수 있지만 *(pWeight)로 바꾸면 된다.
	//몸무게 출력해 보기
	printf("pWeight가 갖고 있는 값  : %d번지 pWeight가 가리키고 있는 데이터 : %dkg\n", pWeight , *pWeight); 
	//키도 출력해 보세요.
	printf("pHeight가 갖고 있는 값  : %d번지 pHeight가 가리키고 있는 데이터 : %dcm\n", pHeight, *pHeight);

	//포인터를 쓰는 이유
	//1)함수에서 데이터를 공유할 수 있다. 전역 변수 안쓰고 값이 공유된다.
	//2)동적 메모리(동적 배열)를 쓸 수 있다. Heap영역을 쓸 수 있다.
}