#include<stdio.h>
/*
	내 친구 정보
	이름 : 
	주소 : 
	전화번호 : 
	나이 : 
	생일 :
	키 : 

	*탭키로 간격 맞출 수 있다
	1	234567
	12345	67
*/


void main()
{
	char name[50] = "Nick";
	char address[100] = "태국 방콕";
	int age = 30;
	char phone[20] = "010-3456-3423";
	char bDay[20] = "1984년 12월 24일";
	double height = 184.5;

	/*
	int birYear = 1950;
	int birMonth = 4;
	int birDate = 5;

	
	*/

	puts("*************내 친구 정보**************");
	/*
	printf("이름: %s\n", name);
	printf("주소: %s\n", address);
	printf("전화번호: %s\n", phone);
	printf("나이: %d\n", age);
	printf("생일: %s\n", bDay);
	printf("키: %.1f\n", height);
	*/

	printf("이\t름: "); puts(name);
	printf("주\t소: "); puts(address);
	printf("전화  번호: "); puts(phone);
	printf("나\t이: "); printf("%d살\n", &age);
	printf("생\t일: "); puts(bDay);
	printf("키\t  : "); printf("%.1fcm\n", height);

	//puts는 문자열만 넣을 수 있다







}