//Alternate numbers in Array

#include<stdio.h>

void main()
{
	int arr[5];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr[i]);	
	}
	
	for(int i=0;i<5;i=i+2)
	printf("%d\n",arr[i]);
}