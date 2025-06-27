//To check lower or uppercase

#include<stdio.h>

int Capitalsmall();
void main()
{
	
int res= Capitalsmall();

	if (res==1)
	 printf("The letter is capital");
	 
	 else
	 printf("The letter is small");
	  
}

 int Capitalsmall(){

	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	
	if(ch>='A'&& ch<='Z')
{
	
return 1;
}
else {
	
	return 0;

}
}