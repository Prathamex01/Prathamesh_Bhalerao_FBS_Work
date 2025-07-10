//Hr Structure

#include<stdio.h>
#include<string.h>

struct Hr
{
	int id;
	char name[20];
	double salary;
	double commission;
	
	
};

void main()
{
		struct Hr H1,H2;

	printf("Enter the id:");
	scanf("%d",&H1.id);

	printf("Enter the name:");
	scanf("%s",&H1.name);

	printf("Enter the salary:");
	scanf("%lf",&H1.salary);

	printf("Enter the commission:");
	scanf("%lf",&H1.commission);

	printf("\n");

	printf("Enter the id:");
	scanf("%d",&H2.id);

	printf("Enter the name:");
	scanf("%s",&H2.name);

	printf("Enter the salary:");
	scanf("%lf",&H2.salary);

	printf("Enter the commission:");
	scanf("%lf",&H2.commission);

	printf("\n");

	printf("The id is: %d\n",H1.id);
	printf("The name is: %s\n",H1.name);
	printf("The salary is: %lf\n",H1.salary);
	printf("The commission: is %lf\n",H1.commission);

	printf("\n");

	printf("The id is: %d\n",H2.id);
	printf("The name is: %s\n",H2.name);
	printf("The salary is: %lf\n",H2.salary);
	printf("The commission is: %lf\n",H2.commission);





}
	

