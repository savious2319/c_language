#include<stdio.h>

int global;

void fct3();

extern int global2;
extern char grade;
void main() {
	int local = 0;

	printf("int local: %d\n", local);

	printf("int global: %d\n", global);

	fct3();

	printf("int global2: %d\n", global2);

	printf("grade : %c\n", 'A');
	
}

int global2 = 99;

char grade = ' ';