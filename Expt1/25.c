/*20. C program to read an integer, then display the value of that integer in decimal, octal,
and hexadecimal notation.*/

#include<stdio.h>

int main(){
	int num1;
	printf("enter integer for display: ");
	scanf("%d", &num1);
	printf("integer displayed in decimal notation: %d\n", num1);
	printf("integer displayed in octal notation: %o\n", num1);
	printf("integer displayed in hexadecimal notation: %x\n", num1);
}
