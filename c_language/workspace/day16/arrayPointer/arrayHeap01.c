#include <stdio.h>
#include <stdlib.h>
/*
	2���� ���� �迭
*/
//�迭
//int ar[3];  // int *pAr = (int *)malloc(sizeof(int) * 3)   [   ]  [   ] [   ]
//          pAr[0] pAr[1] pAr[2]
//          free(pAr)

//int arr[2][3];
// arr�� [0]�� [1]�� ���� �ִ�.
// arr[0] �� ���� �κй迭�̴�(�ּҴ�)!   arr[0] -> [0] ~ [2]���� ��Ҹ� ���� �ִ�!

/*
int arr[2][n��];

arr[0] ��Ҵ� �ּҸ� ������ �� �ִ�!!!
arr[0] = int �� �(=���� ����) ���� �ִ� ù��° ���̳�?
arr[0] = (int *)malloc(sizeof(int) * n��);
arr[1] = (int *)malloc(sizeof(int) * n��);

��, arr[0]�� int�� ��Ҹ� ���� �ִ� �ּ� ���� �迭 (arr[0]�� int* Ÿ���̴�!!)

������

arr[0]
arr[1]
arr[2]

..
arr[n] �� ��!
==================================================

int ** pArr = (int **)malloc(sizeof(int *) * n��);  //n�� ��ŭ ���� ����� ����!(������ ����)
���� n�� 3�� �Է��ߴٰ� ���� ��,
ù��° �� pArr[0] �� m���� ���� ���� �� �ִ�!
pArr[0] = (int *)malloc(sizeof(int) * m��);  // 1�� (0��)���� m�� ��ŭ �����͸� �Է��� �� �ִ�
// 1���� �迭�� ���������!

pArr[1] = (int *)malloc(sizeof(int) * m��);

pArr[2] = �������� �����Ұž�... m�� ��ŭ �������! �����迭�� ������! (1���� �迭)

pArr �� int ** Ÿ���̰�,      pArr���� (int *) Ÿ������ n���� ����� �� �� �ִ�(��� ����)
pArr[0] �� int * Ÿ���̴�.    pArr[0] ���� (int) Ÿ������ m���� �����͸� ���� �� �ִ�(���� ����)

*/

void main() {
	//int n = 0, m = 0;
	////1. 2���� �����迭�� 2�� 3�� ¥�� ����迭�� ����� ���ô�!
	//printf("�� �� ���� �ֽ��ϱ�? "); scanf("%d", &n);
	//int **pArr = (int **)malloc(sizeof(int *) * n); //2���� ������

	////pArr�� �ּҸ� �޾ƿԴ�!
	//for (int i = 0; i < n; i++){
	//	printf("%d�ݿ� �� �� �ֽ��ϱ�? ", i + 1); scanf("%d", &m);
	//	pArr[i] = (int *)malloc(sizeof(int) * m);
	//	printf("pArr[%d] : %d\n",i, pArr[i]);

	//}
	////printf("%d\n", pArr[0]);
	////printf("%d\n", pArr[1]);

	//for (int i = 0; i < n; i++){
	//	for (int  j = 0; j < m-1; j++){
	//		printf("%d�� %d�� �л� ���� �Է�: ",i+1, j+1, pArr[i][j]);
	//		scanf("%d", &pArr[i][j]);
	//	}
	//}

	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < m; j++) {
	//		printf("%d�� %d�� �л� ����: %d��  ", i + 1, j + 1, pArr[i][j]);
	//	}
	//	puts("");
	//}
	//free(pArr[1]);
	//free(pArr[0]);
	//free(pArr);

	
	//1.  2���� �����迭�� 2�� 3�� ¥�� ����迭�� ����� ���ô�!
	int **pArr = (int **)malloc(sizeof(int *) * 2);	//2���� ����ž�
													//pArr�� �ּҸ� �޾ƿԴ�!
													//pArr ��  (int *)�� �����ϴ� ������ �������.
													//*(pArr + 0) = (int *)malloc(12);   //sizeof(int)*3ĭ
													//*(pArr + 1) = (int *)malloc(12);

	pArr[0] = (int *)malloc(12);  //3ĭ�� ���� 1���� �迭
								  //�Է�10, 11, 12
	pArr[0][0] = 10;
	pArr[0][1] = 11;
	pArr[0][2] = 12;

	pArr[1] = (int *)malloc(12);  //3ĭ�� ���� 1���� �迭
	pArr[1][0] = 21;
	pArr[1][1] = 22;
	pArr[1][2] = 23;

	//����
	int tot = 0;
	//���
	double avg = 0.0;
	//���
	int rowTot = 0;
	double rowAvg = 0.0;
	for (int i = 0; i < 2; i++) {
		printf("====%d��(%d��)====\n", i, i + 1);
		for (int j = 0; j < 3; j++) {

			printf("pArr[%d][%d] : %d��\n", i, j, pArr[i][j]);
			tot += pArr[i][j];
			rowTot += pArr[i][j];
		}
		rowAvg = rowTot / 3;
		printf("---%d�� �� : %d��\t��� : %.2f��---\n", i + 1, rowTot, rowAvg);
		rowTot = 0;
	}
	avg = (double)tot / 6;
	puts("----���----");
	printf("���� : %d��\t��� : %.2f��\n", tot, avg);


	//2. n�� m��¥�� �迭�� ���� �� �ְڴ�.
	// -> � ���� �� �𸣱� ������!! ��¿ �� ���� for���� ��� �Ѵ�!
	// -> for���� ����, �ึ�� ���� ������ �ٸ���! �׷��� ������, ���� �Է��� ������
	//    ������ ���� ������ ������ �� �ִ� 1���� ���� �迭�� ������ ����� �� �ִ�!!






}
