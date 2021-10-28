//add two floats;

#include<stdio.h>

int main(){
	float num_1,num_2;
	printf( "enter two floating point numbers: " );
	scanf( "%f%f", &num_1 , &num_2 );
	float num_3=num_1*num_2;
	printf("their sum is: %f \n",num_3);
}
