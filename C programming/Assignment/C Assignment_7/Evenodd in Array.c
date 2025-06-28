//Evenodd in Array

#include<stdio.h>

void main()
{
	int arr[10];
	
	for(int i=0;i<10;i++)
	{
	printf("Enter the element %d:",i+1);
	scanf("%d",&arr[i])	;
		
	}
	
	for(int i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		printf("The number is even %d\n",arr[i]);
		
		else
		printf("The number is odd %d\n",arr[i]);
		
	}
}