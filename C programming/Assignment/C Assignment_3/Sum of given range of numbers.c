//Sum of numbers in given range

#include <stdio.h>

void main(){
	
	int start=1;
	int end=5;
	int sum=0;
	
	while(start<=end){
		
		sum=start+sum;
		
		
		
		start++;
	}
	
	printf("Sum=%d",sum);
		
	
}