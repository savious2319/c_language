#include<stdio.h>
/*
	사용자가 체크하고자 하는 범위를 넣은 후, 
	입력값이 범위안에 있는 지 없는지를 판별하는 함수
	인자 3개가 필요하다!
	첫번째 인자, 범위 시작값
	두번째 인자, 범위 끝값
	세번째 인자, 체크하고자 하는 값
	return 값은 true, false Boolean == c언어에서는 논리값 1, 0이라고 한다.
	            1    0
*/
/*

*/
int isInputNumWithinTwoNums(int start, int end, int check) {
	return start <= check && end >= check ? 1 : 0;

}

int isAlpha(int check) {

	return check >= 65 && check <= 90 || check >= 97 && check <= 122 ? 1 : 0;
	//return (check >= 'A' && check <= 'Z') || (check >= 'a' && check <= 'z') ? 1 : 0;

}

void main() {
	/*int sNum = 0, eNum = 0, cNum = 0;
	printf("시작값 입력 : "); scanf("%d", &sNum);
	printf("범위 끝값 입력 : "); scanf("%d", &eNum);
	printf("입력값 : "); scanf("%d", &cNum);

	
	if (isInputNumWithinTwoNums(sNum, eNum, cNum)) {
		printf("입력값: %d은 시작값: %d과 끝값: %d 사이에 있는 값입니다.\n", cNum, sNum, eNum);
	}
	else {
		printf("입력값: %d은 시작값: %d과 끝값: %d 범위 밖의 수 입니다.\n", cNum, sNum, eNum);
	}*/
	
	//문2) 입력한 값이 알파벳인지 아닌지 판별하는 함수 제작!
	     //알파벳의 범위 (매개변수의 값 = A) 65 <=
	int check = ' ';
	printf("입력 : ");  scanf("%d", &check);

	if (isAlpha(check)) {
		printf("알파벳 %c를 입력하셨습니다\n", check);
	}
	else {
		printf("알파벳이 아닙니다\n 입력값: %c\n", check);
	}
}