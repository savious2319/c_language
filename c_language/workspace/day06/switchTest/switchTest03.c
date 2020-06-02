#include<stdio.h>

void main() {

		int score = 0;
		printf("*** 학점 처리 프로그램 ***\n");
		printf("점수를 입력하세요(0~100점을 넣어주세요) : ");
		scanf("%d", &score);
		char grade = ' '; 
		char plusMinus = ' '; 

		switch(score/10){
				plusMinus = (score % 10 >= 5) || score == 100 ? '+' : '-';

		case 10: grade = 'A'; printf("점수 : %d점\t학점 : %c%c학점\n", score * 10, grade, plusMinus);
		case 9 : grade = 'B'; printf("점수 : %d점\t학점 : %c%c학점\n", score*10, grade, plusMinus);
		case 8 : grade = 'C'; printf("점수 : %d점\t학점 : %c%c학점\n", score, grade, plusMinus);
		case 7 : grade = 'D'; printf("점수 : %d점\t학점 : %c%c학점\n", score, grade, plusMinus);
		case 6 : grade = 'F'; printf("점수 : %d점\t학점 : %c%c학점\n", score, grade, plusMinus);
		case 5 : grade = 'A'; printf("점수 : %d점\t학점 : %c%c학점\n", score, grade, plusMinus);
							  
		default:
				puts("입력한 점수가 0~100점 범위 밖에 있습니다. 다시 입력해주세요.");
			
			

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
					plusMinus = ' ';  // \b는 backspace 뒤로 한칸 지우기!
				}
				printf("점수 : %d점\t학점 : %c%c학점\n", score, grade, plusMinus);
				
			}
	
}