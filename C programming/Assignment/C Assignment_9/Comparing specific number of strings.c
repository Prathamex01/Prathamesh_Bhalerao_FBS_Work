//Comparing specific number of Characters in a String


#include <stdio.h>
#include <string.h>

void main() {
    char a[10];
    char b[10];
	printf("Enter the first string:");
	fgets(a,sizeof (a),stdin);
	
	
		printf("Enter the second string:");
		
	fgets(b,sizeof (b),stdin);
	
    int cmp = strncmp(a, b, 3);
    if (cmp == 0)
printf("First 3 characters are equal\n");
    else
        printf("They differ in first 3 characters\n");


}