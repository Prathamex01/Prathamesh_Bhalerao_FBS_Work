//Array with functions min and max

#include<stdio.h>
void MinMax(int*,int );

void main()
{
	int arr[10];
	int min;
	int max;
	
	for(int i=0;i<10;i++)
	{
	
	printf("Enter the elements %d:",i+1);
	scanf("%d",&arr[i]);
}

MinMax(arr,10);

}

void MinMax(int* arr,int size)
{
	int min=arr[0];
	int max=arr[0];
	int i;
	for(i=0;i<10;i++)
	{
		if(arr[i]<min)
		min=arr[i];
		
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		
	}
	
	printf("The Minimum elements is %d\n",min);
	printf("The Maximum element is %d\n",max);
}
