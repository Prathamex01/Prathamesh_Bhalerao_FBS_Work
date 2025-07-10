//Alternate numbers in array using Functions

#include<stdio.h>
#include<stdlib.h>

void Alternate(int*,int);
void main()
{
		int *arr;
		int size;
		
		
		 printf("Enter the size of array: ");
    scanf("%d", &size);
	
		 arr = (int*)malloc(size * sizeof(int));
	 
	
	
	for(int i=0;i<size;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr[i]);	
	}
	
	Alternate(arr,size);
}
	
void Alternate(int*arr,int size)
	{
		
			for(int i=0;i<size;i=i+2)
	printf("%d\n",arr[i]);
}
	
	
