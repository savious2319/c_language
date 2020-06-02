#include <stdio.h>
void print(int column, int(*pArr)[4]);
/*

	2차원 배열을 포인터와 연결시켜 보자!
	int arr[2][3]
	1) int *arr[3];   <--포인터 배열 (포인터를 저장하고 있는 배열)
	2) int (*pAr)[3]; <--배열 포인터 (배열을 가리키고 있는 포인터)
*/
void main() {

	int arr[3][4] = { //arr이 100번지
		{10,20,30,40}, //arr[0] 100번지 20번 몇번지? 104번지 -> arr[0] + 1 
					   // 30을 읽고 싶다면? *(arr[0]+2) => arr[0][2]
		{50,60,70,80}, //arr[1]
		{90,100,110,120}//arr[2]
					    //arr[0] -> arr[1] : 16byte가 이동되어야 한ㄷ. 즉 int[4] 씩 이동
	};

	//그렇다면 포인터 변수를 만들때, 몇간씩 이동하는 포인터 변수여야 하느냐?
	// int *p <--- 4byte씩 이동하는 포인터 변수
	// int (*p)[4] <--- [4]라는 말은 한번 읽을 때(+1할 때)마다
					//  4칸 이동(16byte씩) 이동하는 p 변수라는 뜻
	int(*pArr)[4] = arr;
	//번지값 출력으로 포인터가 어떻게 이동하는 지 검색!
	for (int i = 0; i < 3; i++){
	printf("arr+%d : %d번지\tpArr+%d : %d번지\n",i, arr+i, i, pArr+i);

	}
	/*
	arr+0 : 15990252번지    pArr+0 : 15990252번지  <---- 1번째 줄 0행
	arr+1 : 15990268번지    pArr+1 : 15990268번지  <---- 1번째 줄 1행
	arr+2 : 15990284번지    pArr+2 : 15990284번지  <---- 1번째 줄 2행
	*/

	//요소값을 출력!!
	//%d점수, pArr?

	//0행에서 -> 두 번째 칸을 가려면? (주소출력해보기)
	printf("pArr이 가리키고 있는 주소 :%d번지\n", pArr);
	printf("pArr[0]이 가리키고 있는 주소 :%d번지\n", pArr[0]);
	printf("pArr[1]이 가리키고 있는 주소 :%d번지\n", pArr[1]);

	//pArr <- 100번지 4byte  sizeof(pArr)  pArr+1 : 116번지
	//104번지에 있는 값을 알고싶다 pArr로!!!! 10, 20, 30, 40

	//*(pArr+0)   <--- 16byte짜리 arr[0]의 주소(int[4]칸짜리 주소)가 나오는 것임
	// *pArr <--- int를 4개로 구성하고 있는 배열 arr[0]과 같은 주소가 나오는 거구나!
	//  *(pArr+0)   ----> 읽었더니 부분배열의 주소가 나왔네!!! -> 그럼 그 부분 배열의 주소 갖고 요소를 읽어봐야지!  *(*(pArr+0) + 0)

	// *( *(pArr+0) + 0)
	//      *(pArr[0] + 0)
	//        pArr[0]  [0]

	int column = sizeof(pArr[0]) / sizeof(pArr[0][0]);
	print(column, pArr);
}
void print(int column, int (*pArr)[4]) {

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < column; j++){
			printf("%d행 : %d  ", i+1, *(pArr[i]+j));
		}
		puts("");
	}

}