#include<stdio.h>

void main() {

		int score = 0;
		printf("*** ���� ó�� ���α׷� ***\n");
		printf("������ �Է��ϼ���(0~100���� �־��ּ���) : ");
		scanf("%d", &score);
		char grade = ' '; 
		char plusMinus = ' '; 

		switch(score/10){
				plusMinus = (score % 10 >= 5) || score == 100 ? '+' : '-';

		case 10: grade = 'A'; printf("���� : %d��\t���� : %c%c����\n", score * 10, grade, plusMinus);
		case 9 : grade = 'B'; printf("���� : %d��\t���� : %c%c����\n", score*10, grade, plusMinus);
		case 8 : grade = 'C'; printf("���� : %d��\t���� : %c%c����\n", score, grade, plusMinus);
		case 7 : grade = 'D'; printf("���� : %d��\t���� : %c%c����\n", score, grade, plusMinus);
		case 6 : grade = 'F'; printf("���� : %d��\t���� : %c%c����\n", score, grade, plusMinus);
		case 5 : grade = 'A'; printf("���� : %d��\t���� : %c%c����\n", score, grade, plusMinus);
							  
		default:
				puts("�Է��� ������ 0~100�� ���� �ۿ� �ֽ��ϴ�. �ٽ� �Է����ּ���.");
			
			

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
				
			}
	
}