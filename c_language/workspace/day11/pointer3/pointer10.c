#include <stdio.h>



void main() {
	int sNum = 0;
	int total = 0;
	int avg = 0;

	//값을 scanf()로 입력받는다.
	printf("학생 수 입력 : ");
	scanf("%d", &sNum);
	int *pNum = (int *)malloc(sNum * sizeof(int)); 

	for (int i = 0; i < sNum; i++)
	{
		printf("%d번 점수 : ", i + 1);
		scanf("%d", pNum + i);

	}
	
	//점수출력, 마지막에 총점, 평균 구하기
	for (int i = 0; i < sNum; i++)
	{
		printf("%d번 점수 : %d\n", i + 1, *(pNum + i));
	}

	for (int i = 0; i < sNum; i++)
	{
		total += *(pNum + i);
	}

	avg = total / sNum;

	printf("총점 : %d\t평균 : %d\n", total, avg);
	

	//메모리 해제한다.
	free(pNum); 

	//stack 영역 초기화
	pNum = NULL; //완전 초기화


	// for문으로 생성, 해제 만들어보기
	
	//재할당
	//2번째 반!
	scanf("몇개 반?");
	

	scanf("학생수 입력");
	pNum = 메모리할당(학생수);
	입력(학생수, 주소);
	출력(학생수, 주소); //점수와, 총점(getTotal()), 평균(getAvg()) 구해서 출력해 줘!

	free(pNum);
	pNum = 0;

	//3번째 반!
	scanf("학생수 입력");
	pNum = 메모리할당(학생수);
	입력(학생수, 주소);
	출력(학생수, 주소); //점수와, 총점(getTotal()), 평균(getAvg()) 구해서 출력해 줘!

}