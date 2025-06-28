//Searching the given number in Array using functions

#include<stdio.h>
void Search(int*,int ,int );
void main()
{
	int arr[10];
	int search ;
	int found=0;
	
	
	for(int i=0;i<10;i++)
	{
		printf("Enter the elements %d:",i+1);
		scanf("%d",&arr[i]);	
	}
	
	printf("Enter the number you want to search:");
	scanf("%d",&search);
	
	Search(arr,10,search);
}

void Search(int* arr,int size,int search)
{
	int i;
	int found=0;
	for(i=0;i<10;i++)
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