#include<stdio.h>
int main(){
	//SELECTION
	/*
	1. if, else if, else
	2. switch case
	3. ternary if
	*/
	
	int angka = 99;
	
	//if angka ganjil,print ganjil
	//if angka genap print genap
	// == comparasion
	
	if( angka == 0){
		printf("nol\n");
	}
	
	//cek angka ganjil atau genap menggunakan modulus %
	else if(angka%2 == 1 ){
		printf("ganjil");
	}
	
	// else digunakan jika kondisi diatas tidak terpenuhi keduanya
	else {
		printf("genap");
	}
	
	
	return 0;
}
