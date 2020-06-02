#include <stdio.h>

struct MyClass {
	int bun;
	char name[20]; //이름
	char gender;   //남자 m   여자 f


};
void main() {

	struct MyClass bh = { 0 };

	//입력 받고
	printf("번호를 입력하세요 : "); scanf("%d", &bh.bun); getchar(); // scanf는 엔터전까지만 입력받기때문에() getchar();로 엔터값을 처리해야함!
	printf("이름을 입력하세요 : "); gets(bh.name);  //gets()에서 입력한 엔터값은 scanf에 영향을 미치지않는다!
	//gets(bh.name); // 문자열을 입력한 후에, '엔터=\n'가 버퍼에 남는다.
	           // 밑에 줄에서 gender 가 문자형으로 입력하는 거라, 엔터가 gender에 들어가게 된다.
	           // 따라서 getchar() 등으로 엔터값을 처리하자!
			  // ※ 문자열 scanf는 공백이나 엔터전까지만 입력받는다.
	          // 공백이 있는 문자열 입력시 gets()를 사용하도록 하자!
	printf("성별을 입력하세요(남자:m//여자:f) : "); scanf("%c", &bh.gender);
	

	// (입력) 엔터 (입력) 엔터  %c로 입력을 받으면 엔터가 들어와 버린다. 


	//출력하기
	printf("1번학생 번호: %d\t이름: %s\t성별: %c\n", bh.bun, bh.name, bh.gender);
}