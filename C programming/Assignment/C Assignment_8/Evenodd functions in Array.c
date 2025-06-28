//Finding evenodd in Array using function

#include<stdio.h>
void Evenodd(int* ,int );
void main()
{
	int arr[10];
	
	for(int i=0;i<10;i++)
	{
		printf("Enter the elements %d:",i+1);
		scanf("%d",&arr[i]);	
	}
	
	 Evenodd(arr,10);
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