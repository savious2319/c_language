#include<stdio.h>
/*
	함수의 값전달 방식

	1) call by value (기본형)
	   
	   함수호출(값, 값, 값);  //정수데이터만 보내왔었는데
						    //문자, 실수 기본형을 보낼 때
							//값 전달하는 방식을 콜 바이 밸류(call by value) 라고 한다.
							//value(데이터를 보내는 거구나)

	   함수선언(변수선언, 변수선언, 변수선언){ <-- 데이터를 받을 수 있는 변수로 매개변수를 만들면 된다!

	   }

	1-2) call by pointer(address)
	     기본형 말고, 문자열, 배열, (구조체)도 보낼 수 있지 않겠나!!!
	     합성형을 보낼 때 "주소"가 넘어간다.

		 함수 호출(주소값, 배열, 문자열, int값, char값);

		 void 함수선언(주소변수, 주소변수, 문자열주소변수, int변수, char변수){
		 
		 }

	2) call by reference (참조형태의 호출)
	   c++ 이나 자바에서 등장하는 개념이다!
*/
//1. call by value의 한계 -> cally by pointer로 극복할 수 있다!
//   포인터 챕터를 배울 때, 이 문제를 해결할 거다!

// 두 정수 입력받고, 그 값을 switch 하는 함수
// 년도를 입력하세요 : 5
// 월을 입력하세요 : 2020
// 두 데이터가 잘못 입력됐네?
// 그럼 changeValue(값, 값) 함수를 호출해서
// 두 변수의 값을 바꿔야겠다

//문1) year를 입력받고 year의 값을 변화할 수 있는 함수만들기(매개변수 한개짜리 함수)
//문2) year와 month를 입력받고 두 값을 변화시킬 수 있는 함수 만들기(매개변수 두개짜리 함수)
      //call by value의 한계

//문1)
int changeValue(int x) {
	printf("넘어온 값 : %d\n", x);
	int ch_val = 0;
	printf("변경하고자 하는 값을 입력하세요 : "); scanf("%d", &ch_val);
	printf("처음 값 : %d\t 변경한 값 : %d\n", x, ch_val);

	return ch_val; //새로 입력받은 값을 다시 돌려줄게!!
}

/*문2)
int changeValue2(int x, int y) {
	printf("넘어온 년도 : %d 월: %d\,", x, y);
	int ch_val1 = 0, ch_val2 = 0;
	printf("변경하고자 하는 값을 입력하세요 : "); scanf("%d %d", &ch_val1, &ch_val2);
	return ch_val1, ch_val2;
}*/

void main() {

	int year = 0;

	printf("년도를 입력하세요 : "); scanf("%d", &year); // <-- 잘못된 데이터 입력해 보자!

	printf("changeValue2에 다녀 오기 전 year의 값 :%d\n", year);

	year = changeValue(year); // 예) 2015로 입력했을 때, 2020으로 출력될 수 있도록 바꿔보자!

	printf("changeValue2에 다녀 온 후 year의 값 :%d\n", year);  // <-- 올해는 2020년이다!
	

}