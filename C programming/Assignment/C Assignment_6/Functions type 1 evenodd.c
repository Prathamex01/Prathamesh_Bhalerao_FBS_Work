//Evenodd using functions

#include <stdio.h>
void evenodd();
void main()
{
	 
	 evenodd();
	
}
void evenodd()
{
	
int no;
	 printf("Enter the number:");
	 scanf("%d",&no);
	 
	
	if (no%2==0)
	printf("The number is even");
	
	else
	printf("The number is odd");
	
}