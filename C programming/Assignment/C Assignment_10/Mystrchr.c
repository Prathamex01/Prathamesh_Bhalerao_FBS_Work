//User defined function for search

#include<stdio.h>
#include<string.h>

int	mysearchchr(char*, char);
void main()
{
	
	char str[20];
	char ch;
	
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	
	printf("Enter a character you want to search:");
	scanf("%c",&ch);
	
	
int res=mysearchchr(str,ch);
	
	if(res==1)
	printf("The element is found\n");
	else
	printf("The element is not found\n");
	
}

int	mysearchchr(char*ptr,char x)
	{
		
		int i=0;
		
		
		while(ptr[i]!='\0')
		{
			if(ptr[i]==x)
			
			return 1;
		
			i++;
			
		}
		return 0;
	}
	