#include<stdio.h>

void main() {
	while (1) {
		int score = 0;
		printf("*** ���� ó�� ���α׷� ***\n");
		printf("������ �Է��ϼ���(0~100���� �־��ּ���) : ");
		int f_num = scanf("%d", &score);
		char grade = ' '; // ������ grade�� 9������ ������ �ִ� �ҽ����� ������ ����� �� �ִ� ����
		char plusMinus = ' '; // 0~4 - 5~9 + 

		// ���� + �� ������ 5���� �̻��̸� ����+ ��) 98 A+
		// ���� -          4���� ���ϸ�   ����- ��) 73 C-
		if (f_num) {
			if (0 > score || score > 100) {
				puts("�Է��� ������ 0~100�� ���� �ۿ� �ֽ��ϴ�. �ٽ� �Է����ּ���.");
			}
			else {
				//if (score % 10 >= 5) pm = '+'; else   pm = '-';
				//   ? A : B
				plusMinus = (score % 10 >= 5) || score == 100 ? '+' : '-';
				if ((score >= 90 && score <= 100)) {
					grade = 'A';

				}
				else if (score >= 80 && score <= 89) {
					grade = 'B';

				}
				else if (score >= 70 && score <= 79) {
					grade = 'C';

				}
				else if (score >= 60 && score <= 69) {
					grade = 'D';

				}
				else {
					grade = 'F';
					plusMinus = ' ';  // \b�� backspace �ڷ� ��ĭ �����!
				}
				printf("���� : %d��\t���� : %c%c����\n", score, grade, plusMinus);
				break;
			}
		}
		else{
			
			puts("������ �Է��ϼ���");
			
		}
	}
	
}