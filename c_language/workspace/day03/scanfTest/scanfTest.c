#include<stdio.h>
/*
	scanf("���Ĺ��ڸ�!!", &����);
	scanf("���Ĺ��ڸ�!!", �迭);   �迭�� &�� ������ �ʴ´�. ��? �迭�� �̹� �ּҰ��� ��¡�ϰ� �����ϱ�!

	& : ampersand (���ۻ���), ����(�� �����ִ�) ������
		&���� : ������ ����ִ��� ��ġ���� �˷���~  (������ ���� �ִ� �����͸� �����ִ� �� �ƴ϶�,
												(������ ��� �ִ� ����(=������)�� �˷��ִ� �Ŵ�)




*/
void main()

{
	//����, ����, ���� ������ �Է��ϰ�,
	//������ ����� ���� ��,
	//��������, ����, ����� ����Ͻÿ�.
	//�Է��� scanf() �Լ��� �̿��ؼ� �Է¹ޱ�!	
	//�������� : ����, ����� �Ҽ��� ���ڸ�
	
	int kScore = 0, eScore = 0, mScore = 0;
	char msg1[50] = "���� ������ �Է��ϼ��� : ";
	char msg2[50] = "���� ������ �Է��ϼ��� : ";
	char msg3[50] = "���� ������ �Է��ϼ��� : ";
	int totalScore = 0;
	double avgScore = 0.0;

		//float avg = 0.0f;
	puts("**** ���� ó��****");
	printf("%s", msg1); scanf("%d", &kScore);
	printf("%s", msg2); scanf("%d", &eScore);
	printf("%s", msg3); scanf("%d", &mScore);

	totalScore = kScore + eScore + mScore;
	avgScore = totalScore / 3.0;

	puts("-------------------------");
	puts("******** ���� ��� *******");
	printf("���� ����:%d\n���� ����:%d\n���� ����:%d\n����:%d\n���:%.1f\n",
		kScore, eScore, mScore, totalScore, avgScore);





}