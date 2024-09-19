#include<stdio.h>

int main (){
	
	//membuar array dengan index 10
	int arr[10];
	
	//melakukan  looping
	for(int i = 0; i < 10; i++){
		//set array = 0
		arr[i]=0;
		//print alamat index array
		printf("%d = %d\n",i,&arr[i]);
	}
	
	//inisialiasi pointer
	int *a;
	int b;
	
	scanf("%d %d", &a, &b);
	
	//ganti value a dengan  b
	*a = b;
	
	for(int i =0; i <10 ; i++){
		printf("%d = %d\n", i ,arr[i]);
	}
	
	// tulis alamat : nilai
	return 0;
}
