//product id,name , quantity ,price

#include<stdio.h>


typedef struct product
{
	int id;
char name[20] ;
	int quantity;
	int price;
	
	
}product;

struct product storeproduct();
void displayproduct (product);
void main()
{
	product p1,p2;
	
p1=storeproduct();
	displayproduct(p1);
		printf("\n");
	
p2=storeproduct();
	displayproduct(p2);
}

struct product storeproduct()
{
 struct product p1;
	printf("Enter the id:");
	scanf("%d",&p1.id);
	
	printf("Enter the name:");
	scanf("%s",p1.name);
	
		printf("Enter the quatity:");
	scanf("%d",&p1.quantity);
	
	printf("Enter the price:");
	scanf("%d",&p1.price);
	
	
	return p1;
}

void displayproduct(product p1)
{
		printf("The id is: %d\n",p1.id);
		printf("The name is : %s\n",p1.name);
		printf("The quantity is : %d\n",p1.quantity);
			printf("The price is : %d\n",p1.price);
		
	
	
	
	
	
	
}