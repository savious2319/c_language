#include <stdio.h>
#include <Windows.h>
#include "gotoxy.h"
/*
	forTest08.c �� �ϼ� �� ��
	forTest09_�鼺��.c�� �ϼ��Ѵ�!  <--- day08_homework / sharp_move ������ �����ϱ�
		-> #�� �̵���Ű�� ��

*/
void main() {
	// #�� �̵��ϴ� �� ó�� ����� ����
	// ������ 5�� �̵��ϴµ�,
	// putchar('#'); (1,1);  <---- ���
	// (1.1); putchar(' ');  <---- �����
	// Sleep()
	// putchar('#'); (2,1);  <--- ��ǥ �̵���, ���
	//                       <---- �����

	for (int i = 0; i < 5; i++){
		putchar('#'); GotoXY(i, 0);
		Sleep(500);
		putchar(' '); GotoXY(i+1, 0);
	}
	puts("");
	puts("���α׷� ����");



}