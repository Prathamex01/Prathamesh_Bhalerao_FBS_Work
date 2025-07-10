//Array with malloc min and max

#include<stdio.h>
#include<stdlib.h>


void MinMax(int*,int );

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

MinMax(arr,size);

free(arr);
}

void MinMax(int* arr,int size)
{
	int min=arr[0];
	int max=arr[0];
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]<min)
		min=arr[i];
		
	}
	
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		
	}
	
	printf("The Minimum element is %d\n",min);
	printf("The Maximum element is %d\n",max);
}
