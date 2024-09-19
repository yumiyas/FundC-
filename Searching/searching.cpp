#include<stdio.h>

//mencari value dalam sebuah data

int arr[]={40,60,75,130,202,242,248,384,372,381,189,464,
           469,499,544,593,646,649,667,681,694,705,729,
		   733,737,764,785,840,911,934,989};
int length = 32;

int linearSearch(int search){
	for(int i = 0; i < length; i++){
		if(arr[i] == search){
			return i;
		}
	}
	return -1;
}

int binarySearch(int search){
	int low = 0;
	int high = length-1; // >>>>index terakhir
	// looping jika low kurang dari sama dengan high : program akan berhenti
	while(low <= high){
		int mid = (low+high)/2;
		// jika array ke mid sama dengan yang dicari maka return mid langsunng
		if (arr[mid] == search) return mid;
		else if(search < arr[mid]) high = mid-1; // yang dicari kurang dari mid
	   else if(search > arr[mid]) low = mid+1;
   }
   return -1;
}

int main(){
	
	//linear,binary 	// index -1 : nilai tidak ditemukan
	
//int resultIndex = linearSearch(91);
  int resultIndex = binarySearch(911);
//jika nilai tidak ditemukan dalam index maka print notfound

if(resultIndex == -1) printf("Not Found");	
else printf("Index = %d", resultIndex);
	
	return 0;
}
