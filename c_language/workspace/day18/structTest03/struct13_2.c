#include "StdInfoAndGrade_2.h"

/*

	struct13_1

	struct 성적{}	;

	struct 신상{
		번호
		이름
		주소
		성적 구조체멤버변수[3]  3개 학년

*/
void main() {
	int sNum = 0;
	Prof *pFrd = NULL;  // Prof frd = { {0}, } 
	sNum = inputNum();
	//sNum = inputNum();  

	//동적 배열 만들기
	pFrd = (Prof *)malloc(sNum * sizeof(Prof));  //Prof *pFrd = (Prof *)malloc((inputNum() * sizeof(Prof))  --> 일회성
	double *sGrade = (double *)malloc(sNum * sizeof(double)); // 다시 inputNum() 함수를 불러서 입력받아야 한다. 값이 구조체 동적배열과 틀리면 문제가 생긴다!

	//학생 신상정보 입력 함수
	//inputStdInfo(sNum, pFrd);

	//학생 과목 점수 입력 함수
	inputStdInfoAndGrade(sNum, pFrd);
	//학생 정보 출력 함수
	outputStdInfo(sNum, pFrd, sGrade);

	free(pFrd);
	free(sGrade);

}