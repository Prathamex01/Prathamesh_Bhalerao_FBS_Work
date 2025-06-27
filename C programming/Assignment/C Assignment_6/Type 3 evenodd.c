//Evenodd

#include<stdio.h>

void evenodd();
void main()
{
	 int no;
	 
	 printf("Enter the number:");
	 scanf("%d",&no);
	 
	 evenodd(no);
	
}
void evenodd(int no)
{

	if (no%2==0)
	printf("The number is even");
	
	else
	printf("The number is odd");
	
}