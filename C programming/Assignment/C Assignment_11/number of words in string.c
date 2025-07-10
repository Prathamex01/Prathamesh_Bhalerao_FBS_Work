//To calculate number of words in string

#include<stdio.h>
#include<string.h>

void main()
{
	char str[100];
	int i=0;
	int words=0;
	
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	
	 while (str[i] == ' ') {
        i++;
    }
	
	 while (str[i] != '\0') {
        if (str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0' || str[i+1] == '\n')) {
            words++;
        }
        i++;
    }

    printf("Number of words: %d\n", i);
}

	
