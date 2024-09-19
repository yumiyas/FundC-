#include<stdio.h>

int arr[] = {37,10,29,10,14};
int length = 5;

void print(){
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void selectionSort(){
	//looping
	for(int i = 0; i < length; i++){
		//menset array minimum pertama
		int min = i; 
		///dimulai dari data yang belum di sort
	 for (int j = i+1; j < length; j ++){
	 	if(arr[j] < arr[min]){
	 		min = j;
		 }
	 }
	 int temp = arr[min];
	 arr[min] = arr[i];
	 arr[i] = temp;
	}
	
}

int main(){
	
//SelectionSort
selectionSort();	
print();
	
	return 0;
}
