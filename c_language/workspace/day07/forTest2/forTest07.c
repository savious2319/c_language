#include<stdio.h>
#include<Windows.h>
/*
중첩 for문 (이중 for문)



*/
/*void main() {
//외부i for문 3번 반복
//내부j for문 4번 반복

for (int i = 0; i < 3; i++){
for (int j = 0; j < 4; j++){
printf("메세지\n");
Sleep(1000);
}
//Sleep(1000); //함수이름이 대문자로 시작된다!
//실행속도를 잠시 대기시킨다.
// 1000 ms == 1초
// 0.5 == 500 ms
}




}*/

void main() {

	/*

	//%d
	//%정수d  <--- 칸을 만든다.
	//%2d <---- 2칸을 만든 후 출력해라.
	//%-2d <----- 왼쪽으로 몰아서(왼쪽 정렬)해서 출력해라

	*/

	// 10:00:00 초부터
	// 10:00:01 초부터
	// 10:00:02 초부터
	// 10:00:03 초부터
	// 10:01:00 까지 출력해 보세요

	for (int i = 10; i < 13; i++) { //시
		for (int j = 0; j < 61; j++) { //분

			for (int k = 0; k < 61; k++) { //초
				if (k<10)
					printf("%d:0%d:0%d\n", i, j, k);

				else
					printf("%d:0%d:%d\n", i, j, k);
				Sleep(1000);
			}
		}

	}



}


