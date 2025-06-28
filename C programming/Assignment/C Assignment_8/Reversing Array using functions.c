//Reverse of array using function

#include<stdio.h>
 void Reverse(int *,int);

void main()
{
	int arr[7];
	
	for(int i=0;i<7;i++)
	{
		printf("Enter the elements %d:",i+1);
		scanf("%d",&arr[i]);
		
	}
	
	Reverse(arr,7);
		
	}
	
	
 void Reverse(int *arr,int size)
{
	for(int i=0;i<size/2;i++)
	{
	int temp=arr[i];
	arr[i]=arr[size-1-i];
	arr[size-1-i]=temp;
}

printf("The Reversed  Array is:\n");

for(int i=0;i<size;i++)
{
	printf("%d\n",arr[i]);
	
}
}
	
	
