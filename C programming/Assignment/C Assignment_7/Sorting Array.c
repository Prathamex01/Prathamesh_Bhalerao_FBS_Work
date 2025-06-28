//To sort a Array

#include<stdio.h>

void main()
{
	int arr[10];
	
	for(int i=0;i<10;i++)
	{
		printf("Enter the Element %d:",i+1);
		scanf("%d",&arr[i]);
		
	}
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10-1;j++)
		{
			if(arr[j]>arr[j+1])
		{
				
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
	}
		}
		
	}


	printf("The sorted array is :");
	
	for(int i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
		
	}
	
}