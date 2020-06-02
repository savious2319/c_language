#include <stdio.h>
/*
	구조체 응용 - 자기참조(포인터) 구조체
		- 구조체 멤버변수가 자신의 포인터 변수로 선언되어 있는 구조체


*/
typedef struct Simple {
	int age; //나이!
	//struct Simple sim; // 에러 또는 오류!
	struct Simple *pM;   //pM은 자기타입의 포인터 변수이다!
}Simple;
void main() {

	Simple sim;
	Simple sim2;

	sim.age = 10;
	sim2.age = 20;

	sim.pM = &sim2;  //연결시키고 싶다 -> sim의 pM에다!!
  
	//주소값 출력을 하면서 비교해 보자
	//1. sim.pM 이 갖고 있는 값과 동일한 값은 sim2의 주소값(&sim2) 이다!
	//2. sim2의 pM 에는 현재 쓰레기 주소값이 들어 있다.
	sim2.pM = NULL; // 로드 / 리스트에 마지막
	printf("sim.pM 주소값 : %d\n", sim.pM);
	printf("sim.pM 주소값 : %d\n", &sim2);


}