#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#define ROW_SIZE 4
#define COL_SIZE 5
#define PRICE 2000
	//僥1)
	// korea 嬴だお蒂 虜菟堅濠 и棻.
	// 4類, 5�ˊД轀� 氈棻.
	// 陝 �ˊЧ� 殮輿團檜 菟橫陞 蕨薑檜棻.

	// 殮輿團擎 殮輿團 熱虜躑 �ˊК韌� 婦葬綠蒂 頂撿 и棻.
	// 蕨蒂 菟橫 103�� 殮輿團 : 4貲  檜溢啪 殮溘ж賊
	// 4貲碟曖 婦葬綠蒂 啗骯п撿 и棻.
	// 婦葬綠朝 1貲渡 2,000錳 檜棻.

	// 陝 �ˊК韌� 殮輿團擊 殮溘嫡堅
	//     譆謙 轎溘僥擎 嫡嬴撿 й 婦葬綠蒂 �ˊК韌� 轎溘п 輿撮蹂 
	//    (蕨際啪 轎溘п 輿撮蹂, main л熱諼縑 譆模 л熱 1偃蒂 餌辨п 輿撮蹂!)
	//
	//          [  KOREA 嬴だお 婦葬綠 頂羲 ]
	//      101��(15)  102��(20)	     103��      104��
	//      30,000錳   40,000錳      20,000錳   6,000錳
/*
void inputNum(int row, int col, int(*pAr)[5]);
void totalPrice(int row, int col, int(*pAr)[5]);
void main() {
	//類
	int row = 4;
	//��
	int col = 5;
	//殮輿團 熱 盪濰й 寡翮 儅撩
	int arrNum[4][5] = { 0, };
	//殮輿團 熱 殮溘
	inputNum(row, col, arrNum);
	puts("");
	//類,�� 滌 婦葬綠轎溘
	totalPrice(row, col, arrNum);
}
//殮輿團 熱 盪濰 л熱
void inputNum(int row, int col, int (*pAr)[5]) {
		for (int i = 0; i < row; i++) {
			printf("%d類曖 殮輿團擊 褻餌м棲棻.\n", i + 1);
			puts("------------------------------------");
			for (int j = 0; j < col; j++) {
				printf("%d類 10%d��曖 殮輿團擎 賃 貲殮棲梱? : ", i + 1, j + 1);
				scanf("%d", &pAr[i][j]);
			}
			puts("------------------------------------");
		}
}
//婦葬綠 轎溘 л熱
void totalPrice(int row,int col, int(*pAr)[5]) {
	for (int i = 0; i < row; i++) {
		puts("------------------------------------------------------");
		for (int j = 0; j < col; j++) {
			printf("%d類 10%d��曖 殮輿團 : %d貲\t婦葬綠 : %d錳\n", i + 1, j + 1, pAr[i][j], pAr[i][j] * PRICE);
		}
		puts("------------------------------------------------------");
		Sleep(2000);
	}
}
*/
	//僥3)  嬪縑憮 殮溘嫡擎 KOREA 嬴だお曖 婦葬綠蒂 婦葬ж朝 Щ煎斜極殮棲棻.
void inputChoice(int *choice);
void callMenu(int choice);
void checkMyPrice(int(*pAr)[COL_SIZE]);
void totalPrice(int(*pAr)[COL_SIZE]);
void comPrice(int(*pAr)[COL_SIZE]);
void maxPrice(int(*pAr)[COL_SIZE]);
void avgPrice(int(*pAr)[COL_SIZE]);
void backMenu();
void main() {
	//詭景 滲熱
	int choice = 0;
	//類, �� 滲熱
	
	//陛掘檣錳熱 蟾晦�� 寡翮
	int arrNum[ROW_SIZE][COL_SIZE] = {
		{ 1,2,3,4,5 },
		{ 1,2,3,4,5 },
		{ 1,2,3,4,5 },
		{ 1,2,3,4,5 }
	};
	//詭景 堅腦晦
	inputChoice(&choice);
	//詭景 ��轎ж晦
	callMenu(choice,arrNum);
	

}
void inputChoice(int *choice) {
	for (;;) {
		puts(""); 
		puts("\t忙式式式式式式 KOREA 嬴だお 婦葬綠 頂羲 式式式式式式忖");
		puts("\t弛\t\t\t\t       弛");
		puts("\t弛   1.  濠晦 餵 婦葬綠 爾晦\t       弛");
		puts("\t弛\t\t\t\t       弛");
		puts("\t弛   2.  瞪羹 婦葬綠 轎溘ж晦\t       弛");
		puts("\t弛\t\t\t\t       弛");
		puts("\t弛   3.  類滌 ゎ敕 婦葬綠 轎溘ж晦      弛");
		puts("\t弛\t\t\t\t       弛");
puts("\t弛   4.  婦葬綠 綠掖ж晦  \t       弛\n\t弛   : 獄檣曖 餵 �ˉ鷏� 殮溘п 輿撮蹂.  弛");
puts("\t弛\t\t\t\t       弛");
puts("\t弛   0.  謙猿ж晦\t\t       弛");
puts("\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
printf("\t 殮溘 : ");
scanf("%d", choice);
if (0 <= *choice && *choice <= 4) break;
puts("***** ERROR *****");
puts("詭景朝 1~4廓 醞縑憮 摹鷗п 輿撮蹂.");
puts("謙猿朝 0廓殮棲棻.");
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
		puts("\t忙式式式式式式 釭曖 餵 婦葬綠 爾晦 式式式式式式忖");
		printf("\t       賃 類殮棲梱?(1 ~ 4類) : ");
		scanf("%d", &row);
		if (row < 0 || row > 4) {
			puts("");
			puts("\t   檜 嬴だお朝 1 ~ 4類梱雖 氈蝗棲棻.");
			puts("\t\t  棻衛 殮溘ж撮蹂.");
			Sleep(2000);
			continue;
		}
		printf("\t       賃 �� 殮棲梱?(1 ~ 5��) : ");
		scanf("%d", &col);
		if (col < 0 || col > 5) {
			puts("");
			puts("\t   檜 嬴だお朝 1 ~ 5�ㄠ轀� 氈蝗棲棻.");
			puts("\t\t  棻衛 殮溘ж撮蹂.");
			Sleep(2000);
			continue;
		}
		else {
			puts("\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");

			puts("\t  式式式式式式式式式式式式式式式式式式式式式式式式式式式式式");
			printf("\t    堅偌椒曖 餵擎 %d0%d�� 殮棲棻. \n", row, col);
			printf("\t     婦葬綠朝 %5d錳 殮棲棻.    \n", pAr[row - 1][col - 1] * PRICE);
			puts("\t  式式式式式式式式式式式式式式式式式式式式式式式式式式式式式");
			getchar();
			puts("\t棻衛 褻�裔牮繩襄� 嬴鼠 酈釭 揚楝輿撮蹂.");
			printf("\t謙猿朝 q蒂 揚楝輿撮蹂 : ");
			scanf("%c", &exit);
			if (exit == 'q') break;
			system("cls");
		}
	}//end for
	backMenu();
}//end checkMyPrice

void backMenu() {
	puts("\t  忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
	printf("\t  弛    檜瞪 詭景煎 檜翕м棲棻.  弛\n");
	printf("\t  弛     濡衛虜 晦棻溥 輿撮蹂.   弛\n");
	puts("\t  戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
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
	puts("\t  忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
	printf("\t  弛 Korea 嬴だお曖 識 婦葬綠殮棲棻. 弛\n");
	printf("\t  弛   識 婦葬綠朝 %5d錳 殮棲棻.  弛\n", sum);
	puts("\t  戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
}
void comPrice(int(*pAr)[COL_SIZE]){
	int max = 0;
	int row = 0;
	int col = 0;
	char exit = ' ';
	int *rowPri = (int *)malloc(sizeof(int) * ROW_SIZE);
	double *rowAvg = (double *)malloc(sizeof(double) * ROW_SIZE);
	for (;;) {
		system("cls");
		puts("");
		puts("\t  忙式式式式式式 釭曖 餵 婦葬綠 綠掖 式式式式式式忖");
		printf("\t         賃 類殮棲梱?(1 ~ 4類) : ");
		scanf("%d", &row);
		if (row < 0 || row > 4) {
			puts("");
			puts("\t     檜 嬴だお朝 1 ~ 4類梱雖 氈蝗棲棻.");
			puts("\t\t    棻衛 殮溘ж撮蹂.");
			Sleep(2000);
			continue;
		}
		printf("\t         賃 �� 殮棲梱?(1 ~ 5��) : ");
		scanf("%d", &col);
		if (col < 0 || col > 5) {
			puts("");
			puts("\t     檜 嬴だお朝 1 ~ 5�ㄠ轀� 氈蝗棲棻.");
			puts("\t\t    棻衛 殮溘ж撮蹂.");
			Sleep(2000);
			continue;
		}
		else {
			puts("\t  戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");

			puts("\t    忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
			printf("\t    弛 堅偌椒曖 餵擎 %d0%d�� 殮棲棻. 弛\n", row, col);
			printf("\t    弛   婦葬綠朝 %5d錳 殮棲棻.  弛\n", pAr[row - 1][col - 1] * PRICE);
			puts("\t    戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");

			maxPrice(&max, pAr);
			puts("");
			puts("\t    忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
			printf("\t    弛      譆堅 婦葬綠 旎擋爾棻  \n", row, col);
			printf("\t    弛      %5d錳 瞰擒ц蝗棲棻.    \n", (max *PRICE) - (pAr[row - 1][col - 1] * PRICE));
			puts("\t    戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
			getchar();
			puts("\t  棻衛 褻�裔牮繩襄� 嬴鼠 酈釭 揚楝輿撮蹂.");
			printf("\t  謙猿朝 q蒂 揚楝輿撮蹂 : ");
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
	printf("\t   譆堅 婦葬綠 旎擋擎 %d錳 殮棲棻.", (*max * PRICE));
}

//類滌 ゎ敕 婦葬綠
void avgPrice(int(*pAr)[COL_SIZE]) {
	for (;;) {
	int floor = 0;
	int sum = 0;
	char exit = ' ';
	int i,j;
		puts("\t忙式式式式式式 類滌 ゎ敕 婦葬綠 爾晦 式式式式式式忖");
		printf("\t         賃 類殮棲梱?(1 ~ 4類) : ");
		scanf("%d", &floor);
		for (i = 0; i < COL_SIZE; i++) {
			sum += pAr[floor - 1][i] * PRICE;
		}
		printf("\t\t  %d類曖 ゎ敕 婦葬綠 \n\t\t  : %d錳 殮棲棻.\n", floor, sum / COL_SIZE);
		puts("        戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
		getchar();
		puts("\t棻衛 褻�裔牮繩襄� 嬴鼠 酈釭 揚楝輿撮蹂.");
		printf("\t謙猿朝 q蒂 揚楝輿撮蹂 : ");
		scanf("%c", &exit);
		if (exit == 'q') break;
		system("cls");
	}//end for
	backMenu();
}

	//      ==== KOREA 嬴だお 婦葬綠 頂羲 =====
	//     1.  濠晦 餵 婦葬綠 爾晦    (  類婁 �ˉ鷏� 殮溘п 輿撮蹂 : 1類  3�� =>  103�� 檜廓殖 頂褒 旎擋擎 6,000錳 殮棲棻)
	//     2.  瞪羹 婦葬綠 轎溘ж晦   (  KOREA 婦葬綠朝 識 324,000錳 殮棲棻)
	//     3.  類滌 ゎ敕 婦葬綠 轎溘ж晦  ( 賃 類 婦葬綠蒂 獐梱蹂?  2類  => 2類 婦葬綠朝 識 5,000錳 殮棲棻)
	//	   4.  婦葬綠 綠掖ж晦 : 獄檣曖 餵 �ˉ鷏� 殮溘п 輿撮蹂.  ( 類婁 �ˉ鷏� 殮溘п 輿撮蹂 : 1, 3 => 
	//         103�ㄣ�
	//            瞪羹 婦葬綠 爾棻 -10,000錳 瞰擒ц蝗棲棻
	//		      類滌 婦葬綠 爾棻 -3,000錳 瞰擒ц蝗棲棻

	//僥3-1)   歜曖曖 陛掘 檣錳熱蒂 殮溘п憮   等檜攪 轎溘檜 腎朝雖 爾濠!
	//			蕨蒂 菟賊)   4ч 5翮 瞼葬 嬴だお蒂 虜菟歷棻堅 陛薑ц擊 陽,
	//			陛掘檣錳熱蒂 蟾晦高戲煎 厥橫 場戲賊 脹棻!
