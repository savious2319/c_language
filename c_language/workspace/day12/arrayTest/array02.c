#include <stdio.h>

void main() {

	puts("����1] �迭��� ���� ����ϱ� cnt �̿�");
	int arNum[5] = { 10, 20, 30, 40, 50 };

	int size = sizeof(arNum) / sizeof(arNum[0]);
	int cnt = 0;
	for (int i = 0; i < size; i++){
		cnt++;
	}
	printf("arNum�� %d���� ��Ұ� �����մϴ�.\n", cnt);
	puts("=========================================");
	puts("����2] ������ 10���� ������ ���� �ʱ�ȭ �ϰ� 3�� ����� � �ִ��� �����ľ��ϱ�");
	int arNum2[10] = {43,5,34,65,734,6,54,67,584,5764};
	size = sizeof(arNum2) / sizeof(arNum2[0]);
	for (int i = 0; i < size; i++){
		if (arNum2[i] % 3 == 0) {
			cnt++;

			//printf("%d. 3�� ��� : %d\n", i+1, arNum2[i]);  //i+1�� ���° ������ �ִ��� �˼� �ִ�.
			printf("%d. 3�� ��� : %d\n", cnt, arNum2[i]);  //cnt�� � �ִ��� �˼� �ִ�.
		}
	}
	//printf("arNum2�� %d���� 3�� ����� �����մϴ�.\n", cnt);


}