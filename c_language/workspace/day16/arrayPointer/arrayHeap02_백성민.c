#include <stdio.h>
#include <stdlib.h>
/*
	2�� ������ �迭 (int **pArr)

	0�� -------n��
	1�� -------n��

	�ึ�� ���� ������ ������ ���� �ʴ�!
	//1. �ึ�� ���� ������ �Է¹ޱ�
	//2. �� ������ ���� �Է��ϱ�
	//3. �ึ�� ���� ��� ���ϱ�
	//4. ��ü ���� ��� ���ϱ�
	
	
*/
	//1. ���� �����ϴ�(2����) ���� �޸� �Ҵ� �ޱ� : 2����

	//2. �ึ�� ������� scanf()�� �л��� �Է¹ޱ�

	//3. �࿭ �� ���� �Է��ϱ�(�л� �� ��ŭ)

	//4. ����, ��� ����ϱ�

	//5. ����ϱ�!

	//   ** ���� �Է� �ϱ�**
	//   1�� �л��� �Է� : 3��
	//   2�� �л��� �Է� : 5��
	//   ���� �Է�
	//   1�� 1�� : 30��
	//   1�� 2�� : 30��
	//   1�� 3�� : 30��
	//   2�� 1�� : 30��
	
	//   ���� ���
	//   1�� 1�� : 30��
	//   1�� 2�� : 30��
	//   1�� ���� : xx��  �� ��� : xx.xx��

	//   2�� 1�� : 30��
	//   2�� 2�� : 30��
	//   2�� ���� : xx��  �� ��� : xx.xx��
void main() {

	int **pArr = NULL; //���� 2�� ���̴�!
	int n = 0; // �� �� �Է¹޴� ����
	int hak = 0; // �л��� �Է¹޴� ����

	//1. ���� �����ϴ�(2����) ���� �޸� �Ҵ� �ޱ� : 2����
	printf("�� �� ���� �ֽ��ϱ�? "); scanf("%d", &n);
	pArr = (int **)malloc(sizeof(int *) * n); 
	int *pHak = (int *)malloc(sizeof(int) * n);

	//2. �ึ�� ������� scanf()�� �л��� �Է¹ޱ�
	for (int i = 0; i < n; i++){
		printf("%d�ݿ� ����ֳ���? ", i+1); scanf("%d", &hak); //scanf("%d", &pHak[i]) �׷��� hak�̶�� ������ �ʿ��������
		pHak[i] = hak;
		pArr[i] = (int *)malloc(sizeof(int) * hak);
	}
	puts("----------------------");
	//3. �࿭ �� ���� �Է��ϱ�(�л� �� ��ŭ)
	//4. ����, ��� ����ϱ�
	//5. ����ϱ�!
	int rowTot = 0, all_total = 0, sum = 0;
	double all_avg = 0.0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < pHak[i]; j++){
			printf("%d�� %d�� ���� �Է� : ", i + 1, j + 1); scanf("%d", &pArr[i][j]);
			rowTot += pArr[i][j];
			all_total += pArr[i][j];
			}
		sum += pHak[i];
		printf("%d\n", sum);
		printf("---%d�� ���� : %d��\t�� ��� : %.2f��---\n", i + 1, rowTot, rowTot / (double)pHak[i]);
		puts("----------------------");
		rowTot = 0;
		}
		all_avg = all_total / (double)sum;
	printf("---��ü ���� : %d��\t��ü ��� : %.2f��---\n", all_total, all_avg);

	//free()
	for (int i = 0; i < n; i++){ //2���� �迭�� ���� ���� �޸� ����
		free(pArr[(n-1) - i]);
		pArr[i] = NULL;
		printf("pArr[%d] �޸� ���� �ƽ��ϴ�\n", i);
	}

	free(pArr); //2���� �迭�� ���� ���� �޸� ����
	free(pHak);

	pArr = NULL;
	pHak = NULL;

	printf("%d\n", pArr);
	printf("%d\n", pHak);









}