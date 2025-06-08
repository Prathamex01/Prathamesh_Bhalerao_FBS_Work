//To check the number is divisible by 3,5 or both

#include<stdio.h>

void main(){
	
	int no;
	
	printf("Enter a number :");
	scanf("%d",&no);
	
	if(no%3==0 && no%5==0){
		
		printf("The number is Divisible by both");
	}
	 else if (no%3==0){
	 	
	 	printf("The number is divisible by 3 but not 5");
	 }
	
	else if (no%5==0){
		
		printf("The number is divisible by 5 but not  3");
			}
			else {
				printf("Divisible by none");
			}
}