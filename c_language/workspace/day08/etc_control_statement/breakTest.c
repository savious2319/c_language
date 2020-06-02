#include<stdio.h>
/*
	break : 1) switch 2) 루프(반복문)
	        착각 -> if문 종료할 때, 함수 종료시킬 때



*/
void main() {

	/*for (int i = 0; i >= 0; i += 1000000){ // 무한 루프가 아님. int 최대값 이후 음수의 값으로 변함 -2157675 >= 0 성립이 안됨

		printf("%d. 메세지\n", i);

	}*/

	//continue : 반복문을 유지할 것
	// 1) for : for문의 "증감식"으로 이동할 것
	// 2) while, do~while : "조건식"으로 직행할 것
	//3의 배수 출력
	//9의 배수 출력하지 말것
	for (int i = 0; i < 100; i++){
		/*if (i % 9 == 0) {
			continue;
		}
		if (i % 3 == 0) {
			
			printf("%d. 메세지\n", i);
		}*/
		if (i % 3 == 0 && i % 9 != 0) {
			printf("%d. 메세지\n", i);
		}
	}




}