//To check vowel or consonant using functions

#include<stdio.h>
void Vowelconsonant();
void main()
{
	Vowelconsonant();
	
}
void Vowelconsonant()
	{
	
	char ch;
	printf("Enter the Character:");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		
printf(" %c the character is Vowel.\n", ch);

	}

else {
	
	printf(" %c the character is Consonant.\n",ch);
	
     }
}
	