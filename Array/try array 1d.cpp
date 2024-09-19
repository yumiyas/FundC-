#include<stdio.h>
#include<string.h>

int main(){
	
	// ascii
/*	
	printf("%d\n",'a');
	printf("%d\n",'z');
	printf("%d\n",'A');
	printf("%d\n",'Z');
*/	
	
	
	char str[30];
	
	scanf("%[^\n]",str);
	getchar();
	
	int panjang = strlen(str);
	
//	for(int i = 0; i<strlen(str);i++){
//	opsi 1	if(str[i] >= 97 && str[i] <= 122) ==> mengikuti format ascii
//  opsi 2		if(str[i] >= 'a' && str[i] <= 'z'){
//			str[i] -= 32;  // selisih antara 97 dan 65 ,untuk mengubah dari a kecil ke a besar
//		}
//	}
// opsi 1	printf("%s", str);
	printf("%s", strupr(str));  //strlwr untuk lower
	return 0;
}
