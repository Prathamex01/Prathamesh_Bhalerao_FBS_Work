//Prime numbers check using malloc

#include<stdio.h>
#include<stdlib.h>

 void isPrime(int* ,int );
void main()
{
	int *arr;
	int size;
	
	 printf("Enter the size of array: ");
    scanf("%d", &size);
	
	
	 arr = (int*)malloc(size * sizeof(int));
	 
	for (int i=0;i<size;i++)
	{
	
	printf("Enter the element%d: ",i+1);
	scanf("%d",&arr[i]);
	
}

printf("The prime numbers in the array are:\n");

	isPrime(arr,size);

	
	
}

 void isPrime(int* arr,int size)
{
for(int i=0;i<size;i++)
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
	
