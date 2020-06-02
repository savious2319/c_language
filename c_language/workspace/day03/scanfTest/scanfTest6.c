#include <stdio.h>

void main()

{
	/*
		실수 입력받기 : scanf("%lf", &실수형 변수);

	*/

	double height = 0.0;
	double weight = 0.0;
	//double bmi = 0.0;
	printf("키를 입력하세요(소수점 한자리) : "); scanf("%lf", &height); 
	printf("몸무게를 입력하세요(소수점 한자리) : "); scanf("%lf", &weight);//long float == double


	//BMI 체질량 계수 출력하는 프로그램
	//BMI지수 = 몸무게(kg) / (신장(m) * 신장(m))
	//bmi = weight / ((height/100) * (height/100));
	//		weight / height / height * 10000;


	puts("========");
	printf("키 : %.1fcm\n", height);
	printf("키 : %.1fcm\n", weight);
	printf("당신의 BMI지수는? : \"%.1f\"입니다.\n", weight*10000 / (height*height));

	puts("===BMI 지수===");
	puts("15 이하 저체중");
	puts("20.5~22.5 정상");
	puts("27.6~30.0 경도비만");
	puts("30.1~50.0 고도비만");
	puts("===종료===");

}