#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*


* 얕은 복사 vs 깊은 복사


*/
typedef struct tagFriend {
	char *name;		
	int age;		
	double ki;		

}tF;
void main() {

	
	tF hgd = { NULL, 29, 178.1 }; //hgd 멤버중 name은 동적할당 받을 예정
	tF cpyHgd; 

			  
	hgd.name = (char *)malloc(100);
	strcpy(hgd.name, "홍길동");

	//얕은 복사 진행
	cpyHgd = hgd;   //기본 자료형을 갖고 있는 멤버들을 복사할 구조체변수에 가져다 놓자!

	//깊은 복사 //포인터멤버변수에게 다시 동적 할당을 해 준 후, 문자열을 복사시키자!
	//cpyHgd.name 에게 동적할당 (사이즈 : hgd의 name 문자열의 문자 갯수를 파악)
	//문자열의 문자갯수 파악 string length : strlen(문자열)
	//strlen(문자열) : \0문자 전까지 ""안에 있는 문자의 갯수를 리턴해 준다.
	//strlen("Korea"); <---- 5를 리턴한다!
	//"Korea"에 해당하는 문자열 동적배열을 책정하려면...
	//strlen("Korea") + 1	(마지막 + 1은 NULL문자 값까지 만들어 줘야한다)
	cpyHgd.name = (char *)malloc(strlen(hgd.name) + 1);
	strcpy(cpyHgd.name, hgd.name);
	//     ~~~~에,  ~~~~~을 복사해라

	//출력
	printf("%s  %d살  %.1fcm\n", hgd.name, hgd.age, hgd.ki);
	printf("(복사) %s  %d살  %.1fcm\n", cpyHgd.name, cpyHgd.age, cpyHgd.ki);

	//메모리 해제	free_alloc(구조체주소 보내기)
	free(cpyHgd.name);
	//free(hgd.name);  // <---- cpyHgd 이 이미 지워졌기 때문에, hgd.name은 free를 할 수 없게 된다! "에러"
	free(hgd.name);
	// 얕은 복사의 한계!!!!
}