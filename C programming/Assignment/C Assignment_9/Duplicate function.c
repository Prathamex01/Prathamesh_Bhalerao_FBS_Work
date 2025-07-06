//Duplicating the string using function

#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	printf("Enter a string:");
	fgets(str,sizeof (str),stdin);
	
	
	strdup(str);
	printf("The duplicate String is:");
	printf("%s",str);
}