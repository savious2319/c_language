#include <stdio.h>
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
int isNumWithinRange(int start, int end, int check) {
	return check >= start && check <= end ? 1 : 0;

}

void main() {
	int sNum = 0, eNum = 0, cNum = 0;
	printf("시작값을 입력하세요 : "); scanf("%d", &sNum);
	printf("끝값을 입력하세요 : "); scanf("%d", &eNum);
	printf("체크하고 싶은 값을 입력하세요 : ");  scanf("%d", &cNum);

	if (isNumWithinRange(sNum, eNum, cNum)) {
		printf("입력한 값 : %d는 시작값 :%d와 끝값 :%d 범위 안에 있습니다\n", cNum, sNum, eNum);
	}
	else {
		printf("입력한 값 :%d는 시작값 :%d와 끝값 :%d 범위 밖입니다\n", cNum, sNum, eNum);

	}

}