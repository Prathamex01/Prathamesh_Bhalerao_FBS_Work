//Evenodd using functions 

#include<stdio.h>

int evenodd();
void main()
{
	 int res= evenodd();
	 if (res==1)
	 printf("The no is Even");
	 
	 else
	 printf("The no is odd");
	  
	
}
int evenodd()
{
	
int no;
	 printf("Enter the number:");
	 scanf("%d",&no);
	 
	
	if (no%2==0)
	return 1;
	
	else
return 0;
	
}