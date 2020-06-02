#include "StdInfoAndGrade_3.h"

/*
	몇명인가요?
	(번호를 자동 증가 시켜 보세요)

	출력은 테이블(표) 형태로 출력하세요!
	   (필드)
		이름		주소		국어		영어		수학		미술		총점		평균
	1번																	<---- 레코드
	2번						
	3번
	4번
	n번
*/

void main() {

	int sNum = 0;
	//Prof frd = { 0 };
	sNum = inputNum();

	//동적 배열 만들기
	Prof *pFrd = (Prof *)malloc(sNum * sizeof(Prof));

	//학생 신상정보 & 과목 점수 입력 함수
	inputStdInfoAndGrade(sNum, pFrd);
	//학생 정보 출력 함수
	outputStdInfo(sNum, pFrd);

	free(pFrd);

}