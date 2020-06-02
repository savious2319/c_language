#include <stdio.h>

void main() {

	puts("문제1] 배열요소 갯수 출력하기 cnt 이용");
	int arNum[5] = { 10, 20, 30, 40, 50 };

	int size = sizeof(arNum) / sizeof(arNum[0]);
	int cnt = 0;
	for (int i = 0; i < size; i++){
		cnt++;
	}
	printf("arNum은 %d개의 요소가 존재합니다.\n", cnt);
	puts("=========================================");
	puts("문제2] 정수값 10개를 임의의 수로 초기화 하고 3의 배수가 몇개 있는지 갯수파악하기");
	int arNum2[10] = {43,5,34,65,734,6,54,67,584,5764};
	size = sizeof(arNum2) / sizeof(arNum2[0]);
	for (int i = 0; i < size; i++){
		if (arNum2[i] % 3 == 0) {
			cnt++;

			//printf("%d. 3의 배수 : %d\n", i+1, arNum2[i]);  //i+1은 몇번째 순서에 있는지 알수 있다.
			printf("%d. 3의 배수 : %d\n", cnt, arNum2[i]);  //cnt는 몇개 있는지 알수 있다.
		}
	}
	//printf("arNum2는 %d개의 3의 배수가 존재합니다.\n", cnt);


}