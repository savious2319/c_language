#include<stdio.h>
void main(){

	int score = 0;
	char grade = ' ';
	char plusMinus = ' ';
	puts("*** 학점 판별 프로그램 ***")
	printf("학점 입력 : ");
	f_num = ("%d", &score);
	
	if(f_num){
		if(score < 0 && score >100){
			puts("점수 범위 (0~100점)를 벗어났습니다."); 		
			}
		else{
			plusMinus = (score & 10 >= 5) || score == 100 ? '+' : '-';
			if(score >= 90 && score <= 100){
				grade = 'A';
			}
			else if(score >= 80 && score <= 89){
				grade = 'B';
			}			
			else if(score >= 70 && score <= 79){
				grade = 'C';
			}
			else if(score >= 60 && score <= 69){
				grade = 'D';
			}
			else{
				grade = 'F'; 
				plusMinus = ' ';
			}
			printf("점수 :%d\t 학점 :%c%c\n", score, grade, plusMinus);
		}
		else{
			puts("숫자가 아닌 값을 입력하였습니다");
		}

}
	 	