#include<stdio.h>
/*
함수 2개를 만들어 봅시다.
1) 정수 3개의 덧셈 결과를 출력해 주는 함수 <-- 출력하는 함수래~
2) 정수 3개의 덧셈결 결과를 리턴해 주는 함수 <--- 리턴값이 있어야 된대~

출력 예) 1+2+3=6
예) 1+2+3=6

*/
void printSum(int a, int b, int c) {
	int res = a + b + c;
	printf("%d + %d + %d = %d\n", a, b, c, res);
}

int getSum(int a, int b, int c) {
	return a + b + c;
}

void main() {
	int a = 0, b = 0, c = 0;
	printf("정수 3개 입력 : "); scanf("%d %d %d", &a, &b, &c);

	printSum(a, b, c);

	printf("인수 3개의 리턴함수 결과 : %d + %d + %d = %d\n", a, b, c, getSum(a, b, c));


}