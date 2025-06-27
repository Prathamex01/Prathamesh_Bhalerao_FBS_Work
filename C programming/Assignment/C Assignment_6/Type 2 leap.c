//To check year is leap or not

#include<stdio.h>

int leap();
void main()
{
int res=leap();
	 if (res==1)
	 printf("The Year is leap");
	 
	 else
	 printf("The Year is not leap");
	  
	
}

 int leap()
{

	int year;

printf("Enter the year :");
scanf("%d",&year);
	
	if(year%4==0&&year%100!=0||year%400==0)
	{
		return 1;
	}
	
	else {
		
	return 0;
	}
	
}
