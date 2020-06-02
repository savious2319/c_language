#include<stdio.h>
/*
	반복문 - for


*/
void main() {
	//특정 메세지를 반복하다가 사용자가 원할 때 종료 시키기
	//예) 지문 >> (종료하려면  q 를 누르세요 : )

	//반복횟는 정해지지 않았다!
	//하지만, q를 누르면 프로그램이 종료된다.
	char quit = ' ';
	int cnt = 0;
	for ( ; ; ) {
		puts("이 메세지를 반복시킵니다.");
		printf("반복횟수 : %d\t종료하려면 q(Q)를 누르세요: ", ++cnt); 
		//scanf("%c%c", &quit, &quit); 안됨
		//quit = getchar();
		if (quit == 'q' || quit == 'Q') { break; }
		getchar();
	}



	puts("프로그램 종료");


}