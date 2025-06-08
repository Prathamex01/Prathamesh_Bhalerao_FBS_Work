//Accept three side of the triangle and determine the type of triangle

#include<stdio.h>

void main(){
	
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