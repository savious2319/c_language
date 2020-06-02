#include<stdio.h>

//정수 2개를 입력받아 두 사이의 합을 구하는 함수
//예) 1, 4
//   1부터 4까지의 합을 리턴해 준다!

int getSumOfTwoNums(int num1, int num2) { // 시작값이 끝값보다 클때 두 값을 바꾸면(switching) for문 한번만 쓸 수 있다
	int sum = 0;
	if (num1 > num2) {
		/*
		num1 = num2; //num2가 num1에 들어가는 순간 num1의 값이 사라진다! 그래서 num1를 담을 또 다른 변수가 필요하다! int temp
		num2 = num1;
		*/
		//int temp = 0;
		int temp;
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for (int i = num1; i <= num2; i++) {
		sum += i;
	}
	return sum;
}


void main() {
	int num1 = 0, num2 = 0;
	//printf("정수 2개 입력: "); scanf("%d %d", &num1, &num2);
	printf("시작값 : "); scanf("%d", &num1);
	printf("끝 값 : "); scanf("%d", &num2);
	//printf("두 정수의 합 : \n", getSumOfTwoNums(num1,num2));
	printf("%d~%d까지의 합 : %d\n", num1, num2, getSumOfTwoNums(num1, num2));
}