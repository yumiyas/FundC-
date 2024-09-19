#include<stdio.h>
//fungsi untuk memanipulasi string
#include<string.h>

int main(){
	// array harus 1 tipe data
	int anga[20];
//	char str[60];
    char str[60][100];

//    scanf("%s",str);
//    str[1]='a';
//    printf("%s\n",str);
    
    scanf("%s",str[0]);
    strcpy(str[0],"haloo");
    printf("%s\n",str[0]);

//	anga[0] =2;
//	printf("%d\n",anga[0]);
//	anga[0] =3;
//	printf("%d\n",anga[0]);
//	
	
	return 0;
}
