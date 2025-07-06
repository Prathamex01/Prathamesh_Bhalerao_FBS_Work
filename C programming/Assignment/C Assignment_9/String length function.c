//Length of a  String 

#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	printf("Enter a string:");
	scanf("%s",str);
	
	printf("%s",str);
	
	int len=strlen(str);
	printf("\nThe length is %d",len);
	
}