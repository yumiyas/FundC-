#include<stdio.h>
int main(){
	//SELECTION
	/*
	1. if, else if, else
	2. switch case
	3. ternary if
	*/
    
     // int angka;
    // scanf("%d",&angka);
    
    //int angka = 10;
    
    //format penulisan ternary
    // kondisi ? benar : salah
    //printf("%s",(angka%2 == 0? "genap/" : "ganjil"));
    
    //int bulat = 1;
    //printf("%s", (bulat < 2? "lebih kecil dari 2" :
	            //   bulat > 2 ? "lebih besar dari 2" : "2"));
	            
	            int input;
	            int bawah,atas;
	            
	            scanf("%d",&input);
	            scanf("%d %d",&bawah,&atas);
	            if (input>= bawah && input<= atas) {
	            	printf("%d diantara %d dan %d",input,bawah,atas);
				} else
				    printf("%d bukan diantara %d dan %d",input,bawah,atas);
	            
	            
				

return 0;
}
