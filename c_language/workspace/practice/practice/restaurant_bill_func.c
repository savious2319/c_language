#include<stdio.h>
#define Kimchi 5000
#define Danjang 6000
#define Budae 7000
#define Suduboo 8000


/*

식당 메뉴 만들기
********Korea 식당 ******
1. 김치찌개 - 5000원
2. 된장찌개 - 6000원
3. 부대찌개 - 7000원
4. 순두부찌개 - 8000원
주문 : 번     //  \b

영수증 출력!
문1) 주문 횟수에 따라
품목 수량 가격이 나와야 한다.
1번 2회, 3번 2회 주문

출력 예)
*** Korea식당 영수증 ***
김치찌개 2개 10000원
부대찌개 2개 14000원
총합        24000원

*/

void printBill(int k, int d, int b, int s, int kTotal, int dTotal, int bTotal, int sTotal, int totalPrice, int totalDish) {

	totalPrice += kTotal + dTotal + bTotal + sTotal;
	totalDish += k + d + b + s;
	system("cls");
	puts("주문을 종료합니다");
	printf("*** Korea식당 영수증 ***\n");
	if (k != 0) { printf("김치찌개     %d개 %d원\n", k, kTotal); }
	if (d != 0) { printf("된장찌개     %d개 %d원\n", d, dTotal); }
	if (b != 0) { printf("부대찌개     %d개 %d원\n", b, bTotal); }
	if (s != 0) { printf("순두부찌개   %d개 %d원\n", s, sTotal); }
	printf("총합         %d개 %d원\n", totalDish, totalPrice);
}

char menuOrder(char meNum) {

	puts("********Korea 식당 ******");
	puts("1. 김치찌개   - 5000원\n2. 된장찌개   - 6000원\n3. 부대찌개   - 7000원\n4. 순두부찌개 - 8000원\n0. 주문 종료\n");
	printf("주문 하세요 : "); 
	return getch();

}

void main() {

char meNum = ' ';
int cntKimchi = 0, cntDanjang = 0, cntBudae = 0, cntSunduboo = 0;
int kimchiTotal = 0, danjangTotal = 0, budaeTotal = 0, sudubooTotal = 0;
int totalPrice = 0, totalDish = 0;
		
while ((meNum = menuOrder(meNum)) != '0') { //menuOrder함수에 meNum인자를 넘겨주어서 받아온 값을 
											//① meNum에게 대입!! 
											//② 그 다음에 '0'과 비교!! 
											//그래서 (meNum = menuOrder(meNum))을 소괄호로 묶어야 한다!!!
			
			switch (meNum) {
			case '1':
				cntKimchi++;
				kimchiTotal += Kimchi;
				break;
			case '2':
				cntDanjang++;
				danjangTotal += Danjang;
				break;
			case '3':
				cntBudae++;
				budaeTotal += Budae;
				break;
			case '4':
				cntSunduboo++;
				sudubooTotal += Suduboo;
				break;
			}
			system("cls");
			printf("1. 김치찌개     %d개 %d원\n2. 된장찌개     %d개 %d원\n3. 부대찌개     %d개 %d원\n4. 순두부찌개   %d개 %d원\n",
				cntKimchi, kimchiTotal, cntDanjang, danjangTotal, cntBudae, budaeTotal, cntSunduboo, sudubooTotal);
		}
	printBill(cntKimchi, cntDanjang, cntBudae, cntSunduboo, kimchiTotal, danjangTotal, budaeTotal, sudubooTotal, totalPrice, totalDish);
		

	puts("\n\n프로그램 종료");

}


