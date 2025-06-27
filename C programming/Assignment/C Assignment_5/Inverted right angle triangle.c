//Printing * pattern inverted right angle triangle

#include<stdio.h>

void main()
{
	int i,j,no;
	
		printf("Enter the size of Triangle:");
	scanf("%d",&no);
	
	for (int i = no; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    

	
}