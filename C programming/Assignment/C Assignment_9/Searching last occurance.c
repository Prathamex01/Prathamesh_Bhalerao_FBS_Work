#include<stdio.h>
#include<string.h>

void main()
{

char str[100];
	char* ptr;
	char ch;
	
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	
	printf("Enter the letter you want to search:");
		scanf(" %c",&ch);
	
ptr=strrchr(str,ch);
	
	if(ptr!=NULL)
	printf("%c found at index %d", ch,ptr-str);
	
	else 
	printf("%c not found ",ch);
	
}