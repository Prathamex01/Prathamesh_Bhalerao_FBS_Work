//Lower case and upper case in string 

#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	
	printf("Enter a string:");
	fgets(str,sizeof str,stdin);
	
	
//	strupr(str);
//	printf("The uppercase string is:");
//	printf("%s",str);
	
	strlwr(str);
		printf("The lowercase string is:");
	printf("%s",str);
	
}