#include<stdio.h>

void main() {
	while (1) {
		int score = 0;
		printf("*** 학점 처리 프로그램 ***\n");
		printf("점수를 입력하세요(0~100점을 넣어주세요) : ");
		int f_num = scanf("%d", &score);
		char grade = ' '; // 통용범위 grade는 9번부터 하위에 있는 소스에서 언제나 사용할 수 있는 변수
		char plusMinus = ' '; // 0~4 - 5~9 + 

		// 학점 + 각 구간별 5점대 이상이면 학점+ 예) 98 A+
		// 학점 -          4점대 이하면   학점- 예) 73 C-
		if (f_num) {
			if (0 > score || score > 100) {
				puts("입력한 점수가 0~100점 범위 밖에 있습니다. 다시 입력해주세요.");
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
					plusMinus = ' ';  // \b는 backspace 뒤로 한칸 지우기!
				}
				printf("점수 : %d점\t학점 : %c%c학점\n", score, grade, plusMinus);
				break;
			}
		}
		else{
			
			puts("정수를 입력하세요");
			
		}
	}
	
}