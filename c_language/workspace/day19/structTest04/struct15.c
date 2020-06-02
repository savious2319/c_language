#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*


	* 얕은 복사 vs 깊은 복사


*/
typedef struct tagFriend {
	char *name;		//문자열을 입력받는데, 기존 배열에서 포인터 첫 등장!!
	int age;		//기본자료형
	double ki;		//기본자료형

}tF;
void main() {

	//얕은 복사(의 한계)
	//구조체 두개 생성(A, B)   A의 멤버 name에 동적할당
	// B는 A의 데이터를 그대로 가져옴
	// A의 name 멤버 free 진행
	// B의 name 멤버도 free 진행  <---- 여기서 문제 발생!
	// free(A.name) free(B.name) 하게 되면 같은 멤버의 동적할당 주소를 두번 지우는 셈이 되기 때문에
	// 메모리 해제시 에러 발생!
	tF hgd = { NULL, 29, 178.1 }; //hgd 멤버중 name은 동적할당 받을 예정
	tF cpyHgd; // 쓰레기값 대입중!

	//hgd의 name 멤버에게 문자열 동적할당 받기!
	hgd.name = (char *)malloc(100);
	strcpy(hgd.name, "홍길동");

	//얕은 복사 진행
	cpyHgd = hgd;  

	//출력
	printf("%s  %d살  %.1fcm\n", hgd.name, hgd.age, hgd.ki);
	printf("(복사) %s  %d살  %.1fcm\n", cpyHgd.name, cpyHgd.age, cpyHgd.ki);

	//메모리 해제	free_alloc(구조체주소 보내기)
	free(cpyHgd.name); 
	//free(hgd.name);  // <---- cpyHgd 이 이미 지워졌기 때문에, hgd.name은 free를 할 수 없게 된다! "에러"
				     // 얕은 복사의 한계!!!!
}