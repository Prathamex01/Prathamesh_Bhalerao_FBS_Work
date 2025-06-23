//To get the sum of alternate numbers in the given series

#include<stdio.h>

void main()
{
	int start=1;
	int end=5;
	int sum=0;
	
	for(int i=1;i<=end;i=i+2){
		
	sum=sum+i;
}
		printf("%d",sum);
}