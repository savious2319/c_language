#include<stdio.h>
/*
	�� ģ�� ����
	�̸� : 
	�ּ� : 
	��ȭ��ȣ : 
	���� : 
	���� :
	Ű : 

	*��Ű�� ���� ���� �� �ִ�
	1	234567
	12345	67
*/


void main()
{
	char name[50] = "Nick";
	char address[100] = "�±� ����";
	int age = 30;
	char phone[20] = "010-3456-3423";
	char bDay[20] = "1984�� 12�� 24��";
	double height = 184.5;

	/*
	int birYear = 1950;
	int birMonth = 4;
	int birDate = 5;

	
	*/

	puts("*************�� ģ�� ����**************");
	/*
	printf("�̸�: %s\n", name);
	printf("�ּ�: %s\n", address);
	printf("��ȭ��ȣ: %s\n", phone);
	printf("����: %d\n", age);
	printf("����: %s\n", bDay);
	printf("Ű: %.1f\n", height);
	*/

	printf("��\t��: "); puts(name);
	printf("��\t��: "); puts(address);
	printf("��ȭ  ��ȣ: "); puts(phone);
	printf("��\t��: "); printf("%d��\n", &age);
	printf("��\t��: "); puts(bDay);
	printf("Ű\t  : "); printf("%.1fcm\n", height);

	//puts�� ���ڿ��� ���� �� �ִ�







}