#include<stdio.h>
#include<Windows.h> // <-- �������� ����� �Լ��� ���� �ִ�  WinAPI ���� ����ϴ� "���̺귯��"�� ���� �ִ�.
/*
	syste("cls");  clear screen
*/

//��1) ���� �ҽ��� �ݺ��ϴٰ�, Ư�� ������ �Ǹ� �����Ű��
void main() {

	char quit = ' ';
	char op = ' ';
	int num1 = 0, num2 = 0, res = 0;

	for (; ; ) {

		//���� �ڵ�
		printf("���� �ΰ� ���� �Է�(�������� ������ �ּ���) : ");
		scanf("%d %d", &num1, &num2);

		printf("���� �ϳ��� �����ϼ��� [* / %% + -] : ");
		scanf("%c%c", &op, &op);
		switch (op) {
		case '+': res = num1 + num2; break;
		case '-': res = num1 - num2; break;
		case '*': res = num1 * num2; break;
		case '%': res = num1 % num2; break;
		case '/':
			if (num2 != 0) 
			{ 
				res = num1 / num2; 
			}
			else 
			{
				puts("0���� ���� �� �����ϴ�. \n���α׷� ����");
				
			}
			break;
		default: puts("��ȣ�� �߸� �Է� �߽��ϴ�.");

		} // end switch

		printf("%d %c %d = %d\n", num1, op, num2, res);

		//���� �ڵ�
		getchar();
		printf("�����Ϸ��� q(Q)�� ��������: ");
		scanf("%c", &quit);
		if (quit == 'q' || quit == 'Q') { break; }
		
		system("cls");  // �ܼ� ȭ���� ���� �� �ִ�.
	
	}//end for
	

}


/*
	int score = 0;
	char grade = ' ';
	char plusMinus = ' ';
	char quit = ' ';

	for (;;) {

	printf("*** ���� ó�� ���α׷� ***\n");
	printf("������ �Է��ϼ���(0~100���� �־��ּ���) : "); scanf("%d", &score);

	if (score < 0 && score >100) {
		puts("���� ���� (0~100��)�� ������ϴ�.");
	}
	else {
		plusMinus = (score & 10 >= 5) || score == 100 ? '+' : '-';
		if (score >= 90 && score <= 100) {
			grade = 'A';
		}
		else if (score >= 80 && score <= 89) {
			grade = 'B';
		}
		else if (score >= 70 && score <= 79) {
			grade = 'C';
		}
		else if (score >= 60 && score <= 69) {
			grade = 'D';
		}
		else {
			grade = 'F';
			plusMinus = ' ';
		}
		printf("���� :%d\t ���� :%c%c\n", score, grade, plusMinus);
		
		}
	getchar();
	printf("�����Ϸ��� q(Q)�� ��������: ");
	scanf("%c", &quit);
	if (quit == 'q' || quit == 'Q') { break; }
	}
}
//��2) ����ó�� �ҽ��� �ݺ��ϴٰ�, Ư�� ������ �����Ű��*/