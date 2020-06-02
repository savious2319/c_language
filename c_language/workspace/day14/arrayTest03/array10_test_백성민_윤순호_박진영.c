#include <stdio.h>
#include <Windows.h>
#define ROW 4
#define COL 5
#define BILL 2000
void inputTenant(int(*p)[5]);
void aptBill(int(*p)[5]);
int myBill(int floor, int num, int(*p)[5]);
int totalBill(int(*p)[5]);
int floorBill(int floor, int(*p)[5]);
void billCompare(int floor, int num, int(*p)[5]);
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
	int arApt[ROW][COL] = { 0 };
	//입력받는 층수
	int floor = 0;
	//입력받는 호수
	int num = 0;
	inputTenant(arApt);
	aptBill(arApt);

	while (1) {
		int choice = 0;
		char exit = ' ';
		puts("==== KOREA 아파트 관리비 내역====");
		printf("1. 자기 집 관리비 보기\n2. 전체 관리비 출력하기\n3. 층별 평균 관리비 출력하기\n4. 관리비 비교하기 :  본인의 집 호수를 입력해 주세요\n\n번호를 선택해주세요 :");
		scanf("%d", &choice);

		switch (choice) {
		case 1: printf("층과 호수를 입력하세요: "); scanf("%d %d", &floor, &num);
			printf("%d0%d호 이번달 내실 금액은 %d원 입니다\n\n", floor, num, myBill(floor, num, arApt)); break;

		case 2: printf("KOREA 관리비는 총 %d원 입니다\n\n", totalBill(arApt)); break;

		case 3: printf("몇층 관리비를 볼까요? "); scanf("%d", &floor);
			floorBill(floor, arApt);
			printf("%d층 평균 관리비 : %d원\n\n", floor, floorBill(floor, arApt)); break;
		case 4: printf("본인의 층과 호수를 입력해 주세요: "); scanf("%d %d", &floor, &num);
			billCompare(floor, num, arApt);
		}
		getchar();
		puts("");
		puts("------------------------------------");
		puts("다시 조회하시려면 아무 키나 눌러주세요.");
		printf("종료는 q를 눌러주세요 : ");
		scanf("%c", &exit);
		if (exit == 'q') break;
		//입주민 관리비 표 다시 출력
		aptBill(arApt);
	}//end while
	puts("프로그램을 종료합니다.");
	puts("이용해주셔서 감사합니다.");
}
void inputTenant(int(*p)[5]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf("%d0%d의 입주민 수를 입력하세요 : ", i + 1, j + 1);
			scanf("%d", &p[i][j]);
		}
	}
}
void aptBill(int(*p)[5]) {
	system("cls");
	int i = 0, j = 0, total = 0;
	puts("[ KOREA 아파트 관리비 내역 ]");
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%d0%d호(%d명) ", i + 1, j + 1, p[i][j]);
			total = BILL * p[i][j];

			printf("%d원\t", total);
		}
		puts("");
	}
	puts("");
}

int myBill(int floor, int num, int(*p)[5]) {

	return p[floor - 1][num - 1] * BILL;
}

int totalBill(int(*p)[5]) {
	int total = 0;
	int sum = 0;
	//printf("%d원 입니다\n", p[0][0] * bill);
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			total += p[i][j];
			sum = total * BILL;
		}
	}
	return sum;
}

int floorBill(int floor, int(*p)[5]) {
	int total = 0;
	for (int i = 0; i < COL; i++) {
		total += p[floor - 1][i] * BILL;
	}
	return total / COL;
}

void billCompare(int floor, int num, int(*p)[5]) {

	printf("내 관리비 : %d원\n", myBill(floor, num, p));
	//totalBill(p);
	//floorBill(floor, p);
	printf("%d0%d호는 전체 평균 관리비 보다 %d원 절약했습니다.\n\n", floor, num, myBill(floor, num, p) - (totalBill(p) / (ROW*COL)));
	printf("%d0%d호는 평균 층별 관리비 보다 %d원 절약했습니다.\n\n", floor, num,
		myBill(floor, num, p) - floorBill(floor, p));
}
void buildApt(int row, int col);
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

for (int i = 0; i < row; i++){
for (int j = 0; j < col; j++){
printf("%d0%d호  ", i+1, j+1);

}
puts("");
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
/*
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#define ROW_SIZE 4
#define COL_SIZE 5
#define PRICE 2000
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
/*
void inputNum(int row, int col, int(*pAr)[5]);
void totalPrice(int row, int col, int(*pAr)[5]);
void main() {
//층
int row = 4;
//호
int col = 5;
//입주민 수 저장할 배열 생성
int arrNum[4][5] = { 0, };
//입주민 수 입력
inputNum(row, col, arrNum);
puts("");
//층,호 별 관리비출력
totalPrice(row, col, arrNum);
}
//입주민 수 저장 함수
void inputNum(int row, int col, int (*pAr)[5]) {
for (int i = 0; i < row; i++) {
printf("%d층의 입주민을 조사합니다.\n", i + 1);
puts("------------------------------------");
for (int j = 0; j < col; j++) {
printf("%d층 10%d호의 입주민은 몇 명입니까? : ", i + 1, j + 1);
scanf("%d", &pAr[i][j]);
}
puts("------------------------------------");
}
}
//관리비 출력 함수
void totalPrice(int row,int col, int(*pAr)[5]) {
for (int i = 0; i < row; i++) {
puts("------------------------------------------------------");
for (int j = 0; j < col; j++) {
printf("%d층 10%d호의 입주민 : %d명\t관리비 : %d원\n", i + 1, j + 1, pAr[i][j], pAr[i][j] * PRICE);
}
puts("------------------------------------------------------");
Sleep(2000);
}
}

//문3)  위에서 입력받은 KOREA 아파트의 관리비를 관리하는 프로그램입니다.
void inputChoice(int *choice);
void callMenu(int choice);
void checkMyPrice(int(*pAr)[COL_SIZE]);
void totalPrice(int(*pAr)[COL_SIZE]);
void comPrice(int(*pAr)[COL_SIZE]);
void maxPrice(int(*pAr)[COL_SIZE]);
void avgPrice(int(*pAr)[COL_SIZE]);
void backMenu();
void main() {
//메뉴 변수
int choice = 0;
//층, 호 변수

//가구인원수 초기화 배열
int arrNum[ROW_SIZE][COL_SIZE] = {
{ 1,2,3,4,5 },
{ 1,2,3,4,5 },
{ 1,2,3,4,5 },
{ 1,2,3,4,5 }
};
//메뉴 고르기
inputChoice(&choice);
//메뉴 호출하기
callMenu(choice, arrNum);


}
void inputChoice(int *choice) {
for (;;) {
puts("");
puts("\t┌────── KOREA 아파트 관리비 내역 ──────┐");
puts("\t│\t\t\t\t       │");
puts("\t│   1.  자기 집 관리비 보기\t       │");
puts("\t│\t\t\t\t       │");
puts("\t│   2.  전체 관리비 출력하기\t       │");
puts("\t│\t\t\t\t       │");
puts("\t│   3.  층별 평균 관리비 출력하기      │");
puts("\t│\t\t\t\t       │");
puts("\t│   4.  관리비 비교하기  \t       │\n\t│   : 본인의 집 호수를 입력해 주세요.  │");
puts("\t│\t\t\t\t       │");
puts("\t│   0.  종료하기\t\t       │");
puts("\t└──────────────────────────────────────┘");
printf("\t 입력 : ");
scanf("%d", choice);
if (0 <= *choice && *choice <= 4) break;
puts("***** ERROR *****");
puts("메뉴는 1~4번 중에서 선택해 주세요.");
puts("종료는 0번입니다.");
puts("*********************************");
Sleep(2000);
system("cls");
}
}
void callMenu(int choice, int(*pAr)[COL_SIZE]) {
switch (choice) {
case 1:
checkMyPrice(pAr);
break;
case 2:
totalPrice(pAr);
backMenu();
break;
case 3:
avgPrice(pAr);
break;
case 4:
comPrice(pAr);
break;
case 0:
break;
}
}
void checkMyPrice(int(*pAr)[COL_SIZE]) {
int row = 0;
int col = 0;
char exit = ' ';
for (;;) {
system("cls");
puts("");
puts("\t┌────── 나의 집 관리비 보기 ──────┐");
printf("\t       몇 층입니까?(1 ~ 4층) : ");
scanf("%d", &row);
if (row < 0 || row > 4) {
puts("");
puts("\t   이 아파트는 1 ~ 4층까지 있습니다.");
puts("\t\t  다시 입력하세요.");
Sleep(2000);
continue;
}
printf("\t       몇 호 입니까?(1 ~ 5호) : ");
scanf("%d", &col);
if (col < 0 || col > 5) {
puts("");
puts("\t   이 아파트는 1 ~ 5호까지 있습니다.");
puts("\t\t  다시 입력하세요.");
Sleep(2000);
continue;
}
else {
puts("\t└─────────────────────────────────┘");

puts("\t  ─────────────────────────────");
printf("\t    고객님의 집은 %d0%d호 입니다. \n", row, col);
printf("\t     관리비는 %5d원 입니다.    \n", pAr[row - 1][col - 1] * PRICE);
puts("\t  ─────────────────────────────");
getchar();
puts("\t다시 조회하시려면 아무 키나 눌러주세요.");
printf("\t종료는 q를 눌러주세요 : ");
scanf("%c", &exit);
if (exit == 'q') break;
system("cls");
}
}//end for
backMenu();
}//end checkMyPrice

void backMenu() {
puts("\t  ┌─────────────────────────────┐");
printf("\t  │    이전 메뉴로 이동합니다.  │\n");
printf("\t  │     잠시만 기다려 주세요.   │\n");
puts("\t  └─────────────────────────────┘");
Sleep(2000);
system("cls");
main();
}//end backMenu

void totalPrice(int(*pAr)[COL_SIZE]) {
int sum = 0;
for (int i = 0; i < ROW_SIZE; i++) {
for (int j = 0; j < COL_SIZE; j++) {
sum += pAr[i][j] * PRICE;
}
}
puts("\t  ┌─────────────────────────────────┐");
printf("\t  │ Korea 아파트의 총 관리비입니다. │\n");
printf("\t  │   총 관리비는 %5d원 입니다.  │\n", sum);
puts("\t  └─────────────────────────────────┘");
}
void comPrice(int(*pAr)[COL_SIZE]) {
int max = 0;
int row = 0;
int col = 0;
char exit = ' ';
int *rowPri = (int *)malloc(sizeof(int) * ROW_SIZE);
double *rowAvg = (double *)malloc(sizeof(double) * ROW_SIZE);
for (;;) {
system("cls");
puts("");
puts("\t  ┌────── 나의 집 관리비 비교 ──────┐");
printf("\t         몇 층입니까?(1 ~ 4층) : ");
scanf("%d", &row);
if (row < 0 || row > 4) {
puts("");
puts("\t     이 아파트는 1 ~ 4층까지 있습니다.");
puts("\t\t    다시 입력하세요.");
Sleep(2000);
continue;
}
printf("\t         몇 호 입니까?(1 ~ 5호) : ");
scanf("%d", &col);
if (col < 0 || col > 5) {
puts("");
puts("\t     이 아파트는 1 ~ 5호까지 있습니다.");
puts("\t\t    다시 입력하세요.");
Sleep(2000);
continue;
}
else {
puts("\t  └─────────────────────────────────┘");

puts("\t    ┌─────────────────────────────┐");
printf("\t    │ 고객님의 집은 %d0%d호 입니다. │\n", row, col);
printf("\t    │   관리비는 %5d원 입니다.  │\n", pAr[row - 1][col - 1] * PRICE);
puts("\t    └─────────────────────────────┘");

maxPrice(&max, pAr);
puts("");
puts("\t    ┌─────────────────────────────┐");
printf("\t    │      최고 관리비 금액보다  \n", row, col);
printf("\t    │      %5d원 절약했습니다.    \n", (max *PRICE) - (pAr[row - 1][col - 1] * PRICE));
puts("\t    └─────────────────────────────┘");
getchar();
puts("\t  다시 조회하시려면 아무 키나 눌러주세요.");
printf("\t  종료는 q를 눌러주세요 : ");
scanf("%c", &exit);
if (exit == 'q') break;
system("cls");
}
}//end for
backMenu();
}

void maxPrice(int *max, int(*pAr)[COL_SIZE]) {
for (int i = 0; i < ROW_SIZE; i++) {
for (int j = 0; j < COL_SIZE; j++) {
if (pAr[i][j] < pAr[i][j + 1]) {
*max = pAr[i][j + 1];
}
}
}
printf("\t   최고 관리비 금액은 %d원 입니다.", (*max * PRICE));
}

//층별 평균 관리비
void avgPrice(int(*pAr)[COL_SIZE]) {
for (;;) {
int floor = 0;
int sum = 0;
char exit = ' ';
int i, j;
puts("\t┌────── 층별 평균 관리비 보기 ──────┐");
printf("\t         몇 층입니까?(1 ~ 4층) : ");
scanf("%d", &floor);
for (i = 0; i < COL_SIZE; i++) {
sum += pAr[floor - 1][i] * PRICE;
}
printf("\t\t  %d층의 평균 관리비 \n\t\t  : %d원 입니다.\n", floor, sum / COL_SIZE);
puts("        └───────────────────────────────────┘");
getchar();
puts("\t다시 조회하시려면 아무 키나 눌러주세요.");
printf("\t종료는 q를 눌러주세요 : ");
scanf("%c", &exit);
if (exit == 'q') break;
system("cls");
}//end for
backMenu();
}

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


*/
