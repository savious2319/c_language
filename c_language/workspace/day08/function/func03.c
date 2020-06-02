#include<stdio.h>
/*
	함수의 값전달
	인자(argument)를 넣어서 호출하면!!!
	parameter가 인자값을 받는다!


*/
int printSum(int n1, int n2) {
	int res = n1 + n2;
	printf("덧셈 결과 : %d+%d=%d\n", n1, n2, res);
	
}

int printMinus(int n1, int n2) {
	int res = n1 - n2;
	printf("%d-%d=%d\n", n1, n2, res);

	//결과에 대한 절대값 구하기! 두 수의 거리
	if (res < 0) {
		res = -res;
	}
	printf("%d과 %d의 절대값 %d\n", n1, n2, res);

}
void main() {

	//각 함수를 만들고 그 함수에서 결과값을 출력해 보기
	printSum(10, 20);  
	printMinus(20, 30);
}