//SalesManager Structure

#include<stdio.h>
#include<string.h>

struct SalesManager {
	int id;
	char name[20];
	double salary;
	double incentive;
	double target;

};

void main() {
	struct SalesManager s1,s2;

	printf("Enter the id:");
	scanf("%d",&s1.id);

	printf("Enter the name:");
	scanf("%s",&s1.name);

	printf("Enter the salary:");
	scanf("%lf",&s1.salary);

	printf("Enter the incentive:");
	scanf("%lf",&s1.incentive);

	printf("Enter the target:");
	scanf("%lf",&s1.target);

	printf("\n");

	printf("Enter the id:");
	scanf("%d",&s2.id);

	printf("Enter the name:");
	scanf("%s",&s2.name);

	printf("Enter the salary:");
	scanf("%lf",&s2.salary);

	printf("Enter the incentive:");
	scanf("%lf",&s2.incentive);

	printf("Enter the target:");
	scanf("%lf",&s2.target);

	printf("\n");

	printf("The id is: %d\n",s1.id);
	printf("The name is: %s\n",s1.name);
	printf("The salary is: %lf\n",s1.salary);
	printf("The incentive is: %lf\n",s1.incentive);
	printf("The target: %lf\n",s1.target);

	printf("\n");

	printf("The id is: %d\n",s2.id);
	printf("The name is: %s\n",s2.name);
	printf("The salary is: %lf\n",s2.salary);
	printf("The incentive is: %lf\n",s2.incentive);
	printf("The target: %lf\n",s2.target);



}