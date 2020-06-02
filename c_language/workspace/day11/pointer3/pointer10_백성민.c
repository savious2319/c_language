#include <stdio.h>
#include <stdlib.h>

//학생 수 입력받는 함수
void getSNumInput(int *sNum) {// 할당할 수를 입력받기
	printf("학생 수 입력 : ");
	scanf("%d", sNum);
}
//입력받는 함수
int* sNumInputAlloc(int sNum) {//입력받은 수만큼 동적 메모리 할당하기
	
	return (int *)malloc(sNum * sizeof(int)); //할당된 메모리를 리턴해준다
}

//학생 점수 입력 함수
void sGradeInput(int sNum, int *pNum) { //main에서 받은 두 인자를 int sNum과 int *pNum이 매개변수로 받는다
	puts("점수는 0~100 사이로 입력해주세요.\n");
	for (int i = 0; i < sNum; i++)
	{
		printf("%d번 학생 점수 : ", i + 1);
		scanf("%d", pNum + i);
	}
}

// 점수총점 평균 출력함수
void printGradeTotalAvg(int sNum, int *pNum, int total) {
	puts("=================");
	for (int i = 0; i < sNum; i++)
	{
		printf("%d번 학생 점수 : %d\n", i + 1, *(pNum + i));
	}
	puts("=================");
	for (int i = 0; i < sNum; i++)
	{
		total += *(pNum + i); //총점
	}
	
	printf("총점 : %d\n평균 : %.2f\n", total, (double)total / sNum);
}

void main() {
	int sNum = 0; // 학생수 초기화
	int total = 0;
//	int *pNum = NULL; 동적 메모리 할당을 위한 포인터 생성 

	getSNumInput(&sNum); // 학생수 입력하는 함수 호출

	int *pNum = sNumInputAlloc(sNum); // 리턴받은 값을 포인터 변수에 저장한다

	sGradeInput(sNum, pNum); //학생 점수 함수에게 두개의 학생수 인자와 포인터 인자를 보내야 한다

	printGradeTotalAvg(sNum, pNum, total); //총점과 평균 함수에게 학생수, 포인터, total의 인자를 보내야 한다


	//메모리 해제한다.
	free(pNum); 

	//stack 영역 초기화
	pNum = NULL; 

	//printf("%d\n", pNum);


}