#include<stdio.h>

void main() {
	//���� ó�� ���α׷�
	//0~100 �� ���̿� ������ A~F���� ������� ġȯ�Ѵ�.
	//100~90�� "A����"
	//89~80�� "B����"
	//79~70�� "C����"
	//69~60�� "D����"
	//59~50�� "F����"
	int score = 0;
	printf("*** ���� ó�� ���α׷� ***\n");
	printf("������ �Է��ϼ���(0~100���� �־��ּ���) : "); scanf("%d", &score);
	char grade = ' ';
	if (0 > score || score > 100) {
		puts("�Է��� ������ 0~100�� ���� �ۿ� �ֽ��ϴ�. �ٽ� �Է����ּ���.");
	}else {
		if (score >= 90 && score <= 100) {
			//printf("���� : %d��\t���� : %c����\n", score, 'A');
			//���ں��� = 'A';
			grade = 'A';
			//puts("A����");
		}
		else if (score >= 80 && score <= 89) {
			//printf("���� : %d��\t���� : %c����\n", score, 'B');
			grade = 'B';
			//puts("B����");
		}
		else if (score >= 70 && score <= 79) {
			//printf("���� : %d��\t���� : %c����\n", score, 'C');
			grade = 'C';
			//puts("C����");
		}
		else if (score >= 60 && score <= 69) {
			//printf("���� : %d��\t���� : %c����\n", score, 'D');
			grade = 'D';
			//puts("D����");
		}
		else {
			//printf("���� : %d��\t���� : %c����\n", score, 'F');
			grade = 'F';
			//puts("F����");
		}
		printf("���� : %d��\t���� : %c����\n", score, grade);
	}
	


}