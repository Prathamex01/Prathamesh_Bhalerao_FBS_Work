//To check Vowel or consonant using functions

#include<stdio.h>

int Vowelconsonant(int);
void main()
{
	
		char ch;
	printf("Enter the Character:");
	scanf("%c",&ch);
	
	int res=Vowelconsonant(ch);
	 if (res==1)
	 printf("The letter is Vowel");
	 
	 else
	 printf("The letter is Consonant");
	  
	
}

int Vowelconsonant( int ch)
	{
	
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		
return 1;

	}

else {
	
return 0;
     }
}
	