//Printing half pyramid pattern using numbers

#include<stdio.h>

void main()
{

	int i,j,no;
	
		printf("Enter the size of Pyramid:");
	scanf("%d",&no);
	
	for ( i = 1; i <= no; i++)
	 {
    for ( j = 1; j <= i; j++) {
        printf("%d", j);
    }
    printf("\n");
}

}