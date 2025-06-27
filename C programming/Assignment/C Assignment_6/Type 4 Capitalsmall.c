//To check lower or uppercase

#include<stdio.h>

int Capitalsmall(char ch);
void main()
{

	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);

int res= Capitalsmall(ch);

	if (res==1)
	 printf("The letter is capital");
	 
	 else
	 printf("The letter is small");
	  
}

 int Capitalsmall(char ch){


	if(ch>='A'&& ch<='Z')
{
	
return 1;
}
else {
	
	return 0;

}
}