//Sum of all elements in array using functions

#include<stdio.h>
 void Sum(int* ,int );
void main()
{
	int arr[5];
	
	
	for(int i=0;i<5;i++)
	{
		printf("Enter the elements %d:",i+1);
		scanf("%d",&arr[i]);
		
		}	
	
	Sum(arr,5);
	
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