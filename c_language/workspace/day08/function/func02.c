#include<stdio.h>
void goHome();  //정상 실행

void goMarket() {
	puts("고등어 구입");
	puts("미나리 구입");
	puts("콩나물 구입");
	goHome();
}
void goHome() {

	//goMarket();
	puts("집에 갑니다");
	//goMarket();
	//자기 스스로 호출할 수 있다 : "재귀 호출" : 소스간결 -> 메모리 효율이 나빠진다.
	//                            재귀호출에서는 함수를 종료하는 제어문이 반드시 필요하다!
}

void main() {

	goMarket(); // 호출부 -> 다른 함수에서도 호출할 수 있다.

	//goHome();

}