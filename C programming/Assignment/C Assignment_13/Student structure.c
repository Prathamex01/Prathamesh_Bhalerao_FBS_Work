//Student Structure

#include<stdio.h>
#include<string.h>

struct Student {
	int rollno;
	char name[20];
	int marks;

};

void main() {
	struct Student s1,s2;

	printf("Enter the roll no of 1st:");
	scanf("%d",&s1.rollno);


	printf("Enter the name:");
	scanf("%s",s1.name);

	printf("Enter the marks:");
	scanf("%d",&s1.marks);

	printf("\n");

	printf("Enter the roll no of 2nd:");
	scanf("%d",&s2.rollno);


	printf("Enter the name:");
	scanf("%s",s2.name);

	printf("Enter the marks:");
	scanf("%d",&s2.marks);

	printf("\n");

	printf("The roll no is:%d\n",s1.rollno);
	printf("The name is:%s\n",s1.name);
	printf("The Marks are:%d\n",s1.marks);

	printf("\n");

	printf("The roll no is:%d\n",s2.rollno);
	printf("The name is:%s\n",s2.name);
	printf("The Marks are:%d\n",s2.marks);



}

