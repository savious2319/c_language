#include <stdio.h>
#include <stdlib.h>
/*
	���� �����͸� �̿��ϸ�
	2���� ���� �迭�� ���� �� �ִ� (������ �迭)

	n�� ���� �ִ�.   �� ���� �Է¹޾ƾ� �Ѵ�.
	�� �ݸ��� m���� �ִ�.  �� ���� �Է¹޾ƾ� �Ѵ�.

	int arScore[n][m] -->(x) n���� �����迭�� �޾ƾ��Ѵ�.
	arScore[n] �� �ش��ϴ� m�� �����迭�� �޾ƾ��Ѵ�.

	//�Է�
			�ݼ� �Է� ? 3
			int **p = {
			int *p�л���0 = (int *)malloc(sizeof(int) * ban), //�Ű����� ban
			int *p�л���1 = (int *)malloc(sizeof(int) * ban), //�Ű����� ban
			int *p�л���2 = (int *)malloc(sizeof(int) * ban), //�Ű����� ban

			};
			p = (int **) malloc(sizeof(int *) * nBan);

	//ó��

	//���


*/

void inputValue(int **pArr, int n, int m);
void outputValue(int **pArr, int n, int m);
void main() {

	int n = 0, m = 0;

	printf("�� ���� �Է����ּ��� : "); scanf("%d", &n);

	int **pArr = (int **)malloc(sizeof(int *) * n);
	//int *rowTot = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++){
		printf("%d�� �л� �� �Է�: ", i + 1); scanf("%d", &m);
		pArr[i] = (int *)malloc(sizeof(int)*m);
	}
	
	inputValue(pArr, n, m);

	outputValue(pArr, n, m);


}

void inputValue(int ** pArr, int n, int m)
{

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			pArr[i][j] = i + j;
			/*printf("�л� ���� �Է�: ");
			scanf("%d", &pArr[i][j]);*/
		}
	}

}

void outputValue(int ** pArr, int n, int m){

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", pArr[i][j]);
		}
		puts("");
	}
}



