#include <stdio.h>

int main(){
	
	//pointer
	// * : pointer
	int a = 10;
	int *p;
	//pointer to pointer
	int **p2;
	
	//alamat dari a
	p = &a;
	p2 =&p;
	
	// & ,*
	printf("%d\n", a);
	printf("%d\n", &p);
	printf("%d\n", *p2);
	
	return 0;
}
