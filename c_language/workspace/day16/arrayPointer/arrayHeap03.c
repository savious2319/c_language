#include <stdio.h>
#include <stdlib.h>
/*

	2���� ���� �迭

	�̹��� ���� ������ n���� ����� ����!  �� == �ݼ�
	�׸��� �࿡ ���� ���� m�� ����� ����! �� == (�ึ��) �л� ��

	int **ppBan = ���� ���� ���� �� �ٽ� malloc�� ��� �Ѵ�!
				  �׷��� ppBan�� ** �����ͷ� �޾ƾ� �Ѵ�!


*/
void main() {

	int banNum = 0; //�ݼ� �Է¿� ����
	printf("�ݼ� �Է� �� �ּ��� : "); scanf("%d", &banNum);

	int **ppBan = (int **)malloc(sizeof(int *) * banNum);   // 2�������� ���� -> banNum ������ ������ �Ѵ�!
	int *pHak = (int *)malloc(sizeof(int) * banNum);
	puts("===�Էº�===");
	for (int i = 0; i < banNum; i++){

		//����� �����! banNum �ึ�� ���� �Է¹޾� ����Ҹ� ���� �� �־�� �Ѵ�!
		int hak = 0;
		printf("%d�� �л����� �� ���Դϱ�? ", i + 1); scanf("%d", &hak);
		pHak[i] = hak;  //pHak�� �ִ� ��Ҹ� ���� �Է�, ���, ���, ����.... �������� ����� �� �ִ�.
		ppBan[i] = (int *)malloc(sizeof(int) * hak);
		for (int j = 0; j < pHak[i]; j++){
		//�Է�
		printf("%d�� %d�� ���� : ", i+1, j+1); scanf("%d", &ppBan[i][j]);
		}
		}
	puts("�Է� ����");
	puts("-------------");
	puts("===��º�===");
	int rowTot = 0, all_total = 0, sum = 0;
	double all_avg = 0.0;
	for (int i = 0; i < banNum; i++) {
		for (int j = 0; j < pHak[i]; j++) {
			printf("%d�� %d�� ���� : %d\n", i + 1, j + 1, ppBan[i][j]);
			rowTot += ppBan[i][j];
			all_total += ppBan[i][j];
		}
		sum += pHak[i];
		printf("%d\n", sum);
		printf("---%d�� ���� : %d��\t�� ��� : %.2f��---\n", i + 1, rowTot, rowTot / (double)pHak[i]);
		puts("----------------------");
		rowTot = 0;
	}
	all_avg = all_total / (double)sum;
	printf("---��ü ���� : %d��\t��ü ��� : %.2f��---\n", all_total, all_avg);

	for (int i = 0; i < banNum; i++) {
		free(ppBan[(banNum - 1) - i] );
		ppBan[i] = NULL;
		printf("ppBan[%d] �޸� ���� �ƽ��ϴ�\n", i);
	}
	

	free(ppBan);
	free(pHak);
	
	ppBan = NULL;
	pHak = NULL;

	printf("%d\n", ppBan);
	printf("%d\n", pHak);
}
	//ó��
	//���
	//����1) �Էº� : �Է��� �Է� ���
	//    ��º� : ����� ��� ���

	//����2) �Լ��� �����غ���! 
	//      #1) inputSocre(ban, hak, ������)  ->  void inputScore(int, int, int**)  for������ ���������� hak ���� ���� �� �ִ�
	//          printScore(ban, hak, ������)  ->  void printScore(int, int, int**)
	//      #2) intputScore(������)   ---->   void inputScore(int **){ ban, hak �Է� -> printScore(ban, hak, ������) } intputScore�� prototype�� printScore����
	//																												  �����
	//      #3) inputScore();  