#include<stdio.h>
//#include "D:\GB_0900_05_ksk\sunny\c_language\resource\gotoxy.h"
// ����� ���� ������� ""���� ��θ� ǥ���Ѵ� 
//#include "d:\GB_0900_05_ksk\sunny\c_language\resource\gotoxy.h" // ����� ����
#include"gotoxy.h"
/*
	�ܼ���� â(���ȭ��â)��
	��� ��ġ ����
	gotoXY.h

*/
/*
����1  #�� ���η� ��� �� ������.
       1�� ���� �ϳ��� ����ϱ�(10��)

*/
/*
void main() {

	//	putchar('#'); puts(""); //puts�� \n�� ��������ʴ´� ���� �ι� ��
	//GotoXY(0, 1); putchar('#'); puts("��̵�");
	int i = 0; int j = 0;
	for (i = 0; i < 10; i++) {
		putchar('#'); putchar('\n');
		Sleep(1000);

	}
	

}

/*

����2 #�� ���η� ��� �� ������(10ĭ)
      ####### 1�� ����
*/
/*
void main() {
	int i = 0;
	for (i = 0; i < 10; i++) {
		putchar('#');
		Sleep(1000);
	}
}
*/
/*
����3 #�� ���η� ��� �� ������(10��) 1�� ����
#
 #
  #
   #
    #
*/
/*
void main() {
	int i = 0; int j = 0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < i; j++) {
			putchar(' ');
		}
		putchar('#');
		puts("");
		Sleep(1000);
	}
}
*/
/*
����4 *** #��� �޴� ***
1. ������ ���
2. ������ ���
3. �밢�� ���
  ����� ���ðڽ��ϱ�?
*/
/*
void main() {
	int x = 0; 
	int y = 0;
	int z = 0;
	char a = '#';

	printf("***# ��� �޴�***\n 1. ������ ���\n 2. ������ ���\n 3. �밢�� ���\n ����� ���ðڽ��ϱ�?\n");
	scanf("%d", &z);
	system("cls");

	switch(z)
	{
	case 1: 
		for (;y<10;)
	{
		GotoXY(0, y++);
		putchar('#');
		Sleep(500);
		
	}
			break;
	case 2: for (;x<10 ;)
	{
		GotoXY(x++, 0);
		putchar('#');
		Sleep(500);
	}
			break;
		case 3:for(;x<10||y<10 ;) 
		{
			GotoXY(x++, y++);
			putchar('#');
			Sleep(500);
		}
			   break;
		

	}
	printf("\n");
}
*/

/*
����4-1 *** #��� �޴� ***
	1. ������ ��� (���� ��)
	   ������ �������? __
	   ��� ���� �ټ�, ĭ������ ����ڷκ���
	   �Է¹޾� ����Ϳ� ����ϱ�
*/

void main() {
	int x = 0;
	int y = 0;
	int z = 0;
	int num = 0;
	char a = '#';

	printf("***#��� �޴�***\n 1. ������ ���\n 2. ������ ���\n 3. �밢�� ���\n ����� ���ðڽ��ϱ�?\n");
	scanf("%d", &z);
	printf("�� ��/ĭ�� �������?\n");
	scanf("%d", &num);
	system("cls");

	switch (z) {
	case 1: for (; y<num;)
	{
		GotoXY(0, y++);
		putchar('#');
		Sleep(500);

	}
			break;
	case 2: for (; x<num;)
	{
		GotoXY(x++, 0);
		putchar('#');
		Sleep(500);
	}
			break;
	case 3:for (; x<num || y<num;)
	{
		GotoXY(x++, y++);
		putchar('#');
		Sleep(500);
	}
		   break;
		   putchar('#'); putchar('\n');
		   Sleep(1000);

	}
	printf("\n");
}
