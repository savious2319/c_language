#include "StdInfoAndGrade_3.h"

/*
	����ΰ���?
	(��ȣ�� �ڵ� ���� ���� ������)

	����� ���̺�(ǥ) ���·� ����ϼ���!
	   (�ʵ�)
		�̸�		�ּ�		����		����		����		�̼�		����		���
	1��																	<---- ���ڵ�
	2��						
	3��
	4��
	n��
*/

void main() {

	int sNum = 0;
	//Prof frd = { 0 };
	sNum = inputNum();

	//���� �迭 �����
	Prof *pFrd = (Prof *)malloc(sNum * sizeof(Prof));

	//�л� �Ż����� & ���� ���� �Է� �Լ�
	inputStdInfoAndGrade(sNum, pFrd);
	//�л� ���� ��� �Լ�
	outputStdInfo(sNum, pFrd);

	free(pFrd);

}