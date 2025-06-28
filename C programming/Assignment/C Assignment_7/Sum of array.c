//Finding the sum of all numbers in the Array

#include<stdio.h>

void main()
{
	int arr[5];
	int sum=0;
	
	for(int i=0;i<5;i++)
	{
	
	printf("Enter the element %d:",i+1);
	scanf("%d",&arr[i]);
}

	for(int i=0;i<5;i++)
	sum=sum+arr[i];
	
	printf("The sum of the numbers are :%d",sum);
	
}