//To check year is leap or not

#include<stdio.h>

int leap(int);
void main()
{
		int year;
printf("Enter the year :");
scanf("%d",&year);
	
int res=leap(year);
	 if (res==1)
	 printf("The Year is leap");
	 
	 else
	 printf("The Year is not leap");
	  
	
}

 int leap(int year)
{
	if(year%4==0&&year%100!=0||year%400==0)
	{
		return 1;
	}
	
	else {
		
	return 0;
	}
	
}
