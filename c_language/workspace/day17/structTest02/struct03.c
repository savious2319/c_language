#include <stdio.h>

//설계!!!! 어떤 모양이냐면...
struct ClassInfo {
	char name[20];
	char number[30];
	double height;
};// 설계를 완료 했다!  모양을 만들었다!! Modelling 데이터를 모델링 했다. 줄여서 모델이라고 한다. 데이터의 구조를 모델링 했다. 모델! MVC 모델 중에 M에 해당!

void main() {

	//우리반 이름, 번호, 키(소수점 한자리)
	//3명이 있다!
	struct ClassInfo 
	 bsm = { "백성민", "010-3400-5125", 175.7 },
	 ysh = { "윤순호", "010-5674-5436", 173.7 },
	 pjy = { "박진영", "010-7865-8765", 177.7 },
	frd1 = { 0 },
	frd2 = { 0 };

	printf("bsm 이름: %s\t번호: %s\t키: %.1fcm\n", bsm.name, bsm.number, bsm.height);
	printf("ysh 이름: %s\t번호: %s\t키: %.1fcm\n", ysh.name, ysh.number, ysh.height);
	printf("pjy 이름: %s\t번호: %s\t키: %.1fcm\n", pjy.name, pjy.number, pjy.height);

	/*printf("이름을 입력하세요"); scanf("%s", &bsm.name);
	printf("1번 학생 이름 : %s\n", bsm.name);*/

	for (int i = 0; i < 2; i++)
	{
	//입력받기
	printf("전학생 %d에 대한 정보 입력\n", i+1);
	printf("이름을 입력해 주세요 : "); gets(frd1.name);       // gets() 문자열 받는 함수
	//getchar();
	printf("핸드폰 번호를 입력해 주세요 : "); gets(frd1.number);
	printf("키를 입력해 주세요 : "); scanf("%lf", &frd1.height);

	//입력값 출력하시
	printf("==전학생 %d의 정보==\n", i+1);
	printf("frd1 이름: %s\t번호: %s\t키: %.1fcm\n", frd1.name, frd1.number, frd1.height);

	}



}