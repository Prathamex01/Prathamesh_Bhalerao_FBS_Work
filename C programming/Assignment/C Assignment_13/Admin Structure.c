//Admin structure

#include<stdio.h>
#include<string.h>

struct admin {
	int id;
	char name[20];
	double salary;
	double allowance;


};

void main() {
	struct admin a1,a2;

	printf("Enter the id:");
	scanf("%d",&a1.id);

	printf("Enter the name:");
	scanf("%s",&a1.name);

	printf("Enter the salary:");
	scanf("%lf",&a1.salary);

	printf("Enter the allowance:");
	scanf("%lf",&a1.allowance);

	printf("\n");

	printf("Enter the id:");
	scanf("%d",&a2.id);

	printf("Enter the name:");
	scanf("%s",&a2.name);

	printf("Enter the salary:");
	scanf("%lf",&a2.salary);

	printf("Enter the allowance:");
	scanf("%lf",&a2.allowance);

	printf("\n");

	printf("The id is: %d\n",a1.id);
	printf("The name is: %s\n",a1.name);
	printf("The salary is: %lf\n",a1.salary);
	printf("The allowance is: %lf\n",a1.allowance);

	printf("\n");

	printf("The id is: %d\n",a2.id);
	printf("The name is: %s\n",a2.name);
	printf("The salary is: %lf\n",a2.salary);
	printf("The allowance is: %lf\n",a2.allowance);





}