#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//dipaki untuk meloopin variabel

struct rectangle{
	int length;
	int width;
};

struct person{
	char name[200];
	int age;
};

struct info {
	person owner;
	rectangle luasbangunan;
};

info  infobangunan[100];
int banyakbangunan = 0;

info tambahbangunan(){
	char name[200];
	int age,length,width;
	
	printf("Input nama owner:  ");
	scanf("%s", name);getchar();
	
	printf("Input umur owner:  ");
	scanf("%d", &age);getchar();
	
	printf("Input lebar bangunan:  ");
	scanf("%d", &width);getchar();
	
	printf("Input panjang bangunan:  ");
	scanf("%d", &length);getchar();
	
	info infobaru ={{" ",age},{length, width}};
	strcpy(infobaru.owner.name, name);
	
	return infobaru;
}

void lihatbangunan(){
	for(int i = 0; i < banyakbangunan; i++){
		info bangunan = infobangunan[i];
		printf("%s berumur %d memiliki luas bangunan %d\n",
		bangunan.owner.name, bangunan.owner.age,
		bangunan.luasbangunan.length*bangunan.luasbangunan.width);
	}
}
	

int main(){
	
	int input = 0;
	do {
		system("cls");
		printf("1. tambah bangunan\n");
		printf("2. luas bangunan\n");
		printf("3. exit\n");
		scanf("%d",&input);getchar();
		switch(input){
			case 1:
				infobangunan[banyakbangunan++] =tambahbangunan();
				break;
				case 2:
					lihatbangunan();
					getchar();
					break;
		}
		
	}while(input != 3);
	
	
	return 0;
}
