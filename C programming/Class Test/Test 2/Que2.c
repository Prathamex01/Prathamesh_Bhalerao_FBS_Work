//Checking the number is Positive negative or neutural

#include <stdio.h>

void main(){
	
	int no;
	
	printf("Enter a number:");
	scanf("%d",&no);
	
	if (no>0)
	printf("The number is positive\n");
	
	else if (no<0)
	printf("The number is negative\n");
	
	else 
	printf("The number is neutral\n");
}