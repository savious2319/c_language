#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	//배열 요소 5개를 만들고....
	//각각의 요소에 임의의 값(랜덤한 값) 으로 대입시킬 거다!!

	//rand();  random (임의의 값) stdlib.h에 들어있다
	int r_num = rand();  // int 범위라곤 하지만 --> c언어에서는 0~32767

	printf("임의의 값 : %d\n", rand());

	r_num = rand();
	printf("임의의 값 : %d\n", rand());

	r_num = rand();
	printf("임의의 값 : %d\n", rand());

	//증상 : 기준점이 한번 잡히고 나서.. 계속 같은 값만 나오게 된다!
	//기분점을 매번 변경해 주면 정말 임의의 값을 받아올 수 있게 된다.
	//그 기준점을 시간으로 세팅하면 된다.
	//기준점을 세팅시킬 때 쓰는 함수가 srand() 이다
	// s 는 seed 값을 의미한다. (씨앗 == 시작!)
	// srand(시간);    <---- 얘는 한번만 위에서 선언해 놓으면 된다!
	// rand()가 실행될 때마다 변화된 시간을 기준점으로 잡게 되어 임의의 값에 변화를 주게 된다.

	// 시간을 구하는 함수 : time() <--- time.h  에 있는 표준함수
	//(unsigned)time(NULL); //현재 시간만 구해주면 돼! *포인터니까 NULL을 넣어 줌
			              //반환값은 구조체 타입이야!
						  //현재 시간을 갖고올 때, 1970년 1월 1일(epoch time 에포크 타임)을 기준으로 현재까지 경과된
						  //시간을 리턴해 준다! 정수형

	srand((unsigned)time(NULL));
	puts("====================");
	for (int i = 0; i < 10; i++){
	r_num = rand();
	printf("srand() 이후에 임의의 값 : %d\n", rand());

	}


}