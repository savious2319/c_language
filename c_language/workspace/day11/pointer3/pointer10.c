#include <stdio.h>



void main() {
	int sNum = 0;
	int total = 0;
	int avg = 0;

	//���� scanf()�� �Է¹޴´�.
	printf("�л� �� �Է� : ");
	scanf("%d", &sNum);
	int *pNum = (int *)malloc(sNum * sizeof(int)); 

	for (int i = 0; i < sNum; i++)
	{
		printf("%d�� ���� : ", i + 1);
		scanf("%d", pNum + i);

	}
	
	//�������, �������� ����, ��� ���ϱ�
	for (int i = 0; i < sNum; i++)
	{
		printf("%d�� ���� : %d\n", i + 1, *(pNum + i));
	}

	for (int i = 0; i < sNum; i++)
	{
		total += *(pNum + i);
	}

	avg = total / sNum;

	printf("���� : %d\t��� : %d\n", total, avg);
	

	//�޸� �����Ѵ�.
	free(pNum); 

	//stack ���� �ʱ�ȭ
	pNum = NULL; //���� �ʱ�ȭ


	// for������ ����, ���� ������
	
	//���Ҵ�
	//2��° ��!
	scanf("� ��?");
	

	scanf("�л��� �Է�");
	pNum = �޸��Ҵ�(�л���);
	�Է�(�л���, �ּ�);
	���(�л���, �ּ�); //������, ����(getTotal()), ���(getAvg()) ���ؼ� ����� ��!

	free(pNum);
	pNum = 0;

	//3��° ��!
	scanf("�л��� �Է�");
	pNum = �޸��Ҵ�(�л���);
	�Է�(�л���, �ּ�);
	���(�л���, �ּ�); //������, ����(getTotal()), ���(getAvg()) ���ؼ� ����� ��!

}