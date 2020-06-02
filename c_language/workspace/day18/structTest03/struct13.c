#include<stdio.h>
//중첩 구조체
/*
	
	구조체 안에 구조체 멤버변수를 갖고 있다.
	
*/

// 좌표(점), 반지름
struct Point{
	int _x;
	int _y;

};

typedef struct Circle {
	struct Point p; //구조체 안에 구조체멤버가 들어있다!
	double radius;


} Circle;

void printData(int length, Circle *pWon);
void main(){

	//초기화 -> 출력
	//10, 20, 반지금 5.6
	//Circle won = { 10, 20, 5.6 };
	//Circle won2 = { {10,20}, 5.6 };
	//Circle won3 = { {10,}, 5.6 };   // y 멤버는 자동초기화 된다
	//Circle won4 = { 10,20 };  // radius는 0.0 으로 초기화가 된다

	Circle won[4] = {
		{ 10, 20, 5.6 },
		{ {10, 20}, 5.6 },
		{ { 10, }, 5.6 },
		{ 10,20 }

	};
	int length = sizeof(won) / sizeof(won[0]);
	printData(length, won);
}
	//각각의 데이터를 출력해 보세요!

void printData(int length, Circle *pWon) {
		for (int i = 0; i < 4; i++) {


			printf("x : %d점\n", pWon[i].p._x);
			printf("y : %d점\n", pWon[i].p._y);
			printf("반지름 : %.1fcm\n", pWon[i].radius);

		}
	}