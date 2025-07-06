//Program to calculate selling price of book based on cost and discount

#include<stdio.h>
int bookdiscount(int);
void main()
{
	int cost;
int discount;
	int final_price;
	
	
	printf("Enter the cost of the book:");
	scanf("%d",&cost);
	
	discount=bookdiscount(cost);
	
	
	 final_price=cost-discount;
		
		printf("\nThe original cost is: %d",cost);
		printf("\nThe discount is: %d",discount);
		printf("\nThe final price is: %d",final_price);
		
	}
	


int bookdiscount(int cost)
{
	
	int discount=0;
	
	if(cost<=500)
	discount= cost*0.10;

else if(cost<=1000)
discount=cost*0.15;

else if(cost<=1500)
discount=cost*0.20;

else
discount=cost*0.25;
	
	return discount;
	
}