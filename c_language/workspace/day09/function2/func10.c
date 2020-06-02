#include<stdio.h>
//1. 전역변수로 극복 : 효율이 떨어져!
//int x;
//int y;

//2. 포인터로 극복!
//3. 구조체로 극복!
int changeYear(int x) {
	printf("넘어온 값 : %d\n", x);
	int ch_val = 0;
	printf("변경하고자 하는 값을 입력하세요 : "); scanf("%d", &ch_val);
	printf("처음 값 : %d\t 변경한 값 : %d\n", x, ch_val);

	return ch_val; //새로 입력받은 값을 다시 돌려줄게!!
}

int changeMonth(int x) {
	printf("넘어온 값 : %d\n", x);
	int ch_val = 0;
	printf("변경하고자 하는 값을 입력하세요 : "); scanf("%d", &ch_val);
	printf("처음 값 : %d\t 변경한 값 : %d\n", x, ch_val);

	return ch_val; //새로 입력받은 값을 다시 돌려줄게!!
}
	void main() {

		int year = 0;
		int month = 0;
		//printf("%d %d\n", year, month); //예 year에 5를 넣고 month에 2020d을 넣었다면....
									    //두 값을 서로 변경하는 함수를 호출해서
									    //교환시키자!

		//year = changeValue2(year, month);  //값 하나만 대입시킬 수 밖에 없다!
		                            //return은 값 한개만 전달한다!

		printf("년도를 입력하세요 : "); scanf("%d", &year);
		printf("월을 입력하세요 : "); scanf("%d", &month);

		printf("change 함수 실행이전 year : %d\tmonth: %d\n", year, month);

		year = changeYear(year);
		month = changeMonth(month);


		printf("changeValue2 함수 실행한 이후 year : %d\tmonth : %d\n", year, month);


	}
	int changeValue2(int x, int y) {
	
		printf("메인에서 넘어온 값확인 :  %d %d\n", x, y);

		int temp;
		temp = x;
		x = y;
		y = temp;

		printf("switching 한 값 확인 : %d %d\n", x, y);

		return x, y; //에러! 또는 값전달 오류!!!
					 //리턴은 한개만 전달 할 수 있다. 왜? 함수명앞에 int로 했으니까!
					 //그래서 함수는 변수다!
					 //변수라 함은 1개의 저장소에 1개의 데이터만 담을 수 있는 공간!
	}