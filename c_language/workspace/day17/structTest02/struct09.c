#include <stdio.h>
/*
	����ü�� ������

	(*����ü�ּ�).������� >>> ����ü->�������

	����ü�� �迭�� ���� �� �ִ�!
	����ü Ÿ�� ����ü����[ĭ��];

	
*/
typedef struct Data {

	char ch;
	int num;
	double weight;

}Data;
void printData(int size, Data *pData) {
	for (size_t i = 0; i < size; i++){
	printf("%c\t%d\t%.1f\n", pData[i].ch, pData[i].num, pData[i].weight);
	}

}
void main() {

	//printf("%d\n", sizeof(struct Data)); �� byte���� �˾Ƴ��� �ȴ�!
	Data data1 = { 'A', 1, 1.1 };
	Data data2 = { 'B', 2, 2.1 };
	Data data3 = { 'C', 3, 3.1 };
	Data data4 = { 'D', 4, 4.1 };

	//Data Ÿ������ 4���� �������! -> �迭�� ���� �� �ִ�.
	//Data arData[4];     //arData[0]  <--- ch�� num�� weight
						//arData[3]  <--- ch�� num�� weight

	Data arData[4] = {
		{ 'A', 1, 1.1 },      // <--- arData[0]�� �ι�° ��� arData[0].num
		{ 'B', 2, 2.1 },	  // <--- 2.1dmf �а� �ʹ� arData[1].weight 
		{ 'C', 3, 3.1 },      
		{ 'D', 4, 4.1 }
		};
	
	int size = sizeof(arData) / sizeof(arData[0]);
	printData(size, arData);
	//printf("arData[1].ch : %c\n", arData[1].ch);


	//printf("%c\t%d\t%.1f\n", arData[0].ch, arData[0].num, arData[0].weight);

	Data arData2[50] = { 0 };
	size = sizeof(arData2) / sizeof(arData2[0]);
	printData(size, arData2);





}