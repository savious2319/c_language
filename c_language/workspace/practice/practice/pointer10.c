#include <stdio.h>
#include <stdlib.h>

void main(){
	int userInput = 0;

	//����ڿ��� �Է� �ޱ�
	printf("�л� �� �Է� : "); scanf("%d", &userInput);
	//���� �޸𸮿� �Ҵ��ϱ�
	int *pNum = (int *)malloc(userInput * sizeof(int));
	
	//���� �Է��ϱ�
	for(int i = 0; i < userInput; i++){

	printf("%d�� �л� �����Է� : \n", i+1);
	scanf("%d", pNum + i);
	}

	//����, ��� ���ϱ�
	int total = 0;
	for(int i = 0; i < userInput; i++){

	total += *(pNum + i);
	}

	//���� ����ϱ�
	for(int i = 0; i < userInput; i++){

	printf("%d�� �л� ���� : %d\n", i + 1, *(pNum + i));
	}	

	printf("���� : %d\t��� : %.2f\n", total, (double)total / userInput);



}