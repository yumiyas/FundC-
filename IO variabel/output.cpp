#include<stdio.h>
 int main(){
 	
 	int bil = 10;
 	float fl = 1.2f;
 	char karakter='b';
 	char string[100] = "Hello World";
 	
 	//gunakan \n untuk membuat baris baru
 	
 	//mencetak kelayar
 	printf("%d\n", bil);
 	// untuk float,tambahkan .2 sesuai angka dibelakang koma
 	printf("%.2f\n", fl);
 	
 	//mencetak ke layar untuk tipe karakter
 	printf("%c\n", karakter);
 	printf("%s\n",string);
 	
 	return 0;
 }
