//Sorting an array using functions

#include<stdio.h>
#include<stdlib.h>
void Sort(int*,int );
void main()
{
		int *arr;
		int size;
		
		 printf("Enter the size of array: ");
    scanf("%d", &size);
	
		 arr = (int*)malloc(size * sizeof(int));
	 
	
	
	for(int i=0;i<size;i++)
	{
		printf("Enter the Element %d:",i+1);
		scanf("%d",&arr[i]);
	
	
}

Sort(arr,size);

}

void Sort(int*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
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
	
	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
		
	}
	
}


