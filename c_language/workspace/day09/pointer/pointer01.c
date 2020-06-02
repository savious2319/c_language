#include<stdio.h>
/*

		변수
		

데이터


		주소


*/

void main() {

	//포인터 변수 선언!
	int *pNum = 0;
	int *pNum2 = NULL;  //포인터 변수의 초기화는 NULL이 default 값인데... NULL은 #define NULL 0  으로 되어 있다.
					    //그래서 0으로 초기화 해도 되는데.. 굳이 NULL로 하는 이유는? NULL는 상수. 알아보기 싶게. 가시적인 효과 

	//출력할 때, 단위를 써준다.     ~~~~번지
	printf("%d번지\n", pNum);  //pNum은 주소만 저장하는 변수라서... %d %x %p 등으로 출력할 수 있다!
							  //pNum은 주소만 갖고 있다! 데이터가 아니다!!!
							  //pNum이 갖고있는 주소를 이용해서 데이터까지 접급해서 사용해야 한다!

	printf("%d번지\n", pNum2);  //아무런 주소도 갖고 있지 않다! (기본 초기값 번지만 갖고 있다)

	printf("%X번지\n", pNum2);
	printf("%x번지\n", pNum2);
	printf("%p번지\n", pNum2);

	//정수형 변수를 만들고, pNum에 주소값을 넣어보자!
	//pNum은 받드시 데이터를 갖고 있는 변수가 있어야 활동할 수 있는 변수이다!
	//참조값을 통해서 데이터를 찾는 다고 해서 참조변수라는 말로 불리기도 한다!

	int age = 11; //11살
	//age라는 변수는 어디에 만들어져 있니? 주소가 몇번지니? 시작번지가 뭐니?
	// 연산자 age <--- &age 주소를 구해라!
	puts("===========");
	pNum = &age;  //age의 위치값을 알아낸 다음, 주소 전용 저장변수인 pNum에 주소값을 잠시 보관시켜 놔라!

	//즉 &age 의 값과 pNum에 갖고 있는 값은 동일한 값이다.
	//연산을 매번 하기 싫어서 pNum에 보관시켜 놓는 중!!!
	// scanf("%d", &age); == scanf("%d", pNum);

	printf("&age : %d번지\tpNum : %d번지\n", &age, pNum); //&age는 ram에 stack에 저장됨
}