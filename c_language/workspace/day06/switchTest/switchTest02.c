#include<stdio.h>

void main() {

	//포켓볼은 1~15번 숫자가 있다.
	//1~7번은 low볼
	//8번은 middle볼
	//9~15번은 high 볼이다.
	//볼 번호를 선택한 후(입력받은 후), 해당 볼이 "low볼" "high볼" "middle볼" 입니다 라는 메세지가 나올 수 있게 하자
	// 1)if else로 만들어보기
	// 2)switch로 만들어보기

	//1)if로
	int num = 0;
	printf("볼 번호 선택: "); scanf("%d", &num);
	/*if (num >= 1 && num <= 7) {
		printf("%d번 선택 \"low볼 입니다\"\n", num);
		puts("low볼");
	}
	else if (num >= 9 && num <= 15) {
		puts("high볼");
	}
	else {
		puts("middle볼");
	}*/


	//2)switch로

	switch (num)
	{
	case 1: 
	case 2:
	case 3: 
	case 4: 
	case 5: 
	case 6: 
	case 7: printf("%d번 선택 \"low볼 입니다\"\n", num); break;
	case 8: printf("%d번 선택 \"low볼 입니다\"\n", num); break;
	case 9: 
	case 10: 
	case 11: 
	case 12: 
	case 13: 
	case 14: 
	case 15: printf("%d번 선택 \"low볼 입니다\"\n", num); break;
	}
}