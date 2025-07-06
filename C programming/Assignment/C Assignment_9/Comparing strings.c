//Comparing string using functions

#include<stdio.h>
#include<string.h>

void main()
{
	char str1[10];
	printf("Enter the first string:");
	fgets(str1,sizeof (str1),stdin);
	
	char str2[10];
	printf("Enter the second string:");
	fgets(str2,sizeof (str2),stdin);
	
	strcmp(str1,str2);
	if(strcmp(str1,str2)==0)
	printf("The strings are same");
	
	else
	printf("The strings are not same");
	
}