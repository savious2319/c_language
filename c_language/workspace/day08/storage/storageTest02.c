#include <stdio.h>
//함수 작성 <-- "함수 선언"

extern int global;  // 선언!
                    // 정의가 아니다!
                    // 메모리에 만드는 게 아니라, 외부변수(전역변수) 찾는 것
                    //extern 키워드를 사용할 때, 값을 넣으면 안된다.
                    //extern int g = 10; <---- 오류

extern int st_global; // storageTest03.c 에서 static int st_global을 
                      // 외부 변수로 선언했는데..

void fct() {

	printf("Test01에서 선언한 global 변수의 값 : %d\n", global);
	//printf("Test03에서 선언한 st_global 변수의 값 : %d\n", st_global);

}