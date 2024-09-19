#include<stdio.h>

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

int main(){
	
	info infobangunan ={{"adi",25},{20,10}};
	
	printf("%s berumur %d memiliki luas bangunan = %d\n",
	       infobangunan.owner.name, infobangunan.owner.age,
		   infobangunan.luasbangunan.length*infobangunan.luasbangunan.width);
	
//	rectangle kotak1 = {10,5};
//	person orang1 = {"Player1", 20};
//	
//	
//	printf("%s\n", orang1.name);
//	printf("%d",kotak1.length * kotak1.width);
//	
	
	return 0;
}
