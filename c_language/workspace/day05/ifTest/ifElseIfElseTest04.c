#include<stdio.h>
/*
	if() : ���ϼ���
	if()else : ���� ����
	if()else if() else... : ���� ����

	���� if else�� : ������ �߿� �ϳ��� ������ �����Ѵ�!

	if(���ǽ�A)
	    ���๮A
	else if (���ǽ�B)    �׷��� �ʴٸ�, �ٽ� �����!
	    ���๮B;
    else if (���ǽ�C)
	    ���๮C;
	else if (���ǽ�D)
	    ���๮D;
    else               <------- ���� A~D���� �ش������ ���� �� �����ϰ� �ȴ�.
	    ���๮E;

*/

void main()
{
	//¦�� Ȧ�� 0
	//���� if else �� ����� ����
	int num = 0;
	printf("���� �Է� : "); scanf("%d", &num);

	if (num == 0) {
		puts("0�Դϴ�.");
	}
	else {
		if (num % 2 == 0) {
			puts("¦�� �Դϴ�.");
		}
		else /*(num % 2 == 1)*/ {
			puts("Ȧ�� �Դϴ�.");
		}
	}

	
/*
void main(){
	char al = ' ';
	printf("���ĺ� : "); al = getchar();

	if (al >= 'A' && al <= 'Z') {
		puts("�빮�� �Դϴ�");
	}
	else if (al >= 'a' && al <= 'z') {
		puts("�ҹ��� �Դϴ�");
	}
	else {
		puts("���ĺ��� �ƴմϴ�.");
	}
	puts("���α׷� ����");
	*/
}