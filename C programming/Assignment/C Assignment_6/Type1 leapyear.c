//To check leap year or not using functions

#include<stdio.h>
void leap();
void main()
{
	leap();
	
}

 void leap()
{

	int year;

printf("Enter the year :");
scanf("%d",&year);
	
	if(year%4==0&&year%100!=0||year%400==0)
	{
		
	printf(" %d The year is a leap year",year);
	}
	
	else {
		
		printf(" %d The year is not a leap year",year);
	}
	
}
