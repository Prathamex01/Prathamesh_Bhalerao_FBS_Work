//Printing * pattern for Pyramid

#include<stdio.h>

void main()
{
		int i,j,no;
	
		printf("Enter the size of Pyramid:");
	scanf("%d",&no);
	
	for (int i = 1; i <= no; i++) 
{
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    

	
	
}
