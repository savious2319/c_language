#include <stdio.h>
#include<stdlib.h>

void input(int **pNai) {
	//���� �����Ͱ� ������ �޸𸮸� �Ҵ����

	*pNai = (int *)malloc(4); // pNai�� pAge�� �ּҰ� ����. �׷��� *pNai = (int *)malloc(4)�ϰԵǸ� heap�� 4����Ʈ int �޸𸮰� ��������� �� �ּҰ�
							  // pAge�� ���ϰ� �ִ�. �׸��� �� �ּҾȿ� 10�̶� ������ �ִ´�.
	**pNai = 10;

}


void main()
{
	int *pAge;  //������ �ּҰ�

	input(&pAge);  //������ �ּҰ��� ������!

	printf("%d��\n", *pAge);
	
}