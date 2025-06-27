//To check the age group using functions

#include <stdio.h>
void Agegroup();
void main()
{
	Agegroup();
	
}
 void Agegroup()
{
	{
	
	int age;
	
	printf("Enter age:");
	scanf("%d",&age);
	
	if (age<12) {
		
		printf("Child");
	}
	
     else if (age>=12 && age<=19){
     	
     	printf("Teenage");
	 }
	 
	 else if (age>=20 && age<=59){
	 	
	 	printf("Adult"); }
	 	
	 	else {
	 		
	 		printf("Senior");
		 }
	 }
	 
	
}