//To detemine the type of Triangle using function

#include <stdio.h>
void Triangle();
void main()
{
	Triangle();
	
	
}

 void Triangle()
{
	
	
	int s1,s2,s3;
	
	printf("Enter the three sides of the triangle:\n");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	if(s1==s2&&s2==s3&&s3==s1)
	
	printf("The triangle is Equilateral.\n");
	
	else if (s1==s2||s2==s3&&s1!=s3)
	
	printf("The triangle is Isosceles.\n");
	
	else {
		printf("The triangle is Scalene");
	}
}
	

