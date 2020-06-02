#include<stdio.h>
//문2) 입력한 값이 알파벳인지 아닌지 판별하는 함수 제작!
//알파벳의 범위 (매개변수의 값 = A) 65 <=
int isAlpha(int checkNum) {

	return (checkNum >= 'A' && checkNum <= 'Z') || (checkNum >= 'a' && checkNum <= 'z') ? 1 : 0;
}


void main() {
	int num = 0;
	printf("정수 입력 : "); scanf("%d", &num);

	if (isAlpha(num)) {
		printf("입력한 정수 %d >>> 알파벳 %c\n", num, num);
	}
	else {
		printf("입력한 정수 %d >>> 알파벳이 아닙니다 : %c\n", num, num);
	}


}