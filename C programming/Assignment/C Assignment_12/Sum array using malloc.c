//Sum of all elements in array using malloc

#include<stdio.h>
#include<stdlib.h>
 void Sum(int* ,int );
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
	
	Sum(arr,size);
	
}
 void Sum(int* arr,int size)
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		 sum=sum+arr[i];	
	}
	
	printf("The sum of the elements are %d",sum);
	
	
}