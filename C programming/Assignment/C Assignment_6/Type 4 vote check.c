//To check eligible to vote or not

#include <stdio.h>

int voting(int );
void main()
{
	
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	int res=voting(age);
	
	
	if (res==1)
	 printf("The Person can vote");
	 
	 else
	 printf("The Person cannot vote");
	  
	
}
 int voting(int age)
{
if(age>=18)
		return 1;
		
	else 
		
		return 0;
		
	
}
 	
