#include<stdio.h>

void main() {


	printf("나는 백성민 입니다\n\n\n");

	printf("나는 \n역삼동에 있습니다\n");

	printf("지금은 \n14시 입니다\n");

	printf("김모씨는 지난해 12월 대출나라의 실시간 상담 코너에 접속해 대출 문의 글을 올렸다.\n대출나라는 전국 \"500개 이상 정식 대부업체가 등록돼있다고 알려진 인터넷 유명 대부광고 사이트다.\n5분 뒤 한 대부업자가\" 김씨에게 전화를 걸었다.\n");

	printf("내 나이는 %d살 입니다.\n", 44); // 서식문자(형식지정자) 에 44가 대입되어 출력된다.
	printf("내 친구 나이는 %d살 입니다.\n", 43); // 서식문자에 43이 대입되어 문장이 완성된다!
	printf("둘의 나이는 44 + 43 = %d\n", 44 + 43); // 계산 기능을 형식지정자(=서식문자) 에 대입시킬 수 있다!

	/*
	서식문자 : %알파벳
	%d : decimal 의 약자 (십진수)
	%f : float 의 약자 (실수)
	%c : character 의 약자 (문자)
	%s : string 의 약자 (문자열)
	
	*/

	printf("나이: %d\n직업: %s\n점수: %c\n", 35, "개발자", 'A');
}