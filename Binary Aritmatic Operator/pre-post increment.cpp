#include<stdio.h>
int main() {
	// pre-increment <ditambah dahulu kemudian digunakan> ++i
	int pre =0;
	printf("%d\n", ++pre);
	printf("%d", pre);
	
	// post-increment <digunakan dahulu kemudian ditambah> i++
	int post =2;
	printf("%d\n", post++);
	printf("%d", post);
	
	// pre-decrement <dikurangi dahulu kemudian digunakan> --i
	int pre1 =5;
	printf("%d\n", --pre1);
	printf("%d", pre1);
	
	// post-decrement <digunakan dahulu kemudian dikurangi> i--
	int pre2 =10;
	printf("%d\n", pre2--);
	printf("%d\n", pre2);
	
	printf("AND : %d\n",10&3);
	printf("OR : %d\n", 20|30);
	printf("XOR : %d\n", 5^2);
	printf("Shift Left : %d\n", 6<<5);
	return 0;
}
