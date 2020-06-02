#include <stdio.h>

typedef struct MyType {

	char ar[10];
	int _x;
	int _y;

}Type;
void printType(int, Type *p);
void main() {

	Type arData[3] = {
		"abc", 1, 2,
		"efg", 3, 4,
		"hij", 5, 6,
	};

	//b를 'B'로 바꾸고 싶다!
	//strcpy(arData[0], "aBc");
	arData[0].ar[1] = 'B';  //배열의 첫번째 행을 찾고 그 첫번째 칸의 두번째 칸에 'B'를 대입

	//g를 대문자로 바꾸고 싶다!
	//strcpy(arData[0], "aBc");
	arData[1].ar[2] = 'G';
	//5와 6을 15와 16으로 바꾸자!
	
	arData[2]._x = 15;
	arData[2]._y = 16;

	arData[2].ar[2] = 'J';
	printType(3, arData);   //행의 갯수 3

}
void printType(int length, Type *p){
	for (int i = 0; i < length; i++){

		printf("%s %d %d\n", p[i].ar, p[i]._x, p[i]._y);

	}


}