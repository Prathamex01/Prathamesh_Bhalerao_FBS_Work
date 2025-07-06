//Finding power of any number

#include<stdio.h>

void main()
{
	int base;
	int exp;
	int result=1;
	
	printf("Enter the base:");
	scanf("%d",&base);
	
	printf("Enter the exponent:");
	scanf("%d",&exp);
	
	
	for(int i=1;i<=exp;i++)
	{
		 result=result*base;
		
	
		
	}
		printf("%d",result);
		
	
	
	
}