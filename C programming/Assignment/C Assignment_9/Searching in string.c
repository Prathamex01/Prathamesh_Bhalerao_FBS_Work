//Searching using functions in string 

#include<stdio.h>
#include<string.h>

void main()
{
	char str[100];
	char* ptr;
	char ch;
	
	printf("Enter a string:");
	scanf("%s",str);
	
	printf("Enter the letter you want to search:");
		scanf(" %c",&ch);
	
ptr=strchr(str,ch);
	
	if(ptr!=NULL)
	printf("%c found at index %d", ch,ptr-str);
	
	else 
	printf("%c not found ",ch);
	
}