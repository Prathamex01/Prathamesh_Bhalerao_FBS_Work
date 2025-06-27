//Sum of given range 

#include<stdio.h>
void sumofRange(int ,int);
	
void main(){
	
	int start;
	int end;
	printf(" Enter the start and end of the range:");
	scanf("%d %d",&start,&end);
	
sumofRange(start,end);
	
}

void sumofRange(int start,int end)
{
		int sum=0;
	while (start<=end){
		sum=start+sum;
		start++;
	
	}
	printf("Sum=%d",sum);

}