#include <stdio.h>
/*
	구조체 타입을 지정할 수 있다.
	typedef 이라는 키워드를 통해 원하는 타입으로 지정할  수 있다.

	typedef (원하는 타입) (바꾸고자 하는 타입) ;
	typedef     int            INT;
	typedef     int *          INT_P;    // int*를 INT_P로 바꿔서 쓰겠다

*/
typedef struct MyFriend {
	int bun; char name[10]; 
}  Friend, FRD, _FRD ; //원하는 타입    struct MyFriend -> Friend로 

//struct MyFriend 라는 타입을 Friend  만 써도 통한다!
void main() {

	//여러가지로 쓸 수 있다
	struct MyFriend hgd = { 0 };
	Friend pms = { 0 };
	FRD iss = { 0 };
	_FRD iss2 = { 0 };


}