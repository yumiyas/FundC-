#include<stdio.h>
int main(){
 	
 	int bil ;
 	float fl = 1.5f;
 	char karakter='f' ;
 	char string[100] = "Hello World";
 	
 	//menampilkan input scanf,tambahkan (&) untuk alamat
 	scanf("%d", & bil);
 	printf("%d\n", bil);
 	
 	scanf("%f", & fl);
 	printf("%.2f\n", fl);
 	
 	//tambahkan input stream = getchar() untuk karakter
 	scanf("%c", & bil);
 	getchar();
 	printf("%c\n", karakter);
 	
	 //khusus string : [^\n] format inputan sampai enter
	 scanf("%[^\n]", string);
	 getchar();
	 printf("%s\n",string);
 	
 	return 0;
 }
