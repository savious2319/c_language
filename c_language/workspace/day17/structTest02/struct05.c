#include <stdio.h>
/*
	����ü Ÿ���� ������ �� �ִ�.
	typedef �̶�� Ű���带 ���� ���ϴ� Ÿ������ ������  �� �ִ�.

	typedef (���ϴ� Ÿ��) (�ٲٰ��� �ϴ� Ÿ��) ;
	typedef     int            INT;
	typedef     int *          INT_P;    // int*�� INT_P�� �ٲ㼭 ���ڴ�

*/
typedef struct MyFriend {
	int bun; char name[10]; 
}  Friend, FRD, _FRD ; //���ϴ� Ÿ��    struct MyFriend -> Friend�� 

//struct MyFriend ��� Ÿ���� Friend  �� �ᵵ ���Ѵ�!
void main() {

	//���������� �� �� �ִ�
	struct MyFriend hgd = { 0 };
	Friend pms = { 0 };
	FRD iss = { 0 };
	_FRD iss2 = { 0 };


}