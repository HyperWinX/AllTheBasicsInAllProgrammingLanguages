#include <cstdint>

//Define function 1, return type - void, takes no arguments
void test(){}

//Define function 2, return type - int32_t, takes two int32_t arguments
int32_t add(int32_t a, int32_t b){
	return a + b;
}

int main(){
	//Call func 1
	test();
	//Call func 2
	int32_t result = add(5, 10);
}
