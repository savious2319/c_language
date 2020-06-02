#include <stdio.h>

void inputData(int *pAge) {
	//*pAge = 20;
	printf("몇 살이세요? "); scanf("%d", pAge);
	// scanf("%d", &pAge); pAge는 주소 전용 "포인터변수"다. 이미 주소를 대입받기로 매개변수에 선언했기 때문에...
	//&를 붙이지 않는다.
	//더구나, pAge가 가리키고 있는 주소는 age에 대응되기 때문에...
	//age에 가서 입력값을 작업해야 한다. 즉 &age를 pAge가 갖고 있기 때문에
	//scanf("%d", pAge)로 age의 주소값이 대체해서 쓰는 것이다!
}

void changeData(int *pData) {
	 *pData = 99999;
	//pData = (int *)99999; //int형 주소값 자료형 강제 형변환
}
void main() {

	int age = -1; //값이 -1이면 0도 데이터로 포함 시킬 수 있기때문에

	printf("input() 실행 전 : %d살\n", age);
	if (age < 0) {
		
		inputData(&age); //리턴도 없고.. 함수만 호출했는데,, age의 값이 변경된다??
	}
	printf("input() 실행 후 : %d살\n", age);
	
	changeData(&age);
	printf("changeData() 복귀 후 age의 값 : %d살\n", age); //9999가 나와야 한다
}