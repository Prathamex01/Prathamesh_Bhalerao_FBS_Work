//To print even numbers from  a given series

#include<stdio.h>

void main()
{
	int start =1;
	int end=15;  
	
	for (int start=1;start<=end;start++)
	{
		if (start%2==0)
		printf("%d\n",start);
		
		else 
		continue;	
	}
	
	
	
}