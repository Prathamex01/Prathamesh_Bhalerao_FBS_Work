//Tokens function in String 

#include <stdio.h>
#include <string.h>

void  main()
{ char str[30];

	printf("Enter the  string:");
	fgets(str,sizeof (str),stdin);
	
    char *token = strtok(str, ",");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }
    
}
