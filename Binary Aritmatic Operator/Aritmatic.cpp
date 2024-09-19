/*  Operator aritmatika
    ( + ) === printf("%d",2+3) === 5
   ( - ) === printf("%d",3-2) === 1
   ( * ) === printf("%d",2*3) === 6
   ( / ) === printf("%d",5/2) === 2
   ( % ) === printf("%d",20%3) === 5
*/
#include<stdio.h>
int main (){
	
	
	printf("ini tambah : %d\n", 2+5);
	printf("ini kurang : %d\n", 5-2);
	printf("ini kali : %d\n", 2*5);
	printf("ini bagi : %d\n", 10/5);
	printf("ini bagi(desimal) : %f\n", 2.5/1.5);
	printf("ini modulus : (%d+%d)/%d = %d\n", 5, 2, 3, (5+2)/3);
	
	// bitwise bolean
	/*    And          or          xor
	   T & T :T     T or T : T    T xor T : F  
	   F & F :F     F or F : F    F xor F : F
	   T & F :F     T or F: T     T xor F: T
	   F & T :F     F or T : T    F xor T : F
	*/
	printf("AND : %d\n",6&5);
	printf("OR : %d\n",6|5);
	printf("XOR : %d\n",6^5);
	printf("Shift Right : %d\n", 6>>2);
	printf("Shift Left : %d\n", 6<<2);
	return 0;
}
