/*12. C program to perform addition, subtraction, division, integer division, multiplication
and modulo division on two integer numbers.*/

#include<stdio.h>

int main(){
	int num1,num2;
	printf("enter two numbers: ");
	scanf("%d%d", &num1, &num2);
	printf("the sum of the numbers are: %d\n", num1+num2);
	printf("the difference of the numbers are: %d\n", num1-num2);
	printf("the product of the numbers are: %d\n", num1*num2);
	printf("the integer divisor of the numbers are: %d\n", num1/num2);
	printf("the divisor of the numbers are: %f\n", (float)num1/num2);
	printf("the modulus of the numbers are: %d\n", num1%num2);
}
