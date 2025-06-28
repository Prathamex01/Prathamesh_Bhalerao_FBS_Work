//Alternate numbers in array using Functions

#include<stdio.h>
void Alternate(int*,int);
void main()
{
		int arr[10];
	
	for(int i=0;i<10;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr[i]);	
	}
	
	Alternate(arr,10);
}
	
void Alternate(int*arr,int size)
	{
		
			for(int i=0;i<size;i=i+2)
	printf("%d\n",arr[i]);
}
	
	
