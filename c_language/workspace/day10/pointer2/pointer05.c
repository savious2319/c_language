#include<stdio.h>
/*
	call by value

	void fct(매개변수){

	}

	void fctByPointer(int *pAge){
		printf("pAge의 주소값 : %d\n", pAge);

	}

	main(){
		int age = -1;
		fct(age);
		fctByPointer(&값); //주소를 보낼 수 있다. call by address(pointer)
	}
*/
void fctP(int *pAge) {
	*pAge = 99; //pAge 변수는 age의 주소값만 갖고 있다.
			    //따라서 age를 만들려면 *연산을 통해 age의 영역을 가리키게 해야한다.
			    //그 후, 99라는 데이터를 대입시키면,
			    // age라는 변수의 위치에 가서 99를 대입하게 된다.
			    // 결국 포인터를 사용하면, 타 함수의 지역변수를 사용할 수 있다!
			    //
}

void main() {

	int age = -1;

	fctP(&age);
	printf("fctP() 복귀 후 age 값 : %d살\n", age);
}