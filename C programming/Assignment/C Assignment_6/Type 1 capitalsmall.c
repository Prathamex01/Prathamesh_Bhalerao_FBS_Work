//Lowercase uppercase check using functions

#include<stdio.h>
void Capitalsmall();
void main()
{
	
 Capitalsmall();
}

 void Capitalsmall(){

	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	
	if(ch>='A'&& ch<='Z')
{
	
printf("%c the character is capital\n",ch);
	
}
else {
	
printf("%c the character is small\n",ch);
}
}