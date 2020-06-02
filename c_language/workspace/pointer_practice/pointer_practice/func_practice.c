#include <stdio.h>
//정수 2개를 입력받아 짝수 번호만 출력하는 함수
//예) 1, 10
//   1부터 10까지의 짝수를 리턴해 준다!
void printEvenNum(int x, int y) {
	if (x > y) {
		int temp = x;
		x = y;
		y = temp;
	}

	for (int i = x; i <= y; i++){
		if (i % 3 == 0 && i % 9 != 0)
			printf("%d\n", i);
		}
}


void main() {

	int num1 = 0, num2 = 0;
	printf("정수 2개 입력 : "); scanf("%d %d", &num1, &num2);
	printEvenNum(num1, num2);



}