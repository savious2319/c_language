#include <stdio.h>
/*
	구조체를 함수로 보내보자!

*/

typedef struct ClassInfo 
{
	char name[10];
	char number[15];
	double height;
} Friend;
void printFriend(Friend person) {
	printf("이름\t번호\t\t키\n");
	printf("%s\t%s\t%.1fcm\n", person.name, person.number, person.height);
	puts("");
}

void main() {

	Friend hgd = { "홍길동", "01034005125", 178.4 };
	Friend iss = { "이순신", "01034005125", 156.4 };
	Friend pms = { "박문수", "01034005125", 189.4 };

	//출력
	printFriend(hgd);
	printFriend(iss);
	printFriend(pms);
	

}