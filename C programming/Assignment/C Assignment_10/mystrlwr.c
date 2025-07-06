//User defined function for lowercase

#include<stdio.h>
#include<string.h>
void mystrlwr(char* );
void main()
{
	char str[20];
	printf("Enter a String:");
	fgets(str,sizeof(str),stdin);
	
	mystrlwr(str);
	
	printf("\nThe lowercase string is: %s",str);
	
}
void mystrlwr(char* ptr)
	{
		int i=0;
		 
		 while(ptr[i]!='\0')
		 {
		 	
		 	if(ptr[i]>='A'&&ptr[i]<='Z')
		 	
		 	ptr[i]=ptr[i]+32;
		 	
		 		i++;
		 }
	
		
		
	}