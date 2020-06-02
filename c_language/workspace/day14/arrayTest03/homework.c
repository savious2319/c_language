#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 5
#define BILL 2000
void inputTenant(int row, int col, int(*p)[5]);
void aptBill(int bill, int row, int col, int(*p)[5]);
void myBill(int bill, int row, int col, int(*p)[5]);
int totalBill(int bill, int row, int col, int(*p)[5]);
void floorBill(int bill, int row, int col, int(*p)[5]);
void billCompare(int bill, int row, int col, int(*p)[5]);
void main()
{
	//문1)
	// korea 아파트를 만들고자 한다.
	// 4층, 5호실까지 있다.
	// 각 호실엔 입주민이 들어갈 예정이다.

	// 입주민은 입주민 수만큼 호실마다 관리비를 내야 한다.
	// 예를 들어 103호 입주민 : 4명  이렇게 입력하면
	// 4명분의 관리비를 계산해야 한다.
	// 관리비는 1명당 2,000원 이다.

	// 각 호실마다 입주민을 입력받고
	//     최종 출력문은 받아야 할 관리비를 호실마다 출력해 주세요 
	//    (예쁘게 출력해 주세요, main 함수외에 최소 함수 1개를 사용해 주세요!)
	//
	//          [  KOREA 아파트 관리비 내역 ]
	//      101호(15)  102호(20)	     103호      104호
	//      30,000원   40,000원      20,000원   6,000원
	int bill = 2000;
	int arApt[ROW][COL] = { 0 };
	int row = sizeof(arApt) / sizeof(arApt[0]);
	int col = sizeof(arApt[0]) / sizeof(arApt[0][0]);

	//입력받는 층수
	int floor = 0;
	//입력받는 호수
	int num = 0;

	inputTenant(arApt);
	aptBill(bill, row, col, arApt);

	while (1) {
		int choice = 0;
		puts("==== KOREA 아파트 관리비 내역====");
		printf("1. 자기 집 관리비 보기\n2. 전체 관리비 출력하기\n3. 층별 평균 관리비 출력하기\n4. 관리비 비교하기 :  본인의 집 호수를 입력해 주세요\n\n 번호를 선택해주세요");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1: printf("층과 호수를 입력하세요: "); 
			scanf_s("%d %d", &floor, &num); 
			myBill(floor,num, arApt); break;
		case 2: printf(" KOREA 관리비는 총 %d원 입니다", totalBill(bill, row, col, arApt)); break;
		case 3: floorBill(bill, row, col, arApt); break;
		case 4: billCompare(bill, row, col, arApt); break;
		}
	}
}
void inputTenant(int(*p)[5]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d0%d의 입주민 수를 입력하세요 : ", i + 1, j + 1);
			scanf_s("%d", &p[i][j]);
		}
	}
}
void aptBill(int bill, int row, int col, int(*p)[5]) {
	system("cls");
	int i = 0, j = 0;
	puts("[ KOREA 아파트 관리비 내역 ]");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d0%d호(%d명) ", i + 1, j + 1, p[i][j]);
			bill *= p[i][j];
			printf("%d원\t", bill);
			bill = 2000;
		}
		puts("");
	}
}

void myBill(int(*p)[5]) {
	int floor = 0;
	int num = 0;
	printf("%d\n", p[0][0]);
	printf("층과 호수를 입력하세요: "); scanf_s("%d %d", &floor, &num);

	printf("%d0%d호 이번달 내실 금액은 %d원 입니다\n", floor, num, p[floor - 1][num - 1] * BILL);


}

int totalBill(int bill, int row, int col, int(*p)[5]) {
	int total = 0;
	//printf("%d원 입니다\n", p[0][0] * bill);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			bill *= p[i][j];
			total += bill;
			bill = 2000;
		}

	}
	//printf(" KOREA 관리비는 총 %d원 입니다", total);
	return total;
}

void floorBill(int bill, int row, int col, int(*p)[5]) {
	printf("층별 관리비\n"); //출력하기(몇 층 관리비를 볼까요 ? 2층 = > 2층 관리비는 총 5, 000원 입니다)
	int floor = 0;
	int total = 0;
	double avgFloor = 0.0;
	printf("몇층 관리비를 볼까요? "); scanf_s("%d", &floor);

	for (int i = 0; i < col; i++)
	{
		avgFloor = (p[floor - 1][i] * bill) / col;
	}
	printf("%d층 평균 관리비 : %d원\n", floor, avgFloor);

	//int *avgFloor = (int *)malloc(floor * sizeof(int));
	/*switch (floor) {
	case 1: for (int i = 0; i < 1; i++) {
		avgFloor[i] = 0;
		for (int j = 0; j < col; j++) {
			avgFloor[i] += (p[i][j] * bill);
		}
		printf("avgFloor[%d] : %d\n", i, avgFloor[i]);
		total += avgFloor[i];
	}

			printf("%d층 평균 관리비는 %.2f입니다\n", floor, (double)total / col);
			break;
	case 2:for (int i = 1; i < 2; i++) {
		avgFloor[i] = 0;
		for (int j = 0; j < col; j++) {
			avgFloor[i] += (p[i][j] * bill);
		}
		printf("avgFloor[%d] : %d\n", i, avgFloor[i]);
		total += avgFloor[i];
	}

		   printf("%d층 평균 관리비는 %.2f입니다\n", floor, (double)total / col);
		   break;
	case 3:for (int i = 2; i < 3; i++) {
		avgFloor[i] = 0;
		for (int j = 0; j < col; j++) {
			avgFloor[i] += (p[i][j] * bill);
		}
		printf("avgFloor[%d] : %d\n", i, avgFloor[i]);
		total += avgFloor[i];
	}

		   printf("%d층 평균 관리비는 %.2f입니다\n", floor, (double)total / col);
		   break;
	case 4:for (int i = 3; i < 4; i++) {
		avgFloor[i] = 0;
		for (int j = 0; j < col; j++) {
			avgFloor[i] += (p[i][j] * bill);
		}
		printf("avgFloor[%d] : %d\n", i, avgFloor[i]);
		total += avgFloor[i];
	}

		   printf("%d층 평균 관리비는 %.2f입니다\n", floor, (double)total / col);
		   break;
	default: break;
	}*/
}

void billCompare(int bill, int row, int col, int(*p)[5]) {
	int floor = 0;
	int num = 0;
	int total = 0;
	double avgFloor = 0.0;
	totalBill(bill, row, col, p);
	printf("본인의 층과 호수를 입력해 주세요: "); scanf_s("%d %d", &floor, &num);
	printf("%d0%d호는 전체 관리비 보다 %d원 절약했습니다.\n",floor, num, (p[floor - 1][num - 1] * bill) - totalBill(bill, row, col, p) / (row*col));
	for (int i = 0; i < col; i++)
	{
		total += (p[floor - 1][i]) * BILL;
	}
	avgFloor = total / COL;

	printf("%d0%d호는 평균 층별 관리비 보다 %d원 절약했습니다.\n", floor, num, (p[floor - 1][num - 1] * bill) - avgFloor);

	//         103호는
	//            전체 관리비 보다 -10,000원 절약했습니다
	//		      층별 관리비 보다 -3,000원 절약했습니다
}
/*void main() {

//문2)  KOREA 아파트를 짓고자 합니다.
//     메인 함수에서 층수와 호수를 입력받아
//     아파트를 지어 보세요.  (최소 메인함수외에 사용자 함수 1개를 사용해야 합니다.)
//  만들고자 하는 층수 : 2
//  만들고자 하는 호수 : 5
// 출력결과
//         ....     ...    ....     ...   .n0n호
//         201호   202호   203호    204호  205호
//         101호   102호   103호    104호  105호

int row = 0;
int col = 0;
printf("원하는 아파트 층수를 입력하세요: "); scanf("%d", &row);
printf("원하는 아파트 호수를 입력하세요: "); scanf("%d", &col);
buildApt(row, col);
}

void buildApt(int row, int col) {
//int *row = (int *)malloc(row * sizeof(int));
int *col = (int *)malloc(col * sizeof(int));

for (int i = 0; i < row; i++){
for (int j = 0; j < col; j++){
printf("아파트 호수 입력: ");
scanf("%d", &col);
}
}
for (int i = 0; i < row; i++){
for (int j = 0; j < col; j++){
printf("%d호  ", col[i][j]);
}
}
}*/

//문3)  위에서 입력받은 KOREA 아파트의 관리비를 관리하는 프로그램입니다.


//      ==== KOREA 아파트 관리비 내역 =====
//     1.  자기 집 관리비 보기    (  층과 호수를 입력해 주세요 : 1층  3호 =>  103호 이번달 내실 금액은 6,000원 입니다)
//     2.  전체 관리비 출력하기   (  KOREA 관리비는 총 324,000원 입니다)
//     3.  층별 평균 관리비 출력하기  ( 몇 층 관리비를 볼까요?  2층  => 2층 관리비는 총 5,000원 입니다)
//	   4.  관리비 비교하기 : 본인의 집 호수를 입력해 주세요.  ( 층과 호수를 입력해 주세요 : 1, 3 => 
//         103호는
//            전체 관리비 보다 -10,000원 절약했습니다
//		      층별 관리비 보다 -3,000원 절약했습니다

//문3-1)   임의의 가구 인원수를 입력해서   데이터 출력이 되는지 보자!
//			예를 들면)   4행 5열 짜리 아파트를 만들었다고 가정했을 때,
//			가구인원수를 초기값으로 넣어 놓으면 된다!

