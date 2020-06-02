#include <stdio.h>
#include <stdlib.h>

//�л� �� �Է¹޴� �Լ�
void getSNumInput(int *sNum) {// �Ҵ��� ���� �Է¹ޱ�
	printf("�л� �� �Է� : ");
	scanf("%d", sNum);
}
//�Է¹޴� �Լ�
int* sNumInputAlloc(int sNum) {//�Է¹��� ����ŭ ���� �޸� �Ҵ��ϱ�
	
	return (int *)malloc(sNum * sizeof(int)); //�Ҵ�� �޸𸮸� �������ش�
}

//�л� ���� �Է� �Լ�
void sGradeInput(int sNum, int *pNum) { //main���� ���� �� ���ڸ� int sNum�� int *pNum�� �Ű������� �޴´�
	puts("������ 0~100 ���̷� �Է����ּ���.\n");
	for (int i = 0; i < sNum; i++)
	{
		printf("%d�� �л� ���� : ", i + 1);
		scanf("%d", pNum + i);
	}
}

// �������� ��� ����Լ�
void printGradeTotalAvg(int sNum, int *pNum, int total) {
	puts("=================");
	for (int i = 0; i < sNum; i++)
	{
		printf("%d�� �л� ���� : %d\n", i + 1, *(pNum + i));
	}
	puts("=================");
	for (int i = 0; i < sNum; i++)
	{
		total += *(pNum + i); //����
	}
	
	printf("���� : %d\n��� : %.2f\n", total, (double)total / sNum);
}

void main() {
	int sNum = 0; // �л��� �ʱ�ȭ
	int total = 0;
//	int *pNum = NULL; ���� �޸� �Ҵ��� ���� ������ ���� 

	getSNumInput(&sNum); // �л��� �Է��ϴ� �Լ� ȣ��

	int *pNum = sNumInputAlloc(sNum); // ���Ϲ��� ���� ������ ������ �����Ѵ�

	sGradeInput(sNum, pNum); //�л� ���� �Լ����� �ΰ��� �л��� ���ڿ� ������ ���ڸ� ������ �Ѵ�

	printGradeTotalAvg(sNum, pNum, total); //������ ��� �Լ����� �л���, ������, total�� ���ڸ� ������ �Ѵ�


	//�޸� �����Ѵ�.
	free(pNum); 

	//stack ���� �ʱ�ȭ
	pNum = NULL; 

	//printf("%d\n", pNum);


}