#include <stdio.h>
void printScore(int, int *);  // ������ �Ƚ��൵��
void main() {

	int arrScore[3][4] = {

		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}


	};

	//arrScore�� int[4]�� �̵��ϴ� �迭�̴�! (16byte�� �̵��Ѵ�)
	//arrScore�� int[4] �̵��ϴ� �κй迭�� 3�� ����ִ�.
	//arrScore�� ù��° ��Ҵ� arrScore[0] �̴�.
	//arrScore[0]�� �迭�ε�, int�� 4�� ���� �ִ� �迭�̴�.
	//arrScore[0]���� +1�� �ϸ� int�� (4byte��) �ּҰ��� �̵��Ѵ�.

	printf("arrScore : %dbyte\n", sizeof(arrScore));
 	printf("arrScore[0] : %dbyte\n", sizeof(arrScore[0]));
	printf("arrScore[0][0] : %dbyte\n", sizeof(arrScore[0][0]));

	puts("=======================");
	printf("arrScore : %d����\n", arrScore);
	printf("arrScore[0] : %d����\n", arrScore[0]);
	printf("arrScore[0][0] : %d����\n", &arrScore[0][0]);

	puts("=======================");
	printf("%d����\t%d����\t%d����\n", (arrScore), (arrScore+1), (arrScore+2));// arrScore�� ���� �ִ� ��Ҵ� int[4]�̴� -> ���̵� 
																			  // ���������͸� Ÿ�� 1�� >> 2�� >> 3�� (16byte�� �̵��Ѵ�}
	printf("%d����\t%d����\t%d����\n", (arrScore), (arrScore + 1), (arrScore + 2));
	// arrScore[0] �� �����ִ� ��Ҵ� int ���̴�  -> �� �̵� ���� > ����

	//����1)��� ���̵�!!!
	//2�� for���̿�
	//arrScore�� ���� �Է¹�������.
	//arrScore�� ���� ����ϼ���.
	// �� ������!!
	// 10 20 30 40
	// 50 60 ......

	// row, col -> for���� ���� �� �ִ� ������ "����迭" �̱� �����̴�.
	// "����迭" <---> ("������迭" : �����迭!!!)

	int row = sizeof(arrScore) / sizeof(arrScore[0]);
	int column = sizeof(arrScore[0]) / sizeof(arrScore[0][0]);
	for (int i = 0; i < row; i++){
		for (int j = 0; j < column; j++){
		printf("%d�� ���� �Է�: ", i + 1); scanf("%d", &arrScore[i][j]);
		}
	}

	puts("");

	for (int i = 0; i < row; i++) {
		printf("%d��: ", i + 1);
		for (int j = 0; j < column; j++) {
			if (j == 3) {
				printf("%d��\n", arrScore[i][j]);
			}
			else {
				printf("%d��, ", arrScore[i][j]);
			}
		}
	}
	puts("");

	//����2)
	// �� �ึ�� ����, ����� ����ϼ���
	//             (����) ���
	// 10 20 30 40 100    25.0
	int total = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
				total += arrScore[i][j];
		}
			printf("%d�� ���� :%d\t���: %.2f\n", i + 1, total, (double)total / column);
			total = 0;
	}
	/*printf("1�� ���� :%d\t���: %.2f\n", total1, (double)total1 / size1);
	printf("2�� ���� :%d\t���: %.2f\n", total2, (double)total2 / size1);
	printf("3�� ���� :%d\t���: %.2f\n", total3, (double)total3 / size1);*/

	//����3)
	// �Լ��� �Ѱܼ� ����� ������
	// printScore(�� size, �� size, �迭�� ��ġ);
	for (int i = 0; i < row; i++)
	{
	printScore(column, arrScore[i]); // arrScore[0]�� ��Ҹ� int�� 4�� ���� �ִ�.

	}
							 // arrScore[0] + 0�� ù��° ������ �ּҰ��̴�.
							 //*(arrScore[0] + 0) == arr[0][0]�̰�, ������!
							 //*(arrScore[0] + 1) == arr[0][1]�̰�, ������!
							 //*(arrScore[0] + 2) == arr[0][2]�̰�, ������!
							 //*(arrScore[0] + 3) == arr[0][3]�̰�, ������!

}
void printScore(int column,int *pAr){
	//printf("%����\n", pAr); //�� �ϸ�, arrScore[0]�� ������ ���۹����� ���´�.
	//printf("%����\n", pAr + 1); // pAr�������� +1(4byte�� �̵��ض�)

	//�Է��� �ް�
	//�ึ�� ���� ��� ��±��� �Ѵ�!
	int total = 0;
	/*for (int i = 0; i < column; i++){
		printf("%d�� ���� �Է� : ", i+1);
		scanf("%d", pAr + i);
		total += pAr[i]; //������ �̸� ����� ����!
	}*/

	//���
	for (int i = 0; i < column; i++){
		total += pAr[i];
		printf("%d��  ", pAr[i]);
	}
	double avg = total / column;
	printf("\t���� :%d��\t���: %.2f��\n", total, avg);





	/*scanf("%d", pAr+0); //(ù��° �� �ϴ� ����) 1�� ���� �Է�
	scanf("%d", pAr+1); //2�� �Է�
	scanf("%d", pAr+n);*/



	}






	/*int total1 = 0, total2 = 0, total3 = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size1; j++) {
			if (i == 0) {
				total1 += arrScore[i][j];
			}
			else if (i == 1) {
				total2 += arrScore[i][j];
			}
			else if (i == 2) {
				total3 += arrScore[i][j];
			}
		}
	}
	printf("1�� ���� :%d\t���: %.2f\n", total1, (double)total1 / size1);
	printf("2�� ���� :%d\t���: %.2f\n", total2, (double)total2 / size1);
	printf("3�� ���� :%d\t���: %.2f\n", total3, (double)total3 / size1);*/

