#include <stdio.h>
/*
	�迭�� ������

*/
void fct(int num, int *pNum);  // == pNum[]
void fct2(int, char, double);

void main() {

	int *pAr = 0;
	int arNum[5] = { 10, 20, 30, 40, 50 };  //����

	//�迭�� ������ : �迭�� �����Ϳ� �����ϴ�!
	pAr = arNum;

	printf("pAr : %d����\n", pAr);		// 100����
	printf("arNum : %d����\n", arNum);  //  100����
	
	// *(�ּ� + ĭ) == �ּ�[ĭ]
	printf("*(pAr+0) : %d�� arNum[0] : %d��\n", *(pAr + 0), arNum[0]);
	printf("*(pAr+1) : %d�� arNum[1] : %d��\n", *(pAr + 1), *(arNum+1));
	printf("*(pAr+2) : %d�� arNum[2] : %d��\n", pAr[2], arNum[2]);
	printf("*(pAr+3) : %d�� arNum[3] : %d��\n", *(pAr + 3), arNum[3]);
	printf("*(pAr+4) : %d�� arNum[4] : %d��\n", *(pAr + 4), arNum[4]);

	fct(5, arNum);

}
//�Լ� �ۼ�
void fct(int num, int *pNum ) { //  == pNum[]
	puts("====================");
	for (int i = 0; i < num; i++){
		//printf("fct���� ���", *(pNum+i) );
		printf("fct���� ��� %d��\n", pNum[i]);
	}
}

void fct2(int a, char b, double c) {



}