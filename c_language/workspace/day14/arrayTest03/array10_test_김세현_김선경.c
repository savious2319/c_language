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
	int managementFees = 2000; //관리비
	int arrApt[FLOOR][ROOM] = { { 0 }, }; //입주민 수 저장
	int arrManagementFees[FLOOR][ROOM] = { { 0 }, }; //호별 관리비 저장

													 //입력
	inputData(managementFees, arrApt, arrManagementFees);

	//출력
	printAllManagementFees(arrApt, arrManagementFees);

	//3번문제 
	switchMenu(arrManagementFees);
}

//입력
void inputData(int managementFees, int(*arrApt)[ROOM], int arrManagementFees[FLOOR][ROOM]) {
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃\tKOREA APAERTMENT\t┃\n");
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	for (int i = 0; i < FLOOR; i++) {
		printf("\t[%d층]\n", i + 1);
		for (int j = 0; j < ROOM; j++) {
			printf("\t%d0%d호 입주민 수 : ", i + 1, j + 1);
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

//출력
void printAllManagementFees(int(*arrPNum)[ROOM], int(*arrFee)[ROOM]) {
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃\t\t\tKOREA APAERTMENT MANAGEMENT FEES\t\t\t┃\n");
	for (int i = 0; i < FLOOR; i++) {
		if (i != 0) {
			puts("");
			printf("┠───────────────╂───────────────╂───────────────╂───────────────╂───────────────┨\n");
		}
		else printf("┠───────────────┰───────────────┰───────────────┰───────────────┰───────────────┨\n");

		for (int j = 0; j < ROOM; j++) {
			printf("┃   %d0%d호", i + 1, j + 1);
			printf("(%02d명) ", arrPNum[i][j]);
		}
		printf("┃\n");
		printf("┠───────────────╂───────────────╂───────────────╂───────────────╂───────────────┨\n");
		for (int j = 0; j < ROOM; j++) {
			printf("┃     %d원\t", arrFee[i][j]);
			if (j == ROOM - 1) printf("┃");
		}
	}

	printf("\n┗━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━┛\n");
	pressAnyKeyToContinue();
}

//3번
void switchMenu(int(*arrFee)[ROOM]) {
	int choice = 0;
	do {
		system("cls");
		printf("\n┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
		printf("┃\t     OPTION\t         ┃\n");
		printf("┠────────────────────────────────┨\n");
		printf("┃  ①자기 집 관리비 보기         ┃\n");
		printf("┃  ②전체 관리비 출력하기        ┃\n");
		printf("┃  ③층별 평균 관리비 출력하기   ┃\n");
		printf("┃  ④관리비 비교하기             ┃\n");
		printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		printf("\t\t\t┏━━━━━━━━┓\n");
		printf("\t\t\t┃ 0.exit ┃\n");
		printf("\t\t\t┗━━━━━━━━┛\n");

		printf("[선택] : ");
		scanf_s("%d", &choice);
		if (choice > 4 || choice < 0) {
			printf("다시 입력해주세요.");
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
	printf("종료");
}
void pressAnyKeyToContinue() {
	printf("\n┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃  계속하시려면 엔터 키를 눌러주세요  ┃\n");
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	getchar();
	getchar();
}
//switch 1
void printManagementFees(int(*arrFee)[ROOM]) {
	int inputF = 0, inputR = 0;
	while (1) {
		printf("층과 호수를 입력해 주세요.(ex.405호 = 층:4 호:5)\n");
		printf("층 : "); scanf_s("%d", &inputF);
		printf("호 : "); scanf_s("%d", &inputR);
		if ((inputF <= FLOOR && inputF > 0) && (inputR <= ROOM && inputR > 0)) break;
		printf("이 건물은 1~4층, 1~5호까지 존재합니다.");
	}
	printf("%d0%d호 관리비 : %d원", inputF, inputR, arrFee[inputF - 1][inputR - 1]);
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
	printf("이 건물의 전체 관리비는 %d원입니다.", total);
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
		printf("%d층 평균 관리비는 %d원입니다.\n", i + 1, (pFloor[i] / ROOM));
	}
	puts("");
	pressAnyKeyToContinue();
}
//switch 4
void printCompareManagementFees(int(*arrFee)[ROOM]) {
	int inputF = 0, inputR = 0;
	int sum[FLOOR] = { 0, }; // 층별 합
	int avg[FLOOR] = { 0, };// 층별 평균
	int total = 0; // 건물 전체 합

	char *printResult[2] = { "초과", "절약" };
	int pRIndex = 0, pRIndex2 = 0;
	int savingResultTotal = 0, savingResultFloor = 0;

	while (1) {
		printf("층과 호수를 입력해 주세요.(ex.405호 = 층:4 호:5)\n");
		printf("층 : "); scanf_s("%d", &inputF);
		printf("호 : "); scanf_s("%d", &inputR);
		if ((inputF <= FLOOR && inputF > 0) && (inputR <= ROOM && inputR > 0)) break;
		printf("이 건물은 1~4층, 1~5호까지 존재합니다.\n");
	}

	for (int i = 0; i < FLOOR; i++) {
		for (int j = 0; j < ROOM; j++) {
			sum[i] += arrFee[i][j];
		}
		avg[i] = sum[i] / ROOM;
		total += sum[i];
	}

	//차액
	savingResultTotal = arrFee[inputF - 1][inputR - 1] - total / (FLOOR*ROOM);
	savingResultFloor = arrFee[inputF - 1][inputR - 1] - avg[inputF - 1];

	// 절약, 초과 판별
	if (savingResultFloor > 0) pRIndex = 0;
	else pRIndex = 1;
	if (savingResultTotal > 0) pRIndex2 = 0;
	else pRIndex2 = 1;

	if (pRIndex == 1 || pRIndex2 == 1) { // 절약시 -값 제거
		savingResultTotal = savingResultTotal * -1;
		savingResultFloor = savingResultFloor * -1;
	}

	printf("%d0%d호는\n", inputF, inputR);
	printf("%d층 평균 관리비보다 %d원 %s하셨습니다.\n", inputF, savingResultFloor, printResult[pRIndex2]);
	printf("전체 평균 관리비보다 %d원 %s하셨습니다.\n", savingResultTotal, printResult[pRIndex]);

	pressAnyKeyToContinue();
}
