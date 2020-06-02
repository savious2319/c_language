#include<stdio.h>

//0~9까지의 데이터 인지 판별하는 함수 제작
//checkNumber 에 정수값이 0~9까지인지 알려줍니다. return은 1,0으로 나옵니다.
int isFromZeroToNine(int checkNumber){
	
	return 0 <= checkNumber && checkNumber <= 9 ? 1: 0;
}

void main() {

	//내가 입력한 데이터가 0~9까지인지 판별하는 함수 제작
	//return 은 true, false로 만든다.
	//함수명을 만들때 접두사로  is- 라는 말을 붙인다!! ~~이니? 응, 아니
	//예) isAlpha(데이터) 데이터가 Alpha이니? (알파벳이니?)
	//   isDigit(데이터) argument가 숫자니? -> 응 아니, 1, 0으로 나온다.
	//    그래서 리턴타입은 int로 만든다!
	//
int num = 0;
do{
		printf("0~9까지의 숫자를 넣어주세요 : ");
		scanf("%d", &num);

		if (isFromZeroToNine(num)) { // 1<=num && num<=9 : 이 부분을 함수로 대체했다.
					
			printf("입력값 >> %d\n", num);
			break;
		}
		else {
			printf("0~9가 아니네요.다시 입력해 주세요.\n");

		}
	} while (1);
}