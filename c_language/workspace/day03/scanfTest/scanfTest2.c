#include<stdio.h>
/*
	������ -> ����, ���ڿ�

	�Ǽ� �Է¹ޱ�

	scanf("%c", &����������);

	scanf("%s", ���ڹ迭);

	scanf(".1f%", &�Ǽ�������); <---�Ǽ��� �Է¹��� ���� %f�� ���� �ʰ�, %1f�� �Է��� �޾ƾ� �Ѵ�.
									//long float�� ���� -> double�� �ǹ��Ѵ�.
									//�Ǽ��� �⺻���� double�̴ϱ�.. %1f�� �Է¹���!
									// (����� ���� %f�� ����ϸ� �ȴ�)

*/

void main()
{

	//printf("�̸��� �Է��ϼ��� : "); scanf("%s", arName);  //�迭���� �̹� �ּ��̴϶����� &�� �ʿ����!
	//printf("�ּҸ� �Է��ϼ��� : "); scanf("%s", arAddress); //�迭���� "������ ���" ��!!!

	//scanf_s() �Լ���???
	//printf("�ּҸ� �Է��ϼ��� : "); scanf_s("%s", arAddress, ���ڿ��� ũ��);
	// ũ��(byte��) �� �˷��ִ� ������ : sizeof()
	//sizeof(����); ���� : �ڷ���, ����, ����ڰ� ���� Ÿ��, ��� ����� ���ָ�,
	//					  RAM�� �����Ʈ�� ������� �ִ��� ũ�⸦ �˷��ִ� �������̴�!
	//printf("�ּҸ� �Է��ϼ��� : "); scanf_s("%s", arAddress, 100);
	//�̷��� �ᵵ �ȴ�. ������,,, �Ź� ũ�⸦ ����ߴ� �� �� �����ϱ�. sizeof()�� �������!!!
	//printf("�ּҸ� �Է��ϼ��� : "); scanf_s("%s", arAddress, sizeof(arAddress));

	//sizeof()
	/*
	printf("int �ڷ��� : %dbyte\n", sizeof(int));
	printf("char �ڷ��� : %dbyte\n", sizeof(char));
	printf("double �ڷ��� : %dbyte\n", sizeof(double));
	printf("float �ڷ��� : %dbyte\n", sizeof(float));
	printf("���� ��� : %dbyte\n", sizeof('a'));
	printf("���� ��� : %dbyte\n", sizeof(10));
	printf("���ڿ� ��� : %dbyte\n", sizeof("5"));
	printf("���ڿ� ��� : %dbyte\n", sizeof("a"));
	printf("���ڿ� ��� : %dbyte\n", sizeof("��"));
	printf("���ڿ� ��� : %dbyte\n", sizeof("����"));
	printf("���ڿ� ��� : %dbyte\n", sizeof("abcd"));

	int a, b, c;
	printf("���� : %dbyte\n", sizeof(a));
	printf("���� : %dbyte\n", sizeof(a));
	printf("���� : %dbyte\n", sizeof(a) + sizeof(b)); //<--+ �� �ǹ̾���! ����� ���ڷ� �����⶧����
												   // ������ ���Ѻ���
	printf("���� : %dbyte\n", sizeof(a) * sizeof(arAddress));
	*/

	//printf("%dByte\n", sizeof(3.4));
	//byte���� �˷��ش�

	char arName[10] = "";
	char arAddress[100] = "";

	printf("�̸��� �Է��ϼ��� : "); scanf_s("%s", arName, sizeof(arName)); 
	printf("�ּҸ� �Է��ϼ��� : "); scanf_s("%s", arAddress, sizeof(arAddress));
	//�Է��� ��, ������ ������ �տ� �� �ܾ ��µȴ�. ������ "������"�� ������ �����̴�!
	//�Է��� ��, ������ _���ٷ� ������ �Է��� �� �ֵ��� ����!
	//����� ������ ��� "�����_������" �̷� ������ �������!!!


	//��¹� �ϼ��ϱ�
	printf("�̸� : "); puts(arName);
	printf("�ּ� : "); puts(arAddress);
	//printf("�̸�: %s\n�ּ�: %s\n", arName, arAddress);


}