#include<stdio.h>


static int st_global;

void fct() {
	static int cnt = 0;
	cnt++;
	printf("%d회 실행\n", cnt);
}

void fct2() {
	int cnt = 0;
	cnt++;
	printf("%d회 발행\n", cnt);

}

void fct4() {
	st_global = 89;

}


void main() {

	fct2();
	fct2();
	fct2();
	fct();
	fct();
	fct();
	fct4();
	st_global += 1;
	printf("st_global : %d\n", st_global);
}