//To check the given number is perfect number of not.

#include<stdio.h>

void main(){
	int no=28;
	
	int i =1;
	int sum=0;
	
	while(i<no){
		if(no%i==0){
			sum=sum+i;
		}
		i++;
	}
	 if (sum==no)
	 printf("Perfect number\n");
	 
	 else 
	 printf("Not perfect number");
}