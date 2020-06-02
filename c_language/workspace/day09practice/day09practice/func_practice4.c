#include<stdio.h>
//정수 2개를 입력받아 두 사이의 합을 구하는 함수
//예) 1, 4
//   1부터 4까지의 합을 리턴해 준다!

int getAccumulatedSum(int a, int b) {
	int sum = 0;
	if (a > b) {
		int temp;
		temp = a;
		a = b;
		b = temp;

	}

	for (int i = a; i <= b; i++){
		sum += i;
	}
	return sum;

}



void main() {
	int a = 0, b = 0;
	printf("정수 2개 입력 : "); scanf("%d %d", &a, &b);

	printf("%d~%d의 합 : %d\n", a, b, getAccumulatedSum(a, b));


}