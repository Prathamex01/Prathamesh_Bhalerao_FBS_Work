// Accepting the Marks and calculating the Grade.

#include<stdio.h>

void main(){
	
	int marks;
	
	printf("Enter Marks :");
	scanf("%d",&marks);
	
	if (marks>=75)
	printf("Distinction");
	
	else if (marks<=75 && marks>=65){
		 printf("First class");	
	}
else if (marks<=65 && marks>=55){
	printf("Second class");
}
	else if (marks<=55 && marks>=40){
		printf("Pass");
	}
else {
	printf("Fail");
}
	
}