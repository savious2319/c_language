#include<stdio.h>
//함수 선언부!!!

//시장에 가서 반찬 3개를 사옵니다.
//puts("고등어 구입");
//puts("미나리 구입");
//puts("콩나물 구입");

// 시장에 가다! 라는 함수 만들어서 위에 3문장 출력해 보기
void goMarket();
void goHome();

void main() {

	goMarket(); // 25 -> 11 -> 12 ~ 14 -> 16 -> 25(함수 이름) return타입이 void이기때문에 함수이다

	goHome();

}

void goMarket() {
	puts("고등어 구입");
	puts("미나리 구입");
	puts("콩나물 구입");

}

void goHome() {

	puts("집에 갑니다");
}
