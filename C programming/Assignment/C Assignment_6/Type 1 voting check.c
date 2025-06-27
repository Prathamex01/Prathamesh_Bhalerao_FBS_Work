//Eligible to vote or not check using functions

#include<stdio.h>
 void voting();
void main()
{
	voting();
	
}
 void voting()
{

	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	
	if(age>=18)
		printf("%d the person can vote\n",age);
		
	else 
		
		printf("%d the person cannot vote\n",age);
		
	
}
 	
