#include <stdio.h>



void main() {

	//�迭: 1. �迭�� ���� �����Ϸ��� �˻����� �ʴ´� --> c����� Ư¡
	//			--> �迭�� �Ű������� ������ ��, "�ݵ��!!" ����(=��Ұ��� ��ĭ�ε�?)�� �˷���� �Ѵ� 
	//      2. �迭���� ������ ����� = �׷��� �����ͺ��� = �迭��;

	//�迭����� �ʱ�ȭ
	int arScore0[5];				//�����Ⱚ
	int arScore[3] = { 10, 20, 30 };
	int arScore2[4] = { 11, 12 }; // ������ 2�� ���� �ڵ����� 0�� ä������.

	//�迭 ��� ȣ�� == �迭��[�ε���] ���ȣ ������ ���
	//�迭�� ù��°(����) ���� ȣ���Ҷ��� ���ذ�(���)�� �׻� 0���� �����ؾ� �Ѵ�!!!
	// -> ù��° ���ȣ�� 0�� �̾�~~!

	//10�� ����ϰ� �ʹ�!
	//arScore2[1];   //1���� ���ȣ -> �ι�°�� ��� �ִ� ���� �ҷ�����!
	printf("arScore[0] : %d\n", arScore2[0]); //<--- 11
	printf("arScore[1] : %d\n", arScore2[1]); //<--- 12

	//10, 20, 30, 40, 50 ������ �ʱ�ȭ �ϴ� �迭�� �����,
	//�ϰ�ó��(for�� �̿�)�� ���� ����� ������

	int arScore3[5] = { 10, 20, 30, 40, 50 };

	int total = 0;
	for (int i = 0; i < 5; i++){
		printf("arScore3[%d] : %d��\n",i, arScore3[i]);
		total += arScore3[i];
	}
		printf("���� : %d\n", total);


	//�迭 ����2 : ���� �����, �ʱⰪ�� �ִٸ�, �ε����� ������ �� �ִ�!
	//�ʱⰪ : 1, 2, 3, 4
	int arNum2[] = {1,2,3,4}; //�迭 ������ �ʱⰪ�� ������ �����ϴٸ� �ε��� ���� ����!!!

	for (int i = 0; i < 4; i++){ 
	printf("arNum2[%d] : %d\n",i, arNum2[i]);

	}
	//printf("arNum2[1] : %d\n", arNum2[1]);
	//printf("arNum2[2] : %d\n", arNum2[2]);
	//printf("arNum2[3] : %d\n", arNum2[3]);

	int arRandom[] = { 34,235,4363,4656,534,7653,746,345,65365,656,546,54,65,4,64,5 };
	//���� ���ϱ�
	//��� ���ϱ�
	//�迭�� ũ�� ���ϱ�(byte) ���ϱ� -> ������ ���� �� �ִ�.
	printf("arRandom�� ũ�� : %dbyte\n", sizeof(arRandom)); //sizeof()�ȿ� ��������� ũ�⸦ �� �� �ִ�
	//int size(�Ǵ� length)
	int size = sizeof(arRandom) / 4;
	//size = sizeof(arRandom) / sizeof(int);
	size = sizeof(arRandom) / sizeof(arRandom[0]); //100�� ¥��
	total = 0; // �ݵ�� �ʱ�ȭ�� ������� �Ѵ�!!!
	for (int i = 0; i < size; i++)  //����(ĭ��)
	{
		total += arRandom[i];
		
	}

	printf("arRandom�� ���� : %d\n", total);
	printf("arRandom�� ��� : %.2f\n", (double)total / size);







}