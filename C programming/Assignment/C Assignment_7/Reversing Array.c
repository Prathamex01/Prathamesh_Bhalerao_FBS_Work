//Reverse the Array

#include<stdio.h>

void main()
{
	int arr[7];
	
	for(int i=0;i<7;i++)
	{
		printf("Enter the elements %d:",i+1);
		scanf("%d",&arr[i]);
		
	}
	///////
//		for(int i=7-1;i>=0;i--)
//	{
	//	printf("%d ",arr[i]);
//	}
	
		for(int i=0;i<7/2;i++)
	{
	int temp=arr[i];
	arr[i]=arr[6-i];
	arr[6-i]=temp;
}

printf("The Reversed  Array is:\n");

for(int i=0;i<7;i++)
{
	printf("%d\n",arr[i]);
	
}
}