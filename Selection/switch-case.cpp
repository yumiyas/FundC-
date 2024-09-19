#include<stdio.h>
int main(){
	//SELECTION
	/*
	1. if, else if, else
	2. switch case
	3. ternary if
	*/

    /*  untuk input
	int angka;
    scanf("%d",&angka);
    */
    
    int angka =6;
    switch (angka){
    	
    	//case 0: sama saja dengan angka == 1 pada if else
    	case 0 :
    		printf("nol");
    		//break untuk menghentikan switch
    		break;
    	case 6 :
    		printf("enam");
    		break;
    	case 9 :
    		printf("sembilan");
    		break;
    	// default = else di if else
    	// default bersifat opsional
    	default:
    		printf("selain enam dan sembilan");
	}



     return 0;
}
