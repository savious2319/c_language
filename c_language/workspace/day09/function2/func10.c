#include<stdio.h>
//1. ���������� �غ� : ȿ���� ������!
//int x;
//int y;

//2. �����ͷ� �غ�!
//3. ����ü�� �غ�!
int changeYear(int x) {
	printf("�Ѿ�� �� : %d\n", x);
	int ch_val = 0;
	printf("�����ϰ��� �ϴ� ���� �Է��ϼ��� : "); scanf("%d", &ch_val);
	printf("ó�� �� : %d\t ������ �� : %d\n", x, ch_val);

	return ch_val; //���� �Է¹��� ���� �ٽ� �����ٰ�!!
}

int changeMonth(int x) {
	printf("�Ѿ�� �� : %d\n", x);
	int ch_val = 0;
	printf("�����ϰ��� �ϴ� ���� �Է��ϼ��� : "); scanf("%d", &ch_val);
	printf("ó�� �� : %d\t ������ �� : %d\n", x, ch_val);

	return ch_val; //���� �Է¹��� ���� �ٽ� �����ٰ�!!
}
	void main() {

		int year = 0;
		int month = 0;
		//printf("%d %d\n", year, month); //�� year�� 5�� �ְ� month�� 2020d�� �־��ٸ�....
									    //�� ���� ���� �����ϴ� �Լ��� ȣ���ؼ�
									    //��ȯ��Ű��!

		//year = changeValue2(year, month);  //�� �ϳ��� ���Խ�ų �� �ۿ� ����!
		                            //return�� �� �Ѱ��� �����Ѵ�!

		printf("�⵵�� �Է��ϼ��� : "); scanf("%d", &year);
		printf("���� �Է��ϼ��� : "); scanf("%d", &month);

		printf("change �Լ� �������� year : %d\tmonth: %d\n", year, month);

		year = changeYear(year);
		month = changeMonth(month);


		printf("changeValue2 �Լ� ������ ���� year : %d\tmonth : %d\n", year, month);


	}
	int changeValue2(int x, int y) {
	
		printf("���ο��� �Ѿ�� ��Ȯ�� :  %d %d\n", x, y);

		int temp;
		temp = x;
		x = y;
		y = temp;

		printf("switching �� �� Ȯ�� : %d %d\n", x, y);

		return x, y; //����! �Ǵ� ������ ����!!!
					 //������ �Ѱ��� ���� �� �� �ִ�. ��? �Լ���տ� int�� �����ϱ�!
					 //�׷��� �Լ��� ������!
					 //������ ���� 1���� ����ҿ� 1���� �����͸� ���� �� �ִ� ����!
	}