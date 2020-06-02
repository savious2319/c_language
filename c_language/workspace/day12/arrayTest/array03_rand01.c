#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	// 문제1] 1~9까지 임의의 정수 3개 배열에 저장하기 (난수 : 0~32767)
	// * 발생된 난수를 1~9까지 추려내는 방법 해결하기!
	/*int r_num = rand();
	int arRandNum[3] = { 0 };

	srand((unsigned)time(NULL));
	puts("====================");
	for (int i = 0; i < 3; i++) {
		arRandNum[i] = rand() % 9 + 1;
	}
	printf("%d\n", arRandNum[0]);
	printf("%d\n", arRandNum[1]);
	printf("%d\n", arRandNum[2]);

	*/

	//문제2] 가위 바위 보 게임 만들기
	//		출력결과]
	//		**** 컴퓨터와 가위바위보 게임****
	//		1. 가위 2. 바위 3. 보
	//		무엇을 내시겠습니까? 1
	//		1. 가위
	//		결과 : 1. 가위 >> 이겼습니다. or 비겼습니다. or 졌습니다.
	int choiceNum = 0;
	int r_num = 0;
	while (1) {
		puts("**** 컴퓨터와 가위바위보 게임****");
		puts("1. 가위 2. 바위 3. 보 4. 종료");
		printf("무엇을 내시겠습니까?"); scanf("%d", &choiceNum);
		system("cls");
		r_num = rand() % 3 + 1;

		if (choiceNum == 4) { break; }

		switch (choiceNum) {
		case 1:
			if (choiceNum == r_num) {
				printf("사용자 : %d\n", choiceNum);
				printf("컴퓨터 : %d\n", r_num);
				puts("비겼습니다. 다시 한번 도전!\n");
			}
			else if (choiceNum < r_num && 3 != r_num) {
				printf("사용자 : %d\n", choiceNum);
				printf("컴퓨터 : %d\n", r_num);
				puts("졌습니다..아쉽네요\n");
			}
			else if (choiceNum < r_num) {
				printf("사용자 : %d\n", choiceNum);
				printf("컴퓨터 : %d\n", r_num);
				puts("이겼습니다 축하합니다!\n");
			}
			break;
		case 2:
			if (choiceNum > r_num) {
				printf("사용자 : %d\n", choiceNum);
				printf("컴퓨터 : %d\n", r_num);
				puts("이겼습니다 축하합니다!\n");;
			}
			else if (choiceNum == r_num) {
				printf("사용자 : %d\n", choiceNum);
				printf("컴퓨터 : %d\n", r_num);
				puts("비겼습니다. 다시 한번 도전!\n");
			}
			else if (choiceNum < r_num) {
				printf("사용자 : %d\n", choiceNum);
				printf("컴퓨터 : %d\n", r_num);
				puts("졌습니다..아쉽네요\n");
			}
			break;

		case 3:
			if (choiceNum > r_num && 2 != r_num) {
				printf("사용자 : %d\n", choiceNum);
				printf("컴퓨터 : %d\n", r_num);
				puts("졌습니다..아쉽네요");
			}
			else if (choiceNum > r_num) {
				printf("사용자 : %d\n", choiceNum);
				printf("컴퓨터 : %d\n", r_num);
				puts("이겼습니다 축하합니다!\n");
			}
			else if (choiceNum == r_num) {
				printf("사용자 : %d\n", choiceNum);
				printf("컴퓨터 : %d\n", r_num);
				puts("비겼습니다. 다시 한번 도전!\n");;
			}
			break;

		}
	}
	//문제3] 로또 번호 6개 출력하기 (로또 1~45)
	//	***이번 주 로또 번호 추천***
	//	32, 45, 1, 2, 3, 6
	//  행운이 있길 기대합니다~!!!
	/*int arRandNum3[6] = { 0 };
	puts("****이번 주 로또 번호 추천****");
	for (int i = 0; i < 6; i++) {
		arRandNum3[i] = rand() % 45 + 1;
	}
	printf("%d, %d, %d, %d, %d, %d\n", arRandNum3[0], arRandNum3[1], arRandNum3[2], arRandNum3[3], arRandNum3[4], arRandNum3[5]);


	//문제3-1] 오름차순으로 출력해 주세요 (스위칭 이용 - 버블정렬)
	// 1, 2, 3, -> 작은 숫자부터 
	// for(i) {  <--첫
	//   for(j){ <---두
	puts("****이번 주 로또 번호 추천(오름차순)****");
	for (int i = 0; i < 6; i++) {
		for (int j = i + 1; j < 6; j++){
			if (arRandNum3[i] > arRandNum3[j]){
				int temp = arRandNum3[i];
				arRandNum3[i] = arRandNum3[j];
				arRandNum3[j] = temp;
			}
			}
		}
		
	printf("%d, %d, %d, %d, %d, %d\n", arRandNum3[0], arRandNum3[1], arRandNum3[2], arRandNum3[3], arRandNum3[4], arRandNum3[5]);*/
}
/*
for (int i = 0; i < 6; i++) {
for (int j = i + 1; j < 6; j++) {
if (arLottoNum[i] > arLottoNum[j]) {
temp = arLottoNum[i];
arLottoNum[i] = arLottoNum[j];
arLottoNum[j] = temp;
}
else {
continue;
}

*/

