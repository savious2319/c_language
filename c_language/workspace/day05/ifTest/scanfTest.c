#include<stdio.h>

void main() {
	// 숫자 입력해야 하는데, 문자가 입력된다면???
	// 점수 입력 : D  --> 그러면 잘못입력 이런식으로....
	int num = 0;
	printf("정수 입력 : ");
	int f_num = scanf("%d", &num);  // f_num은  scanf()가 정상적으로 10진수 값을 입력받을 때, 1 그렇지 않을 때는 0을 가져오게 된다.

	printf("데이터 오류판별값 : %d\n", f_num);



}