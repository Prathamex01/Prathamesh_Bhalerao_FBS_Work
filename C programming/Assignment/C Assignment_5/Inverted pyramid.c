//Printing * pattern inverted pyramid

#include<stdio.h>

void main()
{

	int i,j,no;
	
		printf("Enter the size of Pyramid:");
	scanf("%d",&no);


for (i = 0; i < no; i++) {
         for (j = 0; j < i; j++) {
            printf(" ");
        }
       
        for (j = 0; j < no - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
}
  

