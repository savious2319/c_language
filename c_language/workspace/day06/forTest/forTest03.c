#include<stdio.h>
#include<Windows.h> // <-- 여러가지 기능의 함수를 갖고 있다  WinAPI 언어에서 사용하는 "라이브러리"를 갖고 있다.
/*
	syste("cls");  clear screen
*/

//문1) 계산기 소스를 반복하다가, 특정 조건이 되면 종료시키기
void main() {

	char quit = ' ';
	char op = ' ';
	int num1 = 0, num2 = 0, res = 0;

	for (; ; ) {

		//계산기 코드
		printf("정수 두개 연속 입력(공백으로 구분해 주세요) : ");
		scanf("%d %d", &num1, &num2);

		printf("다음 하나를 선택하세요 [* / %% + -] : ");
		scanf("%c%c", &op, &op);
		switch (op) {
		case '+': res = num1 + num2; break;
		case '-': res = num1 - num2; break;
		case '*': res = num1 * num2; break;
		case '%': res = num1 % num2; break;
		case '/':
			if (num2 != 0) 
			{ 
				res = num1 / num2; 
			}
			else 
			{
				puts("0으로 나눌 수 없습니다. \n프로그램 종료");
				
			}
			break;
		default: puts("부호를 잘못 입력 했습니다.");

		} // end switch

		printf("%d %c %d = %d\n", num1, op, num2, res);

		//종료 코드
		getchar();
		printf("종료하려면 q(Q)를 누르세요: ");
		scanf("%c", &quit);
		if (quit == 'q' || quit == 'Q') { break; }
		
		system("cls");  // 콘솔 화면을 지울 수 있다.
	
	}//end for
	

}


/*
	int score = 0;
	char grade = ' ';
	char plusMinus = ' ';
	char quit = ' ';

	for (;;) {

	printf("*** 학점 처리 프로그램 ***\n");
	printf("점수를 입력하세요(0~100점을 넣어주세요) : "); scanf("%d", &score);

	if (score < 0 && score >100) {
		puts("점수 범위 (0~100점)를 벗어났습니다.");
	}
	else {
		plusMinus = (score & 10 >= 5) || score == 100 ? '+' : '-';
		if (score >= 90 && score <= 100) {
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
			plusMinus = ' ';
		}
		printf("점수 :%d\t 학점 :%c%c\n", score, grade, plusMinus);
		
		}
	getchar();
	printf("종료하려면 q(Q)를 누르세요: ");
	scanf("%c", &quit);
	if (quit == 'q' || quit == 'Q') { break; }
	}
}
//문2) 학점처리 소스를 반복하다가, 특정 조건이 종료시키기*/