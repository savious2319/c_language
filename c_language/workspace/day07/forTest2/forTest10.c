#include<stdio.h>
#include "gotoxy.h"
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
void main() {
	system("cls");
		int x = 55;
		int y = 15;
		int direction = 0;
		GotoXY(x, y); 
		putchar('#');
	for (;;) {
		
		direction = getch();
		GotoXY(x, y); putchar(' ');
		
			switch (direction) {

			case UP: 
				 //�� ȭ��ǥ ������ ��, �������� ��� ���� �ٴٸ��� �ȴ�. �̶�,
				//if(��ܳ��� �ٴٸ��� -1��ǥ�� ���� ����, �ٽ� �ϴ� ���� y��ǥ���� ���Խ�Ű��)
				//if (��ܳ��̴� ? )
				//{
				//	y = ���ϴ� ��ǥ���ֱ�;
				//}
				if (y == 3) {
					y = 30;
				}
				else {
					--y;
				}
				break; // y�� -- ��Ű�� �ǰڱ���
			case DOWN: ++y; break; // y�� ++
			case LEFT: --x; break;// x�� --
			case RIGHT: 
				if (x == 100) {
					x = 0;
				}
				else {
					++x;
				}
				break;// x�� ++
			}
			GotoXY(x, y); putchar('#');
	}
}

/*
putchar(' ') stdio.h
putch(' ') conio.h

���ں��� = getchar() stdio.h

���ں��� = getch() conio.h
*�������� = getch()

*/

//getchar()�� getch()�� ����!
/*char gChar = ' ';
char gCh = ' ';
int i_gCh = 0;*/

//getchar() �Է¹ް� ����غ���
//getch() �Է¹ް� ����غ��µ�...
//�� �Լ��� ������!!! *�Է¹��� �� ��Ȳ�� �� �ٸ���!

//putchar(getchar()); // ���ڸ� ������ ���Ͱ��� ��ٸ���.
//putchar(getch()); //���ڸ� ������ ���� �ٷ� ����ȴ�.

//getchar()�� �ƽ�Ű �ڵ� �� �Է¹��� �� ���
//getch()�� �ƽ�Ű ���� �Է� ������, Ư��Ű�� �Ǻ��� �� �ִ�!
//  1byte           1byte
// Ư������       (Ư��Ű)�ڵ尪
//(Ȯ�尪)
//

/*printf("���� �Է�: ");
gChar = getchar();
printf("%c\n", gChar);

getchar
printf("���� �Է�: ");
i_gCh = getch();
printf("%d", i_gCh);*/


/*int _extCode = 0;
//Ư��Ű �Ǻ�
_extCode = getch();

if (_extCode == 0 || _extCode == 0xe0) {
printf("Ư��(Ȯ��)Ű : %d\n", _extCode);  //Ư��Ű ���� Ȯ���ϱ� (�տ� 1byte)
_extCode = getch();
printf("Ư��(Ȯ��)Ű : %d\n", _extCode);  //Ư��Ű �ڵ尪 Ȯ���ϱ� (�ڿ� 1byte)
}
else {
printf("�Ϲ�Ű : %d\n", _extCode);
}*/
/*
ù ���� ��ġ�� ȭ���� �߰��뿡 �ڸ���� �̵���Ű��!

*/