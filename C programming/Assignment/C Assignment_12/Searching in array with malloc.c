//Searching the given number in Array using functions

#include<stdio.h>
#include<stdlib.h>
void Search(int*,int ,int );
void main()
{
	int *arr;
	int size;
	int search ;
	int found=0;
	
	 printf("Enter the size of array: ");
    scanf("%d", &size);
	
		 arr = (int*)malloc(size * sizeof(int));
	 
	
	for(int i=0;i<size;i++)
	{
		printf("Enter the elements %d:",i+1);
		scanf("%d",&arr[i]);	
	}
	
	printf("Enter the number you want to search:");
	scanf("%d",&search);
	
	Search(arr,size,search);
}

void Search(int* arr,int size,int search)
{
	int i;
	int found=0;
	for(i=0;i<size;i++)
	{
		if(search==arr[i])
		{
			printf("The element %d is found at index %d",search ,i);
			found=1;
			break;
		}
		
	}
	
	if(! found)
	printf("The element is not found");
	found =0;
}