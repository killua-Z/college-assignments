/*28 C program to prepare a grocery bill. Enter, the name of the item purchased, quantity
and its price per unit. Then display the bill in the following format.

********************BILL****************************
Item   Quantity     Price           Amount
*****************************************************
_____________________________________________________
Total Amount to be paid
_____________________________________________________

*/

#include<stdio.h>

int main(){
	int quantity,price;
	char name[10];
	printf("enter name of item purchased (max lenght= 10 characters ): ");scanf("%s", name);
	printf("enter quantity of item purchsed: ");scanf("%d", &quantity);
	printf("enter price of the item purchased: ");scanf("%d", &price);
	printf("********************BILL****************************\n");
	printf("Item          Quantity    Price         Amount      \n");
	printf("****************************************************\n");
	printf("%-10s         %d          %d            %d          \n", name, quantity, price, price*quantity);
	printf("____________________________________________________\n");
	printf("Total Amount to be paid              Rs %d/-        \n", price*quantity);
	printf("____________________________________________________\n");
}
