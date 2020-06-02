#include <stdio.h>

void main() {

	int arrScore[3][4] = {

		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}


	};

	printf("arrScore : %dbyte\n", sizeof(arrScore));
 	printf("arrScore[0] : %dbyte\n", sizeof(arrScore[0]));
	printf("arrScore[0][0] : %dbyte\n", sizeof(arrScore[0][0]));

	puts("=======================");
	printf("arrScore : %d번지\n", arrScore);
	printf("arrScore[0] : %d번지\n", arrScore[0]);
	printf("&arrScore[0][0] : %d번지\n", &arrScore[0][0]);

	puts("=======================");
	printf("arrScore + 1 : %d번지\n", arrScore + 1);
	printf("arrScore[0] + 1: %d번지\n", arrScore[0] + 1);
	printf("&arrScore[0][0] + 1 : %d번지\n", &arrScore[0][0] + 1);

	puts("=======================");
	printf("arrScore + 2 : %d번지\n", arrScore + 2);
	printf("arrScore[0] + 2: %d번지\n", arrScore[0] + 2);
	printf("&arrScore[0][0] + 2: %d번지\n", &arrScore[0][0] + 2);

	puts("=======================");
	printf("arrScore + 3 : %d번지\n", arrScore + 3);
	printf("arrScore[0] + 3: %d번지\n", arrScore[0] + 3);
	printf("&arrScore[0][0] + 3 : %d번지\n", &arrScore[0][0] + 3);
}