#include<stdio.h>

void main() {
	//��Ģ���� ����� ����ϴ� ���α׷�
	//������ �ΰ� �Է�
	//������( + - * / ) �� �ϳ� ����
	//����� ���
	//������ ������ ����!!!

	int num1 = 0, num2 = 0, res = 0;
	//printf("ù��° ���� �Է� : "); scanf("%d", &num1);
	//printf("�ι�° ���� �Է� : "); scanf("%d", &num2);
	printf("���� �ΰ� ���� �Է�(�������� ������ �ּ���) : ");
	scanf("%d %d", &num1, &num2);  //%d�� %d ���̿� ����(������) �� ���� ���� �Է¹��� �� �ִ�. �� ������ �Է��� ��, �������� �����ϸ� �ȴ�.
	char op = ' ';
	//printf("������ ���� : \n 1. +\n2. -\n3. *\n4. /"); scanf("%c", &op);
	printf("���� �ϳ��� �����ϼ��� [* / %% + -] : ");
	scanf("%c%c", &op, &op); //�ѹ��� �Է��ؾ� �ϴµ� �ι� �Է¹޴� ����? ���Ͱ� Buffer�� ���⶧���� ù��° %c�� �ذ������ �Ѵ�
	                         // gets() getchar()    //fflushi(stdin);


	switch (op) {
	case '+': 
		res = num1 + num2; break;   //break : ��Ÿ ��� "Ż��"   �ݵ��, switch�ϰ� �ݺ��������� ���δ�!
	case '-' :
		res = num1 - num2; break;   //break <------> continue(��� ������~�Ӽ�)
	case '* ':
		res = num1 * num2; break;
	case '/' :   //������ ���� 0 �� ���� "0���� ���� �� �����ϴ�."
		if (num2 != 0) {
		res = num1 / num2; break;
		}
		else {
			puts("0���� ���� �� �����ϴ�. \n���α׷� ����");
		}
	case '%' :
		res = num1 % num2; break;
	default : 
		puts("��ȣ�� �߸� �Է� �߽��ϴ�.");
	}
	
	printf("%d %d %c\n", num1, num2, op);  //�߰� üũ -> ������ �� ���Դ���?

}