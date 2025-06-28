//Search the given number in Array

#include<stdio.h>

void main()
{
	int arr[5];
	int search;
	int found=0;
	
	for(int i=0;i<5;i++)
	{
	printf("Enter the Elements %d:",i+1);
	
	scanf("%d",&arr[i]);	
}

printf("Enter the number you want to search:");
scanf("%d",&search);

for(int i=0;i<5;i++)
{
	if(search==arr[i]){
	
	printf("The element %d is found at index %d", search,i);
	found=1;
	break;
}
	
}
if (! found)
	printf("%d element not found in the Array",search);
	found=0;
}