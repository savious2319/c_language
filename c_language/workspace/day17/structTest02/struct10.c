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

	//b�� 'B'�� �ٲٰ� �ʹ�!
	//strcpy(arData[0], "aBc");
	arData[0].ar[1] = 'B';  //�迭�� ù��° ���� ã�� �� ù��° ĭ�� �ι�° ĭ�� 'B'�� ����

	//g�� �빮�ڷ� �ٲٰ� �ʹ�!
	//strcpy(arData[0], "aBc");
	arData[1].ar[2] = 'G';
	//5�� 6�� 15�� 16���� �ٲ���!
	
	arData[2]._x = 15;
	arData[2]._y = 16;

	arData[2].ar[2] = 'J';
	printType(3, arData);   //���� ���� 3

}
void printType(int length, Type *p){
	for (int i = 0; i < length; i++){

		printf("%s %d %d\n", p[i].ar, p[i]._x, p[i]._y);

	}


}