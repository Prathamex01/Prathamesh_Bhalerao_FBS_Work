//Sorting an array using functions

#include<stdio.h>
void Sort(int*,int );
void main()
{
		int arr[10];
	
	for(int i=0;i<10;i++)
	{
		printf("Enter the Element %d:",i+1);
		scanf("%d",&arr[i]);
	
	
}

Sort(arr,10);

}

void Sort(int*arr,int size)
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10-1;j++)
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
	
	for(int i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
		
	}
	
}


