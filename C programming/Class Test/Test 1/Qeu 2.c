//To check given year is leap year or not 

#include <stdio.h>
void main (){
	
	int year;
	
	printf("Enter a year : ");
	scanf("%d", &year);
	
	if (year%4==0&&year%100!=0||year%400==0)
	
	{
		printf("The year is leap year %d",year);
	}

	else {
		printf("The year is not a leap year");
	}
}