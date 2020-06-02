#include <stdio.h>
#include <stdlib.h>

void main(){
	int userInput = 0;

	//사용자에게 입력 받기
	printf("학생 수 입력 : "); scanf("%d", &userInput);
	//동적 메모리에 할당하기
	int *pNum = (int *)malloc(userInput * sizeof(int));
	
	//점수 입력하기
	for(int i = 0; i < userInput; i++){

	printf("%d번 학생 점수입력 : \n", i+1);
	scanf("%d", pNum + i);
	}

	//총점, 평균 구하기
	int total = 0;
	for(int i = 0; i < userInput; i++){

	total += *(pNum + i);
	}

	//점수 출력하기
	for(int i = 0; i < userInput; i++){

	printf("%d번 학생 점수 : %d\n", i + 1, *(pNum + i));
	}	

	printf("총점 : %d\t평균 : %.2f\n", total, (double)total / userInput);



}