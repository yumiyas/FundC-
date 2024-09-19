#include<stdio.h>

//recursive : fungsi untuk memanggil dirinya sendiri
//harus ada kondisi dimana fungsi ini harus berhenti

void helloworld(int i){
	
	if( i == 5) return;
	
	helloworld(i+1);
	printf("%d\n",i); //pindahkan posisi untuk menganti urutan
	                  //upper dan lower helloworld(i +1);
}

int main(){
	
	helloworld(0);
	
	return 0;
}
