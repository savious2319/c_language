#include <stdio.h>
#include <string.h>
/*
	구조체 선언
	struct Member
		   멤버변수로 id와 pw
	초기화 "dog", "1234"
	출력

	id pw 변경 cat 5668 변경
*/
struct Member {
	char id[10];
	char pw[10];

};
void main() {

	struct Member kor = { "dog", "1234" };
	printf("id : %d\n", kor.id);
	printf("pw : %d\n", kor.pw);

	//구조체의 멤버변수 id, pw가 배열(포인터 상수)이기 때문에, strcpy함수를 이용해서 문자열을 복사(변경)해야 한다!!
	//kor.id = "cat" // 주소를 또 주소에 대입이 안된다

	strcpy(kor.id, "cat");  //왜 안돼지?
	//kor.id[0] = 'D';
	kor.id[1] = 'D';

	strcpy(kor.pw, "5678");

	printf("id :  %s\n", kor.id);
	printf("pw : %s\n", kor.pw);


}