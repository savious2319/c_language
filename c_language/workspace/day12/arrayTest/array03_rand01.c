#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	// ����1] 1~9���� ������ ���� 3�� �迭�� �����ϱ� (���� : 0~32767)
	// * �߻��� ������ 1~9���� �߷����� ��� �ذ��ϱ�!
	/*int r_num = rand();
	int arRandNum[3] = { 0 };

	srand((unsigned)time(NULL));
	puts("====================");
	for (int i = 0; i < 3; i++) {
		arRandNum[i] = rand() % 9 + 1;
	}
	printf("%d\n", arRandNum[0]);
	printf("%d\n", arRandNum[1]);
	printf("%d\n", arRandNum[2]);

	*/

	//����2] ���� ���� �� ���� �����
	//		��°��]
	//		**** ��ǻ�Ϳ� ���������� ����****
	//		1. ���� 2. ���� 3. ��
	//		������ ���ðڽ��ϱ�? 1
	//		1. ����
	//		��� : 1. ���� >> �̰���ϴ�. or �����ϴ�. or �����ϴ�.
	int choiceNum = 0;
	int r_num = 0;
	while (1) {
		puts("**** ��ǻ�Ϳ� ���������� ����****");
		puts("1. ���� 2. ���� 3. �� 4. ����");
		printf("������ ���ðڽ��ϱ�?"); scanf("%d", &choiceNum);
		system("cls");
		r_num = rand() % 3 + 1;

		if (choiceNum == 4) { break; }

		switch (choiceNum) {
		case 1:
			if (choiceNum == r_num) {
				printf("����� : %d\n", choiceNum);
				printf("��ǻ�� : %d\n", r_num);
				puts("�����ϴ�. �ٽ� �ѹ� ����!\n");
			}
			else if (choiceNum < r_num && 3 != r_num) {
				printf("����� : %d\n", choiceNum);
				printf("��ǻ�� : %d\n", r_num);
				puts("�����ϴ�..�ƽ��׿�\n");
			}
			else if (choiceNum < r_num) {
				printf("����� : %d\n", choiceNum);
				printf("��ǻ�� : %d\n", r_num);
				puts("�̰���ϴ� �����մϴ�!\n");
			}
			break;
		case 2:
			if (choiceNum > r_num) {
				printf("����� : %d\n", choiceNum);
				printf("��ǻ�� : %d\n", r_num);
				puts("�̰���ϴ� �����մϴ�!\n");;
			}
			else if (choiceNum == r_num) {
				printf("����� : %d\n", choiceNum);
				printf("��ǻ�� : %d\n", r_num);
				puts("�����ϴ�. �ٽ� �ѹ� ����!\n");
			}
			else if (choiceNum < r_num) {
				printf("����� : %d\n", choiceNum);
				printf("��ǻ�� : %d\n", r_num);
				puts("�����ϴ�..�ƽ��׿�\n");
			}
			break;

		case 3:
			if (choiceNum > r_num && 2 != r_num) {
				printf("����� : %d\n", choiceNum);
				printf("��ǻ�� : %d\n", r_num);
				puts("�����ϴ�..�ƽ��׿�");
			}
			else if (choiceNum > r_num) {
				printf("����� : %d\n", choiceNum);
				printf("��ǻ�� : %d\n", r_num);
				puts("�̰���ϴ� �����մϴ�!\n");
			}
			else if (choiceNum == r_num) {
				printf("����� : %d\n", choiceNum);
				printf("��ǻ�� : %d\n", r_num);
				puts("�����ϴ�. �ٽ� �ѹ� ����!\n");;
			}
			break;

		}
	}
	//����3] �ζ� ��ȣ 6�� ����ϱ� (�ζ� 1~45)
	//	***�̹� �� �ζ� ��ȣ ��õ***
	//	32, 45, 1, 2, 3, 6
	//  ����� �ֱ� ����մϴ�~!!!
	/*int arRandNum3[6] = { 0 };
	puts("****�̹� �� �ζ� ��ȣ ��õ****");
	for (int i = 0; i < 6; i++) {
		arRandNum3[i] = rand() % 45 + 1;
	}
	printf("%d, %d, %d, %d, %d, %d\n", arRandNum3[0], arRandNum3[1], arRandNum3[2], arRandNum3[3], arRandNum3[4], arRandNum3[5]);


	//����3-1] ������������ ����� �ּ��� (����Ī �̿� - ��������)
	// 1, 2, 3, -> ���� ���ں��� 
	// for(i) {  <--ù
	//   for(j){ <---��
	puts("****�̹� �� �ζ� ��ȣ ��õ(��������)****");
	for (int i = 0; i < 6; i++) {
		for (int j = i + 1; j < 6; j++){
			if (arRandNum3[i] > arRandNum3[j]){
				int temp = arRandNum3[i];
				arRandNum3[i] = arRandNum3[j];
				arRandNum3[j] = temp;
			}
			}
		}
		
	printf("%d, %d, %d, %d, %d, %d\n", arRandNum3[0], arRandNum3[1], arRandNum3[2], arRandNum3[3], arRandNum3[4], arRandNum3[5]);*/
}
/*
for (int i = 0; i < 6; i++) {
for (int j = i + 1; j < 6; j++) {
if (arLottoNum[i] > arLottoNum[j]) {
temp = arLottoNum[i];
arLottoNum[i] = arLottoNum[j];
arLottoNum[j] = temp;
}
else {
continue;
}

*/

