//Time structure hour,min,sec

#include<stdio.h>


typedef struct time
{
	int hour;
int mins ;
	int secs;
	
}time;

struct time storetime();
void displaytime(time );
void main()
{
	time t1,t2;
	
t1=storetime();
	displaytime(t1);
		printf("\n");
	
t2=storetime();
	displaytime(t2);
}

struct time storetime()
{
 struct time t1;
	printf("Enter the hour:");
	scanf("%d",&t1.hour);
	
	printf("Enter the minutes:");
	scanf("%d",&t1.mins);
	
		printf("Enter the seconds:");
	scanf("%d",&t1.secs);
	
	return t1;
}

void displaytime(time t1)
{
		printf("The hours are: %d\n",t1.hour);
		printf("The minutes are: %d\n",t1.mins);
		printf("The seconds are: %d\n",t1.secs);
		
	
	
	
	
	
	
}
 
