#include <stdio.h>
#include<stdlib.h>
/*
	���� �޸�(2)
	stdlib.h
	malloc.h

	1. ����
	1) malloc()
			(1) heap�� �޸𸮸� ���� �� �ּҰ��� �����ϴ� �Լ�
			(2) �Ұ�ȣ �ȿ� ���ϴ� byte���� "����"�� �Է��Ѵ�.
			    void * malloc(10); heap�� 10byte�� ���� ��....
				10byte ���۹����� �����ض�!
			(3) ���ϵǴ� �ּҰ��� void * �̴�!
			(4) �׷��� malloc()�� ����ϰ� �� ��,
			    �ٷ� ����ȯ �ؼ� �������!



				���� 2�� �����͸� heap���� ����� �ʹ�!

				int *ptr���� = (int *)malloc(8)   ;

				ù��° ������ ������ 10 �ֱ�
				ptr���� 10�� �ְ� �ʹ�!
				*(ptr����+0) = 10;

				�ι�° ������ ������ 20 �ֱ�
				*(ptr����+1) = 20;


	2. �Ҹ�
	1) free()
	     free(�ּ�)

*/
void inputNum(int *pNum) {
	printf("���� 2�� �Է� : ");
	scanf("%d %d", pNum, pNum + 1);
}

void printInputNum(int *pNum) {
	printf("ù ��° ���� : %d\t�ι�° ���� : %d\n", *pNum, *(pNum + 1));

}



void main() {

	//���� ���� �ΰ��� heap���� �����!
	int *ptrNum = (int *)malloc(sizeof(int) *2); 
	//��������� �Է¹��� �� malloc(n * size(int, double, char)); 

	//���� scanf()�� �Է¹޴´�.
	printf("���� 2�� �Է� : ");
	scanf("%d %d", ptrNum, ptrNum + 1);
	//inputNum(ptrNum);


	//����Ѵ�.
	printf("ù ��° ���� : %d\t�ι�° ���� : %d\n", *ptrNum, *(ptrNum + 1));

	//printInputHeap(ptrNum);

	/*int userNum = 0;
	//����ڷκ��� ���� �Է� �޴´�
	printf("���ϴ� �� �Է� : "); scanf("%d", &userNum);

	//���� �Է¹��� ���� 5�̰� int�� ũ��� �޸𸮿� �Ҵ�ް� ������ sizeof(int)�� 4byte�� ���ؼ� 20byte�� �޸𸮿� �ö󰣴�
	//5���� ������ �ּҰ��� ���� ���� �� �ִ�

	int *ptrNum = (int *)malloc(userNum * sizeof(int));

	//void *�� �ּҰ��� �����ϱ� ������ �ּ�Ÿ���� int*���� ���� �� ��ȯ������� �Ѵ� 
	//�׸��� �ּҰ��� �����ϱ� ������ ������ ���� int *ptrNum�� �����ؾ��Ѵ�

	//for���� �̿��ؼ� ����ڰ� ���ϴ� ���� �Է��Ѵ�
	for (int i = 0; i < userNum; i++){
		printf("%d�� ���� �� ����\n", i+1);
		scanf("%d", (ptrNum+i));
		//�Է��� ���� �� ������ Ȯ���Ѵ�
	}
	for (int i = 0; i < userNum; i++) {
		printf("%d���� �� : %d\n", (i + 1), *(ptrNum+i));
	}*/

	//�޸� �����Ѵ�.
	//malloc �ʱ�ȭ(heap)����
	free(ptrNum); //�޸� ����(leak)

	//stack ���� �ʱ�ȭ
	ptrNum = NULL; //���� �ʱ�ȭ

	printf("%d\n", ptrNum);
	

}