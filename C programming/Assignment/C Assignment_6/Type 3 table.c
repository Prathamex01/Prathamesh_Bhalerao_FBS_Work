//Printing table

#include<stdio.h>
 
 void Table(int );

void main()
{
	int no;
	
	printf("Enter the number:");
	scanf("%d",&no);
	
	Table(no);
	
	
}
 void Table(int no)
{
		
int i=1;
	while (i<=10){
		
		printf("%d \n",no*i);
		
		i++;
	}
	
}