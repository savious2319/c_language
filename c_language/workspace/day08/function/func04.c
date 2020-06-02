#include<stdio.h>
	//두 정수를 입력받아
	//덧셈, 뺄셈, 곱셈, 나눗셈에 대한 결과값을 출력할 수 있도록 한다.
	//덧셉 함수 : getSum();
	//뺄셈 함수 : getMinus();
	//곱셈 함수 : getMul();
	//나눗셈 : getDiv();
	//출력 결과는 main 함수에서 출력할 것! <---hint 각 함수에서 처리한 결과값을 반환시켜야 한다
	//예) 10, 20 입력
	// 덧셈 : 10+20=30
	// 뺄셈 : 10-20=-10
	// 곱셈 : 10*20=200
	// 나눗셈 : 10/20=0

//return 제어하기
//int n1 = 0, n2 = 0;

int getSum(int n1, int n2);
int getMinus(int n1, int n2);
int getMul(int n1, int n2);
int getDiv(int n1, int n2);

void printCalc(int x, int y) {

	int n1 = x;
	int n2 = y;

	printf("%d + %d = %d\n", n1, n2, getSum(n1, n2)); // getSum은 변수이다
	printf("%d - %d = %d\n", n1, n2, getMinus(n1, n2));
	printf("%d * %d = %d\n", n1, n2, getMul(n1, n2));
	printf("%d / %d = %d\n", n1, n2, getDiv(n1, n2));

}

void main() {


	int n1 = 0, n2 = 0;
	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &n1, &n2);

	printCalc(n1, n2);


}

int getSum(int n1, int n2) {
	return n1 + n2;

}
int getMinus(int n1, int n2) {
	return n1 - n2;
}
int getMul(int n1, int n2) {
	return n1 * n2;
}
int getDiv(int n1, int n2) {
	return n1 / n2;
}