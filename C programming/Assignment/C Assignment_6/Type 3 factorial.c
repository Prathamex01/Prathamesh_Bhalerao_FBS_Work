//To find factorial

#include<stdio.h>
void Factorial(int );
void main(){
	
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	
	Factorial(no);
	
	
	
}

void Factorial(int no)
{
	int fact=1;
	
		while(no>0){
		
		fact=fact*no;
		no--;
	}
	printf("Factorial:%d\n",fact);
}