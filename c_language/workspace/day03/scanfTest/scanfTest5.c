#include<stdio.h>

void main()
{
	char ch = ' ';
	char addr[100] = "";

	printf("y �Ǵ� n�� �Է��ϼ��� : "); scanf("%c", &ch);
	printf("���� �� : %c\n", ch);
	puts("------------------");
	printf("�ּҸ� �Է��ϼ��� : "); 
	gets(addr); //scanf("%s", addr);
	gets(addr);  // <--- ���Ͱ��� �ذ�����
	puts("�̻��ϴ�!");
	puts(addr);


}