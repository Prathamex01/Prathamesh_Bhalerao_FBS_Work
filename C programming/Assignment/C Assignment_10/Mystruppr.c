//User defined functions for uppercase

#include<stdio.h>
#include<string.h>

void mystruppr(char* );
void main()
{
	char str[20];
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	
	mystruppr(str);
		printf("\n The uppercase string is: %s",str);
}
void mystruppr(char* ptr)
	{
		int i=0;
		
		while(ptr[i]!='\0'){
		
		
		if(ptr[i]>='a'&&ptr[i]<='z')
		{
		
		ptr[i]=ptr[i]-32;
		
	}
	i++;	
}
}
	
	