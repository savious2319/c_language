#include "MyAddress.h"


void main() {

	Address frd[3] = {
		{0},
		{0},
		{0}
	};

	// Address frd[3] = {0};
	// Address frd[3]
	int size = sizeof(frd) / sizeof(frd[0]);
	inputAddress(size, frd);

	printAddress(size, frd);







}