//Finding evenodd in Array using function

#include<stdio.h>
#include<stdlib.h>
void Evenodd(int* ,int );
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
	
	 Evenodd(arr,size);
}
void Evenodd(int* arr,int size)

{
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		printf(" Even numbers %d\n",arr[i]);
		
		
		else 
		printf(" odd numbers %d\n",arr[i]);
	}
	
}