#include "StdInfoAndGrade_2.h"

/*

	struct13_1

	struct ����{}	;

	struct �Ż�{
		��ȣ
		�̸�
		�ּ�
		���� ����ü�������[3]  3�� �г�

*/
void main() {
	int sNum = 0;
	Prof *pFrd = NULL;  // Prof frd = { {0}, } 
	sNum = inputNum();
	//sNum = inputNum();  

	//���� �迭 �����
	pFrd = (Prof *)malloc(sNum * sizeof(Prof));  //Prof *pFrd = (Prof *)malloc((inputNum() * sizeof(Prof))  --> ��ȸ��
	double *sGrade = (double *)malloc(sNum * sizeof(double)); // �ٽ� inputNum() �Լ��� �ҷ��� �Է¹޾ƾ� �Ѵ�. ���� ����ü �����迭�� Ʋ���� ������ �����!

	//�л� �Ż����� �Է� �Լ�
	//inputStdInfo(sNum, pFrd);

	//�л� ���� ���� �Է� �Լ�
	inputStdInfoAndGrade(sNum, pFrd);
	//�л� ���� ��� �Լ�
	outputStdInfo(sNum, pFrd, sGrade);

	free(pFrd);
	free(sGrade);

}