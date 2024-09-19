#include<stdio.h>

int main(){
	
	//filebase : menyimpan data dalam sebuah file
	
	// read.write.append , mode:
	// r -> read  (butuh variabel penampung)  r+ -> read,write(file mesti ada)
	// w -> write (memulai untuk menulis)     w+ -> read,write (rewind)
	// a-> append  (menambah karakter)        a+ -> append,read
	
	// open,process,close
	
	//read
	char txt[200];
	
	FILE *fp;
	//open
	//fp = fopen("data.txt","w");
	fp = fopen("data.txt","a+");
	
	//menulis di file
	fprintf(fp,"Hello Worlds!");
	
	//rewind untuk  balikan pointer ke awal
	rewind(fp);
	
	fscanf(fp,"%[^\n]",txt);
	printf("%s",txt);
	
	//close
	fclose(fp);
	
	
	return 0;
}
