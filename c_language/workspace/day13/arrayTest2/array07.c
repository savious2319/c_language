#include <stdio.h>

void main() {

	//2���� �迭�� �ʱ�ȭ
	//3��¥�� �� �ٸ��� 4ĭ
	int arrNum[3][4] = {    //����!! 3�ݿ� 4���� �־�
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	// A��
	// B��	������ �Ⱥô�!
	// C��
	int arScore[12] = { 1,2,3,4,0,0,0,0,9,10,11,12 }; //1���� �迭�� �� �� �ִ�
	int arScore2[][4] = {
		{ 1,2,3,4},
		{0,}, // �ڵ����� �ʱ�ȭ�ȴ� // , <-- �ڴ� �� 0�̾�
		{9,10,11, 12}

	};

	int arrScore3[][3] = { 2,3,4,5,4,6,5,3,6,3,4,5,3,4,5,4,5,3,4 };
	//���� ������?


	//int arrScore4[][3] = { {2,3,4},{5,4,6,5},3,6,3,4,5,3,4,5,4,5,3,4 };
	
	int arrScor5[][3] = { {2},3,4,5,{4,6},5 ,3, 6, 3, 4, 5, 3, 4, 5, 4, 5, 3, 4 };
	int size1 = sizeof(arrScor5) / sizeof(arrScor5[0]); //8
	int size = sizeof(arrScor5[0]) / sizeof(arrScor5[0][0]);  //3
	for (int i = 0; i < size1; i++) { // i : 0��~6�����
		for (int j = 0; j < size; j++) { // j : (�� �ึ��) 0��~2�� < 3���� �۰�
			//�ຯȭ ���� "======" ����� �ּ���

			printf("arrScore5[%d][%d] : %d��\n", i, j, arrScor5[i][j]);

		}
		puts("=============");
	}
	printf("sizeof(arrScor5) / sizeof(arrScor5[0]) : %dbyte\n", sizeof(arrScor5) / sizeof(arrScor5[0]));
	printf("sizeof(arrScor5[0]) / sizeof(arrScor5[0][0] : %dbyte\n", sizeof(arrScor5[0]) / sizeof(arrScor5[0][0]));
	}