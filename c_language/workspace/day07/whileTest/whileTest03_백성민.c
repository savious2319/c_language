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



void main() {

	char meNum = ' ';
	int cntKimchi = 0;
	int cntDanjang = 0;
	int cntBudae = 0;
	int cntSunduboo = 0;
	int totalPrice = 0;
	int totalDish = 0;
	int kimchiTotal = 0;
	int danjangTotal = 0;
	int budaeTotal = 0;
	int sudubooTotal = 0;


	while (1) {
		puts("********Korea 식당 ******");
		puts("1. 김치찌개   - 5000원\n2. 된장찌개   - 6000원\n3. 부대찌개   - 7000원\n4. 순두부찌개 - 8000원\n0. 주문 종료\n");
		printf("1. 김치찌개     %d개 %d원\n2. 된장찌개     %d개 %d원\n3. 부대찌개     %d개 %d원\n4. 순두부찌개   %d개 %d원\n", cntKimchi, kimchiTotal, cntDanjang, danjangTotal,
			cntBudae, budaeTotal, cntSunduboo, sudubooTotal);
		printf("주문 하세요 : "); meNum = getch(); //scanf("%d", &meNum);
		system("cls");

		switch (meNum) {

		case '1':
			//puts("김치찌개");
			cntKimchi++;
			kimchiTotal += Kimchi;
			//printf("김치찌개 %d개 %d원\n", cntKimchi, kimchiTotal);
			break;
		case '2':
			//puts("된장찌개"); 
			cntDanjang++;
			danjangTotal += Danjang;
			//printf("된장찌개 %d개 %d원\n", cntDanjang, danjangTotal);
			break;
		case '3':
			//puts("부대찌개");
			cntBudae++;
			budaeTotal += Budae;
			//printf("부대찌개 %d개 %d원\n", cntBudae, budaeTotal);
			break;
		case '4':
			//puts("순두부찌개"); 
			cntSunduboo++;
			sudubooTotal += Suduboo;
			//printf("순두부찌개 %d개 %d원\n", cntSunduboo, sudubooTotal);
			break;

		}
		//totalPrice += kimchiTotal + danjangTotal + budaeTotal + sudubooTotal; //처음에는 totalPrice = 0(totalPrice) + 5000(kimchiTotal) 인데
		//종료할때는 totalPrice = 5000(totalPrice) + 5000(kimchiTotal) 된장찌개 값이 찍힌다.
		//totalDish += cntKimchi + cntDanjang + cntBudae + cntSunduboo; // 마찬가지다.

		//totalPrice = kimchiTotal + danjangTotal + budaeTotal + sudubooTotal; 이렇게 하면 문제가 안된다.
		//totalDish = cntKimchi + cntDanjang + cntBudae + cntSunduboo;


		if (meNum == '0') {

			totalPrice += kimchiTotal + danjangTotal + budaeTotal + sudubooTotal;
			totalDish += cntKimchi + cntDanjang + cntBudae + cntSunduboo;

			puts("주문을 종료합니다");
			printf("*** Korea식당 영수증 ***\n");
			if (cntKimchi != 0) { printf("김치찌개     %d개 %d원\n", cntKimchi, kimchiTotal); }
			if (cntDanjang != 0) { printf("된장찌개     %d개 %d원\n", cntDanjang, danjangTotal); }
			if (cntBudae != 0) { printf("부대찌개     %d개 %d원\n", cntBudae, budaeTotal); }
			if (cntSunduboo != 0) { printf("순두부찌개   %d개 %d원\n", cntSunduboo, sudubooTotal); }
			printf("총합         %d개 %d원\n", totalDish, totalPrice);
			break;
		}
	}//end while

	puts("\n\n프로그램 종료");


}