//Printing * pattern hollow square

#include<stdio.h>

void main()
{

	int i,j,no;
	
	printf("Enter the Size of the Square:");
	scanf("%d",&no);
	
	for ( i = 0; i < no; i++) {
    for ( j = 0; j < no; j++) {
        if (i == 0 || i == no-1 || j == 0 || j == no-1)
            printf("*  ");
        else
            printf("   ");
    }
    printf("\n");
}
}