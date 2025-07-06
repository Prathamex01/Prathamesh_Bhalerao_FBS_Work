// Concatinating  a string

#include<stdio.h>
#include<string.h>

void main()
{
	char str1[20];
	char str2[30];
	
	printf("Enter the 1st String:");
	scanf("%s",str1);
	
		printf("Enter the 2nd String:");
	scanf("%s",str2);
	
	printf("\nstr1 %s",str1);
	printf("\nstr2 %s",str2);
	
	strcat(str1,str2);
	
	printf("\nstr1 %s",str1);
}
