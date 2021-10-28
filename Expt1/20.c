/*20 C program to convert degrees Fahrenheit into degrees Celsius.*/

#include<stdio.h>

int main(){
	float temp_f, temp_c;
	printf("enter temperature in fahrenheit: ");
	scanf("%f", &temp_f);
	temp_c=(((temp_f - 32)*100)/180);
	printf("temperature in fahrenheit: %f\n", temp_f);
	printf("temperature in celcius: %f\n", temp_c);
}
