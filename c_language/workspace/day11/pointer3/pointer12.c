#include <stdio.h>
#include <string.h>  //strcpy() strcmp()...
#include<stdlib.h>
/*
	main()����
	���ڿ��� �Է¹��� �� �ִ� ������ ������ �����.

	input() �Լ��� ���ؼ� ���ڿ��� �Է¹޾� �´�.
	---> input �Լ� �ȿ����� 12byte�� �޸� �Ҵ��� ���� ��,
		 �ش� �ּҿ� "cabin" �̶�� ����ܾ �ٿ��ֱ�(strcpy(�ּ�, "cabin")) �Ѵ�.

	�����Լ����� ���ڿ� ������ ������ ����ϰ�,
	�޸𸮸� �����Ѵ�.
*/
/*


void main() {

	char arName[12] = "cabin"; //���ڿ� ���� ����
	char *pName = "cabin"; // "cabin"�� ���ڿ� ������ ������ ���� �� ������?
						   // ���� �� �ִ�. ���ڿ��� �ּҰ��� ������ �ִ�. 
						   //������ ������ �ּҰ��� ������ �� �ִ� �����
	//arName = "aaa";	%d, arName); �� �迭�� ������ġ! arName�� �̹� ���! 12byte��ġ���� ����Ű�� ���

	//	 strcpy(���⿡, ���ڿ�); strcpy(arName, "cabin");
	//         (�ּ�,  ���ڿ�);

	strcpy(arName, "cabin2");

	pName = "abc";
	printf("�迭 : %s ������ : %s\n", arName, pName);


}*/

void input(const char **pN) { //const -> ����� ������!
							 //#define PI 3.14
							 //const  double  PI=3.14;
							 //const�� �����͸� ���� �� �ִ�! const* double PI=3.14;
							 //const int *a = �ּ�;  -> �ּҴ� �ٲ� �� �ִ�. �����ʹ� �ٲ�����
							 //int * const a = �ּ� -> �ּҸ� �ٲ� �� ����. �����ʹ� �ٲ� �� �ִ�
							 //const int * const a =  �ƹ��͵� �ٲ����� (�ּ�, ������)
	//�ڵ��� �Ҵ�
	*pN = (char *)malloc(12); //12byte��ŭ�� ���ڰ��� heap�� �Ҵ��ض� *pN�� ����Ű�� �ּҿ� *pN == pName
	//���ڿ� ����
	strcpy(*pN, "Cabin"); // pN�� ����Ű�� �ּҿ� "Cabin"�� �����ϼ���
						  //*pN -> "Cabin"�� �ּҸ� ������ �ִ�. 
	printf("%s\n", *pN); //���ڿ��� �ּҿ� ������ �� �ֳ�??
}

void main() {

	//char *pName; �ʱ�ȭ�� �ȵǾ��ִ�. ������ ���� ����ִ�.
	//printf("%d����\n", pName); �ʱ�ȭ�� �ȵǾ� �ִµ� ���� ����ҷ��� �ϴϱ� ������ ����

	//char *pName = 0; �ʱ�ȭ�� ���־���
	//printf("%d\n", pName); �ʱ�ȭ�� ���־��⶧���� ������ �ȳ��� 0�̶�� ���� ��µȴ� 

	char *pName; //�ʱ�ȭ�� �����־���. ������ ���� ����ִ�.
	printf("%d����\n", &pName); //pName�� �ּҸ� ����ϱ⶧���� �ʱ�ȭ�� �����־ ����� �ȴ�.
							   

	input(&pName); //pName�� �ּҸ� input()�� �Ѱ��ش�
	char sd[] = "Hello Brian";  //�迭 ������ �ʱⰪ�� ������ �����ϴٸ� �ε��� ���� ����!!!
	printf("%s\n", sd); //<--- ���ڿ��� char�迭�̹Ƿ� %s�� ����ϸ� NULL���� ���������� ����� �ش�
	printf("%d\n", sd);
	printf("%s\n", pName);

	free(pName);
	pName = NULL;


	/*int a;

	printf("%d", &a);*/
}