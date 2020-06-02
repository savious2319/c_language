#include <stdio.h>

typedef struct _Type {

	int kor;
	int eng;
	int math;


} Type;

void main() {

	Type std1 = { 10, 20, 30 };
	Type *pStd = NULL;

	printf("%dbyte\tstd1�� %d����\n", sizeof(std1), &std1); //sizeof(Type)  �ᵵ �ȴ�.

	//offset : ������ �Ÿ�  �� ����������� offset�� �� �� �ִ�!
	printf("std1�� ����� kor�� ��ġ : %d����\n", &std1.kor); //std1���� ��������� ȣ���Ѵ����� �� ������ �ּҰ��� �д´�
	printf("std1�� ����� eng�� ��ġ : %d����\n", &std1.eng);
	printf("std1�� ����� math�� ��ġ : %d����\n", &std1.math);

	//pStd�� �� byte�� �д� ������ ������� �ϴ°�?
	pStd = &std1;

	// *pStd == �ش� ������ ����!   *�� �ּҸ� ���ؼ� ����(=����)�� �����!
	//*pStd = std1

	//printf("pStd�� ���ؼ� ���� ������ �о�� : %d\n", *pStd.kor);
	//�� ������? ���� �ֿ켱 �������ε� �ּҿ����� �о��?? . �׷��� �Ұ�ȣ�� �ּҸ� ������ ������ �Ѵ�

	printf("pStd�� ���ؼ� ���� ������ �о�� : %d\n", (*pStd).kor);
	//�ּҸ� ���� *�� ���� "����ü ����"�� ���� �� .�� ���� ȣ���ϰ��� �ϴ� ��������� �θ��� �ȴ�. (*����üptr).�������
	//(*�ּ�).  --->  �ּ�->������� �����ڷ� �ٲ� �� �ִ�. -> : �ּҰ� ����Ű�� ��������� ȣ���ض�!

	printf("pStd�� ���ؼ� ���� ������ �о�� : %d\n", (*pStd).eng);
	printf("pStd�� ���ؼ� ���� ������ �о�� : %d\n", (*pStd).math);

	// (* �ּ�) . ������� :: �ּ� -> �������  ���·� ġȯ�� �� �ִ�!
	puts("==============================");
	printf("���� : %d��\n", pStd->kor); // pStd�� ����Ű�� kor������ ���� �о��!
	printf("���� : %d��\n", pStd->eng); 
	printf("���� : %d��\n", pStd->math);

	/*
	
		&pStd->kor  
		&pStd->eng
		&pStd->math : pStd�� "����Ű��" math ������ ���� (math��)�ּҸ� ���غ���!

	*/
}