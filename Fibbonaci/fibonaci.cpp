#include<stdio.h>

/* void fibonaci(int i){

if(i == 5)return;

helloworld(i+1);
printf("%d\n", i);

}
	
int main(){

helloworld(0);	
	return 0;
} */

//fibonacci  : menjumlahkan 2 bilangan sebelumnya

int fibonacci(int i){
	//untuk membuat fibonacci berhenti
	if( i == 0) return 0;
	if (i == 1) return 1;
	return fibonacci(i-1) + fibonacci(i-2);
}

int main (){
	
	int f = fibonacci(7);
	printf("%d",f);
	return 0;
}
