#include "StdInfoAndGrade.h"
/*
	�л� �Ż���� + ���� ����

	�Ż������ �� �׸�
	��ȣ, �̸�, �ּ�

	������ �� �׸�
	����, ����, ����, �̼�	(�������� 0~100�� / �̼��� 0.0~10.0����)

	���� �ִ� �Ż������ ������ ��ø����ü�� �����ϰ�,
	������ �����͸� �Է� -> ����� ������!
*/

void main() {
	int sNum = 0;
	//Prof frd = { 0 };
	sNum = inputNum();


	//���� �迭 �����
	Prof *pFrd = (Prof *)malloc(sNum * sizeof(Prof));

	//�л� �Ż����� & ���� �Է� �Լ�
	inputStdInfoAndGrade(sNum, pFrd);
	//�л� ���� ��� �Լ�
	outputStdInfo(sNum, pFrd);

	free(pFrd);
}

