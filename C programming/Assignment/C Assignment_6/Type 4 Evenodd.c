//Evenodd using functions 

#include<stdio.h>

int evenodd(int);
void main()
{
	int no;
	 printf("Enter the number:");
	 scanf("%d",&no);
	 
	 int res= evenodd(no);
	 
	 if (res==1)
	 printf("The no is Even");
	 
	 else
	 printf("The no is odd");
	  
	
}
int evenodd(int no)
{
		if (no%2==0)
	return 1;
	
	else
return 0;
	
}