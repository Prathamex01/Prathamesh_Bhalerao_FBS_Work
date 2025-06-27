//Printing Flyod's triangle using numbers

#include<stdio.h>

void main()
{

	int i,j,no;
	
		printf("Enter the size of Triangle:");
	scanf("%d",&no);
	
	
	int num = 1;
for ( i = 1; i <= no; i++) {
    for ( j = 0; j < i; j++) {
        printf("%d ", num++);
    }
    printf("\n");
}

}