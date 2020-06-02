#include "StdInfoAndGrade.h"
/*
	학생 신상명세서 + 성적 관리

	신상명세서에 들어갈 항목
	번호, 이름, 주소

	성적에 들어갈 항목
	국어, 영어, 수학, 미술	(국영수는 0~100점 / 미술은 0.0~10.0까지)

	위에 있는 신상명세서와 성적을 중첩구조체로 설계하고,
	각각의 데이터를 입력 -> 출력해 보세요!
*/

void main() {
	int sNum = 0;
	//Prof frd = { 0 };
	sNum = inputNum();


	//동적 배열 만들기
	Prof *pFrd = (Prof *)malloc(sNum * sizeof(Prof));

	//학생 신상정보 & 과목 입력 함수
	inputStdInfoAndGrade(sNum, pFrd);
	//학생 정보 출력 함수
	outputStdInfo(sNum, pFrd);

	free(pFrd);
}

