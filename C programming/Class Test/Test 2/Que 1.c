// Program to calculte electricity bill

#include <stdio.h>

void main(){
	
	int units;
	int price;
	int bill;
	
	printf("Enter the units on the bill:");
	scanf ("%d",&units);
	
	if (units>=1 && units<=50)
	 price=30;

	else if (units>=50 && units<=150)
 price =40;


	else if (units>151)
	 price=50;
	
	else 
	{
		
		printf("Enter valid units");
	}
	
	bill=units*price;
	printf("Your bill is %d with per unit cost of %d\n",bill,price);
}
	