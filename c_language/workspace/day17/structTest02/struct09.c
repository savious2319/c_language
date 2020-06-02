#include <stdio.h>
/*
	구조체와 포인터

	(*구조체주소).멤버변수 >>> 구조체->멤버변수

	구조체를 배열로 만들 수 있다!
	구조체 타입 구조체변수[칸수];

	
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

	//printf("%d\n", sizeof(struct Data)); 몇 byte인지 알아내면 된다!
	Data data1 = { 'A', 1, 1.1 };
	Data data2 = { 'B', 2, 2.1 };
	Data data3 = { 'C', 3, 3.1 };
	Data data4 = { 'D', 4, 4.1 };

	//Data 타입으로 4개를 만들었다! -> 배열로 만들 수 있다.
	//Data arData[4];     //arData[0]  <--- ch와 num과 weight
						//arData[3]  <--- ch와 num과 weight

	Data arData[4] = {
		{ 'A', 1, 1.1 },      // <--- arData[0]의 두번째 멤버 arData[0].num
		{ 'B', 2, 2.1 },	  // <--- 2.1dmf 읽고 싶다 arData[1].weight 
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