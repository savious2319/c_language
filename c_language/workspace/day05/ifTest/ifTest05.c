#include<stdio.h>

void main() {
	//성적 처리 프로그램
	//0~100 점 사이에 점수를 A~F까지 등급으로 치환한다.
	//100~90점 "A학점"
	//89~80점 "B학점"
	//79~70점 "C학점"
	//69~60점 "D학점"
	//59~50점 "F학점"
	int score = 0;
	printf("*** 학점 처리 프로그램 ***\n");
	printf("점수를 입력하세요(0~100점을 넣어주세요) : "); scanf("%d", &score);
	char grade = ' ';
	if (0 > score || score > 100) {
		puts("입력한 점수가 0~100점 범위 밖에 있습니다. 다시 입력해주세요.");
	}else {
		if (score >= 90 && score <= 100) {
			//printf("점수 : %d점\t학점 : %c학점\n", score, 'A');
			//문자변수 = 'A';
			grade = 'A';
			//puts("A학점");
		}
		else if (score >= 80 && score <= 89) {
			//printf("점수 : %d점\t학점 : %c학점\n", score, 'B');
			grade = 'B';
			//puts("B학점");
		}
		else if (score >= 70 && score <= 79) {
			//printf("점수 : %d점\t학점 : %c학점\n", score, 'C');
			grade = 'C';
			//puts("C학점");
		}
		else if (score >= 60 && score <= 69) {
			//printf("점수 : %d점\t학점 : %c학점\n", score, 'D');
			grade = 'D';
			//puts("D학점");
		}
		else {
			//printf("점수 : %d점\t학점 : %c학점\n", score, 'F');
			grade = 'F';
			//puts("F학점");
		}
		printf("점수 : %d점\t학점 : %c학점\n", score, grade);
	}
	


}