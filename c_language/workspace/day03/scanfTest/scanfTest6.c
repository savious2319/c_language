#include <stdio.h>

void main()

{
	/*
		�Ǽ� �Է¹ޱ� : scanf("%lf", &�Ǽ��� ����);

	*/

	double height = 0.0;
	double weight = 0.0;
	//double bmi = 0.0;
	printf("Ű�� �Է��ϼ���(�Ҽ��� ���ڸ�) : "); scanf("%lf", &height); 
	printf("�����Ը� �Է��ϼ���(�Ҽ��� ���ڸ�) : "); scanf("%lf", &weight);//long float == double


	//BMI ü���� ��� ����ϴ� ���α׷�
	//BMI���� = ������(kg) / (����(m) * ����(m))
	//bmi = weight / ((height/100) * (height/100));
	//		weight / height / height * 10000;


	puts("========");
	printf("Ű : %.1fcm\n", height);
	printf("Ű : %.1fcm\n", weight);
	printf("����� BMI������? : \"%.1f\"�Դϴ�.\n", weight*10000 / (height*height));

	puts("===BMI ����===");
	puts("15 ���� ��ü��");
	puts("20.5~22.5 ����");
	puts("27.6~30.0 �浵��");
	puts("30.1~50.0 ����");
	puts("===����===");

}