#include<stdio.h>
/*
	scanf("서식문자만!!", &변수);
	scanf("서식문자만!!", 배열);   배열은 &를 붙이지 않는다. 왜? 배열은 이미 주소값을 상징하고 있으니까!

	& : ampersand (앰퍼샌드), 번지(를 구해주는) 연산자
		&변수 : 변수가 어디있는지 위치값을 알려줘~  (변수가 갖고 있는 데이터를 보여주는 게 아니라,
												(변수가 살고 있는 번지(=포인터)를 알려주는 거다)




*/
void main()

{
	//국어, 영어, 수학 점수를 입력하고,
	//총점과 평균을 구한 후,
	//과목점수, 총점, 평균을 출력하시오.
	//입력은 scanf() 함수를 이용해서 입력받기!	
	//과목점수 : 정수, 평균은 소수점 한자리
	
	int kScore = 0, eScore = 0, mScore = 0;
	char msg1[50] = "국어 점수를 입력하세요 : ";
	char msg2[50] = "영어 점수를 입력하세요 : ";
	char msg3[50] = "수학 점수를 입력하세요 : ";
	int totalScore = 0;
	double avgScore = 0.0;

		//float avg = 0.0f;
	puts("**** 성적 처리****");
	printf("%s", msg1); scanf("%d", &kScore);
	printf("%s", msg2); scanf("%d", &eScore);
	printf("%s", msg3); scanf("%d", &mScore);

	totalScore = kScore + eScore + mScore;
	avgScore = totalScore / 3.0;

	puts("-------------------------");
	puts("******** 성적 결과 *******");
	printf("국어 점수:%d\n영어 점수:%d\n수학 점수:%d\n총점:%d\n평균:%.1f\n",
		kScore, eScore, mScore, totalScore, avgScore);





}