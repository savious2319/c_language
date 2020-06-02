#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void inputScore01(int scoreSize, int *pScore, int pSubSize, char **pSubject);
void printScore01(int scoreSize, int *pScore, int pSubSize, char **pSubject);
int n_getSubNum02(int testNum);
void n_InputScore02(int testNum, int *pSubNum);
void n_PrintScore02(int testNum, int *pSubNum);



void main() {

	//����1] �����Լ����� ���� ���� ���� ���� �Է� �ް�
	//		printScore01()���� ���� ����� ����Ѵ�.

	int score[3] = { 0 }; //���� ���� ���� ���� �迭 �ʱ�ȭ
	char *subject[3] = {"����","����","����"}; //���ڿ� ������ �迭 �ʱ�ȭ
	int subSize = sizeof(subject) / sizeof(subject[0]); //���ڿ� �迭 ũ��
	int scoreSize = sizeof(score) / sizeof(score[0]); //���� �迭 ũ��

	inputScore01(scoreSize, score, subSize, subject);

	printScore01(scoreSize, score, subSize, subject); //���� �迭 ũ��, ���� �迭 �ּ�, ���ڿ� �迭 ũ��, ���ڿ� �迭 �ּ�


	//����2] �����Լ����� ������� ���� �Է¹ް� (�ʼ� 3����, ���� 7����) �׷��� 10���� ������ �ȵ�
	//		n_PrintScore02() �Լ����� ������� �� ��ŭ ������ �Է¹��� �� <=== �����޸�(�����迭)
	//		����, ��� ���ϴ� �Լ�, n_PrintScore02() �����
	int testNum = 0;

	testNum = n_getSubNum02(testNum);

	int *subNum = (int *)malloc(testNum * sizeof(int)); // �Է¹��� �������ŭ�� ���� �迭 ũ�� �����ؼ� ������ ������ ����

	n_InputScore02(testNum, subNum);

	n_PrintScore02(testNum, subNum);

	free(subNum); // �޸� ����
	subNum = NULL; // stack���� ����
	printf("%d\n", *subNum);
		
}

//���� ���� ���� ���� �Է��ϴ� �Լ�
void inputScore01(int scoreSize, int *pScore, int pSubSize, char **pSubject) {
	printf("��������������������������������������������������������\n");
	printf("��        ���� �Է�         ��\n");
	printf("��������������������������������������������������������\n");
	for (int i = 0; i < scoreSize; i++)
	{
		printf("%s���� �Է� : ", pSubject[i]); 
		scanf("%d", &pScore[i]);
		if (pScore[i] < 0 || pScore[i] > 100) {
			puts("0~100�� ���̸� �Է��ϼ���");
			i--;
		}
	}
}
//���� ���� ���� ����, ����, ��� ����ϴ� �Լ�
void printScore01(int scoreSize, int *pScore, int pSubSize, char **pSubject) {
	int total = 0;											//���ڿ� �迭 �ּ� �ȿ� ���ڿ��� �ֱ⶧���� ���� �����ͷ� �޾ƾ� �Ѵ�
	printf("�������������������������������������������������������� \n");
	printf("�� ���� ���� / ���� / ��զ� \n");
	printf("�������������������������������������������������������� \n");
	for (int i = 0; i < scoreSize; i++)
	{
		printf("%s���� : %d��\n", pSubject[i], pScore[i]); //���� ���� ���� ���� ���
		Sleep(500);
		total += pScore[i]; // �� 3���� ���� 
	}
	Sleep(500);
	puts("");
	printf("���� : %d��\n��� : %.2f��\n", total, (double)total / scoreSize); //����, ��� ���
}
//����� �Է¹޴� �Լ�
int n_getSubNum02(int testNum) {
	do {
		puts("");
		printf("�������������������������������������������������������� \n");
		printf("��     ���� ����� �Է�     �� \n");
		printf("�������������������������������������������������������� \n");
		scanf("%d", &testNum);
		system("cls");
		if (testNum == 0 || testNum < 3 || testNum > 11) {
			printf("����� 3���� ���� �ʼ�\n�輱�ð����� 7��\n���� 10���� �ʰ��ϸ� �ȵ�\n");
		}
	} while (testNum < 3 || testNum > 11);

	return testNum;
}
//���� ���� �Է¹޴� �Լ�
void n_InputScore02(int testNum, int *pSubNum){
	for (int i = 0; i < testNum; i++)
	{
		printf("%d�� ���� ���� �Է� : ", i + 1); 
		scanf("%d", &pSubNum[i]); // ���� ���� �Է¹ޱ�
		if (pSubNum[i] < 0 || pSubNum[i] > 100) {
			puts("0~100�� ���̸� �Է��ϼ���");
			i--;
		}
	}

}
//���� ���� �Է�, ���� ����� ����ϴ� �Լ�
void n_PrintScore02(int testNum, int *pSubNum) {
	int total = 0;
	puts("==========================");
	printf("�������������������������������������������������������������� \n");
	printf("�� ���� ���� ���� / ���� / ��զ� \n");
	printf("�������������������������������������������������������������� \n");
	for (int i = 0; i < testNum; i++)
	{
		printf("%d�� ���� ���� : %d��\n", i + 1, pSubNum[i]);
		Sleep(500);
		total += pSubNum[i];
	}
	Sleep(500);
	puts("==========================");
	printf("���� : %d��\n��� : %.2f��\n", total, (double)total / testNum);

}
