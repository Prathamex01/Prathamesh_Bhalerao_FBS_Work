//Reverse a string 

#include<stdio.h>
#include<string.h>

void main()
{
  char str[7];
  printf("Enter a string:");
  scanf("%s",str);
  
  strrev(str);
  printf("The reverse is %s",str);
	
}