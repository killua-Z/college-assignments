/*19. C program to swap two numbers without using a temporary variable.*/

#include<stdio.h>

int main(){
	int num1,num2;
	printf("enter two number: ");
	scanf("%d %d", &num1, &num2);
	printf("number before swaping are: %d and %d\n", num1, num2);
	num1 =num1 + num2;
	num2 =num1 - num2;
	num1 =num1 - num2;
	printf("number after swaping are: %d and %d\n", num1, num2);
}
