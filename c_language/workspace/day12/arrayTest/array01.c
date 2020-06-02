#include <stdio.h>



void main() {

	//배열: 1. 배열의 끝을 컴파일러가 검사하지 않는다 --> c언어의 특징
	//			--> 배열을 매개변수로 전달할 때, "반드시!!" 갯수(=요소갯수 몇칸인데?)를 알려줘야 한다 
	//      2. 배열명은 포인터 상수다 = 그래서 포인터변수 = 배열명;

	//배열선언과 초기화
	int arScore0[5];				//쓰레기값
	int arScore[3] = { 10, 20, 30 };
	int arScore2[4] = { 11, 12 }; // 나머지 2개 방은 자동으로 0이 채워진다.

	//배열 요소 호출 == 배열명[인덱스] 대괄호 연산자 사용
	//배열의 첫번째(서수) 값을 호출할때는 기준값(기수)는 항상 0부터 시작해야 한다!!!
	// -> 첫번째 방번호가 0번 이야~~!

	//10을 출력하고 싶다!
	//arScore2[1];   //1번방 방번호 -> 두번째에 들어 있는 값을 불러낸다!
	printf("arScore[0] : %d\n", arScore2[0]); //<--- 11
	printf("arScore[1] : %d\n", arScore2[1]); //<--- 12

	//10, 20, 30, 40, 50 점으로 초기화 하는 배열을 만들고,
	//일괄처리(for문 이용)로 값을 출력해 보세요

	int arScore3[5] = { 10, 20, 30, 40, 50 };

	int total = 0;
	for (int i = 0; i < 5; i++){
		printf("arScore3[%d] : %d점\n",i, arScore3[i]);
		total += arScore3[i];
	}
		printf("총점 : %d\n", total);


	//배열 선언2 : 최초 선언시, 초기값이 있다면, 인덱스를 생략할 수 있다!
	//초기값 : 1, 2, 3, 4
	int arNum2[] = {1,2,3,4}; //배열 갯수와 초기값의 갯수가 동일하다면 인덱스 생략 가능!!!

	for (int i = 0; i < 4; i++){ 
	printf("arNum2[%d] : %d\n",i, arNum2[i]);

	}
	//printf("arNum2[1] : %d\n", arNum2[1]);
	//printf("arNum2[2] : %d\n", arNum2[2]);
	//printf("arNum2[3] : %d\n", arNum2[3]);

	int arRandom[] = { 34,235,4363,4656,534,7653,746,345,65365,656,546,54,65,4,64,5 };
	//총합 구하기
	//평균 구하기
	//배열의 크기 구하기(byte) 구하기 -> 갯수를 구할 수 있다.
	printf("arRandom의 크기 : %dbyte\n", sizeof(arRandom)); //sizeof()안에 집어넣으면 크기를 알 수 있다
	//int size(또는 length)
	int size = sizeof(arRandom) / 4;
	//size = sizeof(arRandom) / sizeof(int);
	size = sizeof(arRandom) / sizeof(arRandom[0]); //100점 짜리
	total = 0; // 반드시 초기화를 시켜줘야 한다!!!
	for (int i = 0; i < size; i++)  //갯수(칸수)
	{
		total += arRandom[i];
		
	}

	printf("arRandom의 총합 : %d\n", total);
	printf("arRandom의 평균 : %.2f\n", (double)total / size);







}