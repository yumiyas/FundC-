#include<stdio.h>

int main(){
	
	//membuat matrix 3x3
	
int matrix[3][3];	
int barispertama = 0;
	
	//looping : i untuk vertikal j untuk horizontal
	//gunnakan spasi saat input
	
	for(int i = 0; i < 3; i++){         
		for(int j = 0; j < 3; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
	
	//looping array teratas
	
	for (int i = 0; i < 3; i++){
		barispertama += matrix[0][i];
	}
	
	printf("Hasil tambah baris pertama : %d", barispertama);
	return 0;
}
