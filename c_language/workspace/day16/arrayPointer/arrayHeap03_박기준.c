#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void inputScore();
void printScore(int, int*, int**);
void main()
{
	inputScore();
}
void inputScore() {
	int **ppAr = NULL;
	int banNum = 0;
	printf("반수를 입력해 주세요 : ");
	scanf("%d", &banNum);
	ppAr = (int**)malloc(sizeof(int*)*banNum);	//banNum갯수로 만들어야 한다.
	int *pStdNum = (int*)malloc(sizeof(int)*banNum);
	int rowTot = 0, all_Tot = 0;
	double rowAvg = 0.0, all_Avg = 0.0;
	int stdNum = 0;
	for (int i = 0; i < banNum; i++)
	{
		printf("%d반 학생 수는 몇명입니까? ", i + 1);
		scanf("%d", &pStdNum[i]);
		ppAr[i] = (int*)malloc(sizeof(int)*pStdNum[i]);
		printf("%d반 점수 입력\n", i + 1);
		for (int j = 0; j < pStdNum[i]; j++)
		{
			printf("%d반 %d번 점수 : ", i + 1, j + 1);
			scanf("%d", &ppAr[i][j]);
		}
	}
	//printScore(banNum, pStdNum, ppAr);
	for (int i = 0; i < banNum; i++) {
		printScore(banNum, pStdNum[i], ppAr);  
      //printScore(int, int, int**);  
	}

	for (int i = banNum - 1; i >= 0; i--)
	{
		free(ppAr[i]);
		printf("메모리해제\n");
	}
	free(pStdNum);
	free(ppAr);
}
void printScore(int ban, int *pNum, int **ppAr) {
	int rowTot = 0, all_Tot = 0;
	double rowAvg = 0.0, all_Avg = 0.0;
	int stdNum = 0;
	system("cls");
	for (int i = 0; i < ban; i++)
	{
		rowTot = 0;
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━┓");

		printf("┃ %d반 점수 출력\t%d명\t ┃", i + 1, pNum[i]);

		puts("");
		puts("┣━━━━━━━━━━━━━━━┳━━━━━━━━┫");


		for (int j = 0; j < pNum[i]; j++)
		{
			printf("┃ %2d반\t  %2d번\t┃ %5d점┃", i + 1, j + 1, ppAr[i][j]);
			puts("");
			rowTot += ppAr[i][j];
		}
		puts("┣━━━━━━━━━━━━━━━╋━━━━━━━━┫");
		rowAvg = (double)rowTot / pNum[i];
		printf("┃ %2d반\t  총점\t┃ %5d점┃\n┃ %2d반\t  평균\t┃ %5.1f점┃\n", i + 1, rowTot, i + 1, rowAvg);
		puts("┗━━━━━━━━━━━━━━━┻━━━━━━━━┛");

		all_Tot += rowTot;
		stdNum += pNum[i];

	}
	all_Avg = (double)all_Tot / stdNum;
	puts("┏━━━━━━━━━━━━━━━━━━━━━━━━┓");
	puts("┃ 시험 결과              ┃");
	puts("┣━━━━━━━━━━━━━━━┳━━━━━━━━┫");
	printf("┃ 학년\t  총점\t┃ %5d점┃\n", all_Tot);
	printf("┃ 학년\t  평균\t┃ %5.1f점┃\n", all_Avg);
	puts("┗━━━━━━━━━━━━━━━┻━━━━━━━━┛");


}
