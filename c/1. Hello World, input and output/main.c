#include <stdio.h>

int main(int argc, char *argv[]){
	printf("Hello World!");
	//Nuh uh, its not end
	int number = 666;
	printf("Demonic number: %d", number);
	char buf[512];
	//Reading something from console
	fgets(buf, sizeof(buf), stdin);
	//Now thats all. Thats your Hello World!
}
