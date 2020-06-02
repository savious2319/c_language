#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#pragma warning (disable :  4996)
typedef struct Profile {

	char _name[20];
	int _age;
	double _height;

}Profile, Prof ;

void main() {

	Prof myFrd = { 0 };
	Prof *p = &myFrd;

	// -> 화살표 연산자를 이용해서 본인의 정보를 입력해 보세요

	// 화살표 연산자만 이용해서 출력해 보세요

	/*printf("이름을 입력하세요 : "); gets(p->_name); 
	printf("나이를 입력하세요 : "); scanf("%d", &p->_age);
	printf("키를 입력하세요(소수점 한자리) : "); scanf("%lf", &p->_height);

	printf("이름 : %s\n", p->_name);
	printf("나이 : %d살\n", p->_age);
	printf("키 : %.1fcm\n", p->_height);*/


	//친구수를 입력받고 친구 수만큼 데이터를 입력받아 보세요
	int num = 0;
	Prof *pFrd = NULL; //동적 할당 받는 포인터 변수
	printf("친구수 입력 : "); scanf("%d", &num);

	//동적 할당 받기
	pFrd = (Prof *)malloc(num * sizeof(Prof));
	

	//데이터 입력 하기
	for (int i = 0; i < num; i++){
		getchar();
		printf("%d번 친구 이름을 입력하세요 : ", i+1); gets((pFrd+i)->_name);  //pFrd[i]->_name : pFrd[i]는 이미 주소에 가라는 뜻
																			  // -> : 주소로 들어가라!
																			 //또 _name으로 -> 들어가라는게 말이 안되서 에러!
																			//pFrd[i] == *(pFrd +i)  //  pFrd[i]->_name == pFrd[i]._name
																			// *pFrd[i] == *(*(pFrd + i))
																		//만약 pFrd[i]._name을 하고 싶으면 (*(pFrd + i))._name으로 해야한다. 
		printf("%d번 친구 나이를 입력하세요 : ", i + 1); scanf("%d", &(pFrd + i)->_age);
		printf("%d번 친구 키를 입력하세요(소수점 한자리) : ", i + 1); scanf("%lf", &(pFrd + i)->_height);

	}
	puts("");
	//데이터 출력하기
	for (int i = 0; i < num; i++) {		
		
		printf("%d번 친구 이름 : %s\n", i + 1, pFrd[i]._name); // (pFrd + i)->_name; // %s는 문자열 주소값을 출력해준다
		printf("%d번 친구 나이 : %d\n", i + 1, pFrd[i]._age); // (*(pFrd+i))._age == (pFrd + i)->_age
		printf("%d번 친구 키 : %.1f\n", i + 1, (pFrd + i)->_height);

		//pFrd[i]._name		==		(*(pFrd + i))._name			==		(pFrd + i)->_name		
		//pFrd[i]._age		==		(*(pFrd + i))._age			==		(pFrd + i)->_age
		//pFrd[i]._height	==		(*(pFrd + i))._height		==		(pFrd + i)->_height

	}
	//메모리 해제하기
	free(pFrd);


}