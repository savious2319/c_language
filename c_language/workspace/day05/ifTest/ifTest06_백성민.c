#include<stdio.h>

void main() {
	
	int score = 0;
	printf("*** ���� ó�� ���α׷� ***\n");
	printf("������ �Է��ϼ���(0~100���� �־��ּ���) : "); scanf("%d", &score);
	char grade = ' '; // ������ grade�� 9������ ������ �ִ� �ҽ����� ������ ����� �� �ִ� ����
	char plusMinus = ' ';

	// ���� + �� ������ 5���� �̻��̸� ����+ ��) 98 A+
	// ���� -          4���� ���ϸ�   ����- ��) 73 C-
	if (0 > score || score > 100) {
		puts("�Է��� ������ 0~100�� ���� �ۿ� �ֽ��ϴ�. �ٽ� �Է����ּ���.");
	}
	else {
		if (score >= 90 && score <= 100) {
			grade = 'A';
			if (plusMinus % 10 >= 5) {
				plusMinus = '+';
			}
			else if (plusMinus % 10 <= 4) {
				plusMinus = '-';
			}
		}
		else if (score >= 80 && score <= 89) {
			grade = 'B';
			if (plusMinus % 10 >= 5) {
				plusMinus = '+';
			}
			else if (plusMinus % 10 <= 4) {
				plusMinus = '-';
			}
		}
		else if (score >= 70 && score <= 79) {
			grade = 'C';
			if (plusMinus % 10 >= 5) {
				plusMinus = '+';
			}
			else if (plusMinus % 10 <= 4) {
				plusMinus = '-';
			}
		}
		else if (score >= 60 && score <= 69) {
			grade = 'D';
			if (plusMinus % 10 >= 5) {
				plusMinus = '+';
			}
			else if (plusMinus % 10 <= 4) {
				plusMinus = '-';
		}
		else {
			
			grade = 'F';
			
		}
		printf("���� : %d��\t���� : %c%c����\n", score, plusMinus, grade);
	}



}