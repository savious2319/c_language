#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define FLOOR 4
#define ROOM 5


void inputData(int managementFees, int(*arrApt)[ROOM], int arrManagementFees[FLOOR][ROOM]);
void printAllManagementFees(int(*arrPNum)[ROOM], int(*arrFee)[ROOM]);
void switchMenu(int(*arrFee)[ROOM]);
void pressAnyKeyToContinue();
void printManagementFees(int(*arrFee)[ROOM]);
void printTotalManagementFees(int(*arrFee)[ROOM]);
void printFloorAvgManagementFees(int(*arrFee)[ROOM]);
void printCompareManagementFees(int(*arrFee)[ROOM]);

void main() {
	int managementFees = 2000; //������
	int arrApt[FLOOR][ROOM] = { { 0 }, }; //���ֹ� �� ����
	int arrManagementFees[FLOOR][ROOM] = { { 0 }, }; //ȣ�� ������ ����

													 //�Է�
	inputData(managementFees, arrApt, arrManagementFees);

	//���
	printAllManagementFees(arrApt, arrManagementFees);

	//3������ 
	switchMenu(arrManagementFees);
}

//�Է�
void inputData(int managementFees, int(*arrApt)[ROOM], int arrManagementFees[FLOOR][ROOM]) {
	printf("������������������������������������������������������������������\n");
	printf("��\tKOREA APAERTMENT\t��\n");
	printf("������������������������������������������������������������������\n");
	for (int i = 0; i < FLOOR; i++) {
		printf("\t[%d��]\n", i + 1);
		for (int j = 0; j < ROOM; j++) {
			printf("\t%d0%dȣ ���ֹ� �� : ", i + 1, j + 1);
			scanf_s("%d", &arrApt[i][j]);
		}
	}
	for (int i = 0; i < FLOOR; i++) {
		for (int j = 0; j < ROOM; j++) {
			arrManagementFees[i][j] += arrApt[i][j] * managementFees;
		}
	}
	printf("\n");
}

//���
void printAllManagementFees(int(*arrPNum)[ROOM], int(*arrFee)[ROOM]) {
	printf("������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	printf("��\t\t\tKOREA APAERTMENT MANAGEMENT FEES\t\t\t��\n");
	for (int i = 0; i < FLOOR; i++) {
		if (i != 0) {
			puts("");
			printf("������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
		}
		else printf("������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");

		for (int j = 0; j < ROOM; j++) {
			printf("��   %d0%dȣ", i + 1, j + 1);
			printf("(%02d��) ", arrPNum[i][j]);
		}
		printf("��\n");
		printf("������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
		for (int j = 0; j < ROOM; j++) {
			printf("��     %d��\t", arrFee[i][j]);
			if (j == ROOM - 1) printf("��");
		}
	}

	printf("\n������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
	pressAnyKeyToContinue();
}

//3��
void switchMenu(int(*arrFee)[ROOM]) {
	int choice = 0;
	do {
		system("cls");
		printf("\n��������������������������������������������������������������������\n");
		printf("��\t     OPTION\t         ��\n");
		printf("��������������������������������������������������������������������\n");
		printf("��  ���ڱ� �� ������ ����         ��\n");
		printf("��  ����ü ������ ����ϱ�        ��\n");
		printf("��  ������ ��� ������ ����ϱ�   ��\n");
		printf("��  ������� ���ϱ�             ��\n");
		printf("��������������������������������������������������������������������\n");
		printf("\t\t\t��������������������\n");
		printf("\t\t\t�� 0.exit ��\n");
		printf("\t\t\t��������������������\n");

		printf("[����] : ");
		scanf_s("%d", &choice);
		if (choice > 4 || choice < 0) {
			printf("�ٽ� �Է����ּ���.");
			Sleep(1000);
			continue;
		}
		switch (choice) {
		case 1: printManagementFees(arrFee); break;
		case 2: printTotalManagementFees(arrFee); break;
		case 3: printFloorAvgManagementFees(arrFee); break;
		case 4: printCompareManagementFees(arrFee);
		}
	} while (choice != 0);
	printf("����");
}
void pressAnyKeyToContinue() {
	printf("\n������������������������������������������������������������������������������\n");
	printf("��  ����Ͻ÷��� ���� Ű�� �����ּ���  ��\n");
	printf("������������������������������������������������������������������������������\n");
	getchar();
	getchar();
}
//switch 1
void printManagementFees(int(*arrFee)[ROOM]) {
	int inputF = 0, inputR = 0;
	while (1) {
		printf("���� ȣ���� �Է��� �ּ���.(ex.405ȣ = ��:4 ȣ:5)\n");
		printf("�� : "); scanf_s("%d", &inputF);
		printf("ȣ : "); scanf_s("%d", &inputR);
		if ((inputF <= FLOOR && inputF > 0) && (inputR <= ROOM && inputR > 0)) break;
		printf("�� �ǹ��� 1~4��, 1~5ȣ���� �����մϴ�.");
	}
	printf("%d0%dȣ ������ : %d��", inputF, inputR, arrFee[inputF - 1][inputR - 1]);
	puts("");
	pressAnyKeyToContinue();
}
//switch 2
void printTotalManagementFees(int(*arrFee)[ROOM]) {
	int total = 0;
	for (int i = 0; i < FLOOR; i++) {
		for (int j = 0; j < ROOM; j++) {
			total += arrFee[i][j];
		}
	}
	printf("�� �ǹ��� ��ü ������� %d���Դϴ�.", total);
	puts("");
	pressAnyKeyToContinue();
}
//switch 3
void printFloorAvgManagementFees(int(*arrFee)[ROOM]) {
	int pFloor[FLOOR] = { 0, };
	for (int i = 0; i < FLOOR; i++) {
		for (int j = 0; j < ROOM; j++) {
			pFloor[i] += arrFee[i][j];
		}
		//printf("%d\n", pFloor[i]); for check
	}

	for (int i = 0; i < FLOOR; i++) {
		printf("%d�� ��� ������� %d���Դϴ�.\n", i + 1, (pFloor[i] / ROOM));
	}
	puts("");
	pressAnyKeyToContinue();
}
//switch 4
void printCompareManagementFees(int(*arrFee)[ROOM]) {
	int inputF = 0, inputR = 0;
	int sum[FLOOR] = { 0, }; // ���� ��
	int avg[FLOOR] = { 0, };// ���� ���
	int total = 0; // �ǹ� ��ü ��

	char *printResult[2] = { "�ʰ�", "����" };
	int pRIndex = 0, pRIndex2 = 0;
	int savingResultTotal = 0, savingResultFloor = 0;

	while (1) {
		printf("���� ȣ���� �Է��� �ּ���.(ex.405ȣ = ��:4 ȣ:5)\n");
		printf("�� : "); scanf_s("%d", &inputF);
		printf("ȣ : "); scanf_s("%d", &inputR);
		if ((inputF <= FLOOR && inputF > 0) && (inputR <= ROOM && inputR > 0)) break;
		printf("�� �ǹ��� 1~4��, 1~5ȣ���� �����մϴ�.\n");
	}

	for (int i = 0; i < FLOOR; i++) {
		for (int j = 0; j < ROOM; j++) {
			sum[i] += arrFee[i][j];
		}
		avg[i] = sum[i] / ROOM;
		total += sum[i];
	}

	//����
	savingResultTotal = arrFee[inputF - 1][inputR - 1] - total / (FLOOR*ROOM);
	savingResultFloor = arrFee[inputF - 1][inputR - 1] - avg[inputF - 1];

	// ����, �ʰ� �Ǻ�
	if (savingResultFloor > 0) pRIndex = 0;
	else pRIndex = 1;
	if (savingResultTotal > 0) pRIndex2 = 0;
	else pRIndex2 = 1;

	if (pRIndex == 1 || pRIndex2 == 1) { // ����� -�� ����
		savingResultTotal = savingResultTotal * -1;
		savingResultFloor = savingResultFloor * -1;
	}

	printf("%d0%dȣ��\n", inputF, inputR);
	printf("%d�� ��� �����񺸴� %d�� %s�ϼ̽��ϴ�.\n", inputF, savingResultFloor, printResult[pRIndex2]);
	printf("��ü ��� �����񺸴� %d�� %s�ϼ̽��ϴ�.\n", savingResultTotal, printResult[pRIndex]);

	pressAnyKeyToContinue();
}
