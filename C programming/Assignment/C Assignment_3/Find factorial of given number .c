//Find the factorial of given number

#include<stdio.h>

void main(){
	
	int no=5;
	int fact=1;
	
	while(no>0){
		
		fact=fact*no;
		no--;
	}
	printf("Factorial:%d\n",fact);
}