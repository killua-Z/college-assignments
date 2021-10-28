/*28 C program to calculate salary of an employee, given his basic pay(to be entered by
the user), HRA=10% of the basic pay, TA=5% of basic pay, Define HRA and TA as
constants and use them to calculate the salary of the employee. */

#include<stdio.h>

int main(){
	const float HRA= 0.10;
	const float TA= 0.05;
	int BS;
	printf("enter base salary of the employee: ");
	scanf("%d",&BS);
	float TS=BS+BS*TA+BS*HRA;
	printf("the salary of the employee is: Rs %.2f\n/-",TS);
}
