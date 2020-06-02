#include<stdio.h>
// 전역변수 영역

int global; // 자동 초기환 된다

void fct3(); //fct라는 영어단어는 함수야!
            //함수의 머릿부를 "전방 선언" 했다
            //"함수원형"

extern int global2; // "전방 선언"
extern int st_global;
void main() {

	int local = 0; // 초기화 안함 쓰레기 값 <=== 에러 '무시'
	
	printf("전역변수 global : %d\n", global);

	printf("지역변수 global : %d\n", local);

	fct3();

	printf("전역변수 global2 : %d\n", global2);

	printf("정적변수 st_global : %d\n", st_global);
}


int global2 = 999;