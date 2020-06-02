#include <stdio.h>
#include <stdlib.h>
/*

	2차원 동적 배열

	이번엔 행의 갯수를 n개로 만들어 보자!  행 == 반수
	그리고 행에 따라 열도 m개 만들어 보자! 열 == (행마다) 학생 수

	int **ppBan = 행은 열을 받을 때 다시 malloc을 써야 한다!
				  그래서 ppBan은 ** 포인터로 받아야 한다!


*/
void main() {

	int banNum = 0; //반수 입력용 변수
	printf("반수 입력 해 주세요 : "); scanf("%d", &banNum);

	int **ppBan = (int **)malloc(sizeof(int *) * banNum);   // 2개반으로 고정 -> banNum 갯수로 만들어야 한다!
	int *pHak = (int *)malloc(sizeof(int) * banNum);
	puts("===입력부===");
	for (int i = 0; i < banNum; i++){

		//저장소 만들기! banNum 행마다 열을 입력받아 저장소를 만들 수 있어야 한다!
		int hak = 0;
		printf("%d반 학생수는 몇 명입니까? ", i + 1); scanf("%d", &hak);
		pHak[i] = hak;  //pHak에 있는 요소를 갖고 입력, 출력, 평균, 총점.... 루프에서 써먹을 수 있다.
		ppBan[i] = (int *)malloc(sizeof(int) * hak);
		for (int j = 0; j < pHak[i]; j++){
		//입력
		printf("%d반 %d번 점수 : ", i+1, j+1); scanf("%d", &ppBan[i][j]);
		}
		}
	puts("입력 종료");
	puts("-------------");
	puts("===출력부===");
	int rowTot = 0, all_total = 0, sum = 0;
	double all_avg = 0.0;
	for (int i = 0; i < banNum; i++) {
		for (int j = 0; j < pHak[i]; j++) {
			printf("%d반 %d번 점수 : %d\n", i + 1, j + 1, ppBan[i][j]);
			rowTot += ppBan[i][j];
			all_total += ppBan[i][j];
		}
		sum += pHak[i];
		printf("%d\n", sum);
		printf("---%d반 총점 : %d점\t반 평균 : %.2f점---\n", i + 1, rowTot, rowTot / (double)pHak[i]);
		puts("----------------------");
		rowTot = 0;
	}
	all_avg = all_total / (double)sum;
	printf("---전체 총점 : %d점\t전체 평균 : %.2f점---\n", all_total, all_avg);

	for (int i = 0; i < banNum; i++) {
		free(ppBan[(banNum - 1) - i] );
		ppBan[i] = NULL;
		printf("ppBan[%d] 메모리 해제 됐습니다\n", i);
	}
	

	free(ppBan);
	free(pHak);
	
	ppBan = NULL;
	pHak = NULL;

	printf("%d\n", ppBan);
	printf("%d\n", pHak);
}
	//처리
	//출력
	//문제1) 입력부 : 입력은 입력 대로
	//    출력부 : 출력은 출력 대로

	//문제2) 함수로 구성해보기! 
	//      #1) inputSocre(ban, hak, 포인터)  ->  void inputScore(int, int, int**)  for문으로 돌려야지만 hak 값을 보낼 수 있다
	//          printScore(ban, hak, 포인터)  ->  void printScore(int, int, int**)
	//      #2) intputScore(포인터)   ---->   void inputScore(int **){ ban, hak 입력 -> printScore(ban, hak, 포인터) } intputScore의 prototype을 printScore위에
	//																												  써야함
	//      #3) inputScore();  