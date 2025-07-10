//Reverse of array using function

#include<stdio.h>
#include<stdlib.h>
 void Reverse(int *,int);

void main()
{
	int *arr;
	int size;
	
	
	 printf("Enter the size of array: ");
    scanf("%d", &size);
	
		 arr = (int*)malloc(size * sizeof(int));
	 
	
	for(int i=0;i<size;i++)
	{
		printf("Enter the elements %d:",i+1);
		scanf("%d",&arr[i]);
		
	}
	
	Reverse(arr,size);
		
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
	
	
