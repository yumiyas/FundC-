#include<stdio.h>

int main(){
	
	//Repetition / Looping
	//for (inisialisasi : perbandingan : pertambahan/pengurangan)
	
    //	for(int i = 1; i < 10 ; i+=2)
	    // 1.  ( int i = 1 ; i <= 10 ; i++) ==== untuk membuat looping dari satu - 10 dengan (<=)
	    // += untuk selisish
	//	{
		//	if(i == 5) break;  // break untuk mengakhiri looping
	//		if(i == 5) continue;  // untuk continue dan melompati
		
	//	printf("%d\n",i);
		// 2. printf("%d\n", i + 1);  //untuk memulai looping dari satu digunakan i + 1
	// }
	
	//nested loop ( loop dalam loop)
	
	
   /* int size = 10;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			printf("*");
		}
		printf("\n");
	}
	*/
	
	int size = 10;
	scanf("%d",&size);
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (i == 0 || i == size-1 || j == 0 || j == size-1){
				printf("*");
			}else {
				printf(" ");
			}
			
		}
		printf("\n");
	}
	return 0;
}                                                                                                                                                                                                                     
