//Employee Structure

#include<stdio.h>
#include<string.h>

struct employee {
	int emp_id;
	char name[20];
	double salary;

};

void main() {
	struct employee e1,e2;


	printf("Enter the emp id 1st:");
	scanf("%d",&e1.emp_id);

	printf("Enter the name:");
	scanf("%s",e1.name);

	printf("Enter the salary:");
	scanf("%lf",&e1.salary);

	printf("\n");

	printf("Enter the emp id 2nd:");
	scanf("%d",&e2.emp_id);

	printf("Enter the name:");
	scanf("%s",e2.name);

	printf("Enter the salary:");
	scanf("%lf",&e2.salary);

	printf("\n");

	printf("The id is :%d\n",e1.emp_id);
	printf("The name is :%s\n",e1.name);
	printf("The salary is :%lf\n",e1.salary);

	printf("\n");

	printf("The id is :%d\n",e2.emp_id);
	printf("The name is :%s\n",e2.name);
	printf("The salary is :%lf\n",e2.salary);


}

