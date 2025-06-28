//Prime numbers in Array

#include<stdio.h>

void main()
{
	int arr[10];

	for(int i=0;i<10;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr[i]);
		
}

printf("The prime numbers in the array are:\n");

for(int i=0;i<10;i++)
{
int num=arr[i];
	int status=1;

	for(int j=2;j<=num/2;j++)
{ 
	if (num%j==0)
	{
	status=0;
	break;
}
 }	if(status==1)

	printf("%d\n",num);
}

}
	

	
