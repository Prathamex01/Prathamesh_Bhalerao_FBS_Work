//Copy function in String

#include<stdio.h>
#include<string.h>

void main()
{
	char src[20];
	char dest[30];
	
	printf("Enter a String:");
	fgets(src,sizeof(src),stdin);
	

	strcpy(dest,src);
	
	printf("The copied string is:");
	printf("%s",dest);

}