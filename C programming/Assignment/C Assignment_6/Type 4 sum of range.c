//Sum of given range 

#include<stdio.h>
int sumofRange(int ,int);
	
void main(){
	
	int start;
	int end;
	
	printf(" Enter the start and end of the range:");
	scanf("%d %d",&start,&end);
	
int sum =sumofRange(start,end);
	printf("The sum of range is %d",sum);
}

int sumofRange(int start,int end)
{
		int sum=0;
	while (start<=end){
		sum=start+sum;
		start++;
			}
	
		return sum;
	
}