/*28 C program to read ten integers. Display these numbers by printing three numbers in
a line separated by commas.*/

#include<stdio.h>

int main(){
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	printf("enter 10 integers for reading: ");
	scanf(" %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);
	printf("the integers are: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
}
