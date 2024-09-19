#include<stdio.h>

// not return == return type
/*void printHelloWorld(){
	printf("Hello World");
} */

int getNumber(){
	return 5;
}

//parsing by value

int sum(int first,int second){
	int total = first + second;
	return total;
}

//parsing by reference

int sum(int *satu,int *dua){
	*satu = 4;  // mengubah  10 jadi 4
	printf("alamat = %d\n",satu);
	int hasil = *satu + *dua;
	return hasil;
}

int main(){
	
	
//	printf("Hello World");
	
	// parsing by parameter
	//by value &  by referemce
	
	int a = getNumber();
	printf("%d\n",getNumber());
	
	//parsing by value
	int hasilsum = sum(3, 5);
	printf("%d\n",hasilsum);
	
	//parsing by reference
	int satu = 10;
	int dua =11;
	printf("%d\n",satu);
	int  totalsum = sum(&satu,&dua);
	printf("%d\n",totalsum);
	
	return 0;
}
