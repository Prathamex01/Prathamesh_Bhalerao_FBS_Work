//To print odd numbers from the given series

#include<stdio.h>

void main()
{
	int start=10;
	int end=25;
	
	for(int start=10;start<=end;start++)
	{
		if(start%2==0)
		continue;
		
		else 
		printf("%d\n",start);
		
	}
	
}