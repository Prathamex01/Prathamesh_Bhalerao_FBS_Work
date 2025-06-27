//Calculating total discount using functions

#include<stdio.h>
void Totaldiscount();
void main()
{
	Totaldiscount();
	
}
 void Totaldiscount()
{
	{
	
	int price , discount=0,f_price;
	char stu;
	
	printf("Enter the price:");
	scanf("%d",&price);
	 
	printf("Are you a student? (y/n):"); 
	fflush stdin;
	scanf("%c",&stu);
	
	if ((stu=='y')||(stu=='y')) {
	
		if (price>500){
			
			discount=0.20*price;
		}
		else {
			discount=0.10*price;
	}	}
		else{
		
			if (price>600){

				discount=0.15*price;
			}
		
			else {
				discount=0;
			}
		}
			f_price=price-discount;
			
			printf("Discount:%d\n",discount);
			
			printf("Final price to be paid :%d\n",f_price);
			}
			
		
		
	
	
}