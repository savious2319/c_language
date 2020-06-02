#include<stdio.h>
/*

	return : 함수를 강제로 종료시킬 때 사용하는 제어문
	         함수 안에서만 사용
		1) 종류
		  (1)   void 함수(){
		              return;
			     }

		  (2)    int 함수(){
		              return 10; <---- 데이터가 생기면 더이상 함수가 아니다.
					             <---- 함수명을 변수로 취급한다!
								 <---- int 함수 = 10을 저장시켜 놓자
				 }

			※함수시간에 다시 다룬다!


*/
void fct() {

	puts("fct 함수에서 출력한 출력문");
	//if(조건)
	return;

	int a = 10;        // 이 두문장은 return때문에 실행 할 수 없다. if(조건)으로 실행할지 말지 결정할 수 있다.
	printf("%d\n", a);
}
void main() {

	fct();


}