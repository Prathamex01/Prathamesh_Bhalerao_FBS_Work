//Merging two Arrays

#include<stdio.h>

void main()
{
	int arr[5];
	int brr[5];
	
	int merged[10];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter the elements for the first array %d:",i+1);
		scanf("%d",&arr[i]);
	}
	 
	 printf("\n");
	 
	for(int i=0;i<5;i++)
	{
		printf("Enter the elements for the second array %d:",i+1);
		scanf("%d",&brr[i]);
	}
	
	printf("\n");
	
	for(int i=0;i<5;i++)
	{
		merged[i]=arr[i];
	}
	
	for(int i=0;i<5;i++)
	{
		merged[i+5]=brr[i];
	}
	
	printf("The merged Array is: \n");
	for(int i=0;i<10;i++)
	{
		printf("%d\n",merged[i]);
		
	}
}