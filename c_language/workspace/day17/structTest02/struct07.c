#include "myFriend.h"


typedef unsigned char* U_CHAR_PTR;

FRD inputData(FRD person) { // return 하는 타입이랑 함수 타입이랑 맞아야 한다!!!
	printf("이름을 입력해 주세요 : "); gets(person.name);       // gets() 문자열 받는 함수
	printf("핸드폰 번호를 입력해 주세요 : "); gets(person.number);
	printf("키를 입력해 주세요 : "); scanf("%lf", &person.height);
	//getchar();
	puts("");
	return person;
}

void inputDataPtr(FRD *person) {
	//fflush(stdin); //표준입력장치에 있는 버퍼를 다 밀어버려라! : ms계열의 컴파일러만 사용하는 거! 호환성 떨어짐

	getchar();
	printf("이름을 입력해 주세요 : "); gets(person->name);  //person는 주소다!     // gets() 문자열 받는 함수
	printf("핸드폰 번호를 입력해 주세요 : "); gets(person->number);
	printf("키를 입력해 주세요 : "); scanf("%lf", &person->height); // -> 가 & 보다 연산자 순위에서 높다! person이 가리키는 height가서 주소값에 입력을 받어!
	puts("");

}
void main() {

	FRD frd1 = { "백성민", "01034005125", 176.7 },
		frd2 = { "이순신", "01034005125", 167.7 },
		frd3 = { "박문수", "01034005125", 167.7 },
		frd4 = { 0 }, frd5 = { 0 };	

	printFriend(frd1);
	//printFriend(frd2);
	//printFriend(frd3);

	frd4 = inputData(frd4); //frd4 타입은 구조체
	//inputData(frd5);

	inputDataPtr(&frd5);  //Call by pointer
				     //인자로 frd5의 주소를 넘기자
					 //(함수의 매개변수가 포인터로 받겠지?)
				     //함수 내부에서 매개변수를 통해서
					 // scanf()로 받으면 된다! 이때, 
					 // 매개변수(를 통해)  멤버변수 호출 (*).  or  ->

	printFriend(frd4); //  입력된 값 확인
	printFriend(frd5);

}