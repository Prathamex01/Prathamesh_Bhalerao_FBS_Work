//Date Structure

#include<stdio.h>

struct Date
{
	int day;
char month [20];
	int year;
	
};

void main()
{
	struct Date d1,d2;
	
	printf("Enter the day:");
	scanf("%d",&d1.day);
	
	printf("Enter the month:");
	scanf("%s",&d1.month);
	
		printf("Enter the year:");
	scanf("%d",&d1.year);
	
	printf("\n");
	
	printf("Enter the day:");
	scanf("%d",&d2.day);
	
	printf("Enter the month:");
	scanf("%s",&d2.month);
	
		printf("Enter the year:");
	scanf("%d",&d2.year);
	
	
	printf("\n");
	
	
	printf("The day is: %d\n",d1.day);
		printf("The month is: %s\n",d1.month);
		printf("The year is: %d\n",d1.year);
		
		printf("\n");
		
			printf("The day is: %d\n",d2.day);
		printf("The month is: %s\n",d2.month);
		printf("The year is: %d\n",d2.year);
		
	
	
	
	
	
	
}