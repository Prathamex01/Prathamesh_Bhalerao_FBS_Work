//Distance feet inch

#include<stdio.h>

typedef struct distance
{
	double feet;
double inch ;
	
}distance;

struct distance storedistance();
void displaydistance(distance );
void main()
{
	distance d1,d2;
	
d1=storedistance();
	displaydistance(d1);
		printf("\n");
	
d2=storedistance();
	displaydistance(d2);
}

struct distance storedistance()
{
 struct distance d1;
	printf("Enter the feets:");
	scanf("%d",&d1.feet);
	
	printf("Enter the inches:");
	scanf("%d",&d1.inch);
	
	
	return d1;
}

void displaydistance(distance d1)
{
		printf("The feets are: %d\n",d1.feet);
		printf("The inches are: %d\n",d1.inch);
	
	
	
	
	
	
	
}
