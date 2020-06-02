#include<stdio.h>

//0~9까지의 데이터 인지 판별하는 함수 제작
//checkNumber 에 정수값이 0~9까지인지 알려줍니다. return은 1,0으로 나옵니다.

//내가 입력한 데이터가 0~9까지인지 판별하는 함수 제작
//return 은 true, false로 만든다.
//함수명을 만들때 접두사로  is- 라는 말을 붙인다!! ~~이니? 응, 아니
//예) isAlpha(데이터) 데이터가 Alpha이니? (알파벳이니?)
//   isDigit(데이터) argument가 숫자니? -> 응 아니, 1, 0으로 나온다.
//    그래서 리턴타입은 int로 만든다!
int isNumFromZeroToNine(int checkNum) {
	return checkNum >= 0 && checkNum <= 9 ? 1 : 0;
}

void main() {

	int num = 0;
	while (1) {
		printf("0~9까지의 숫자를 넣어 주세요 : "); scanf("%d", &num);

		if (isNumFromZeroToNine(num)) {

			printf("입력한 값 >>> %d\n", num);
			
		}
		else {
			puts("0~9사이의 값이 아닙니다. 다시 입력해주세요");
		}
	}
}