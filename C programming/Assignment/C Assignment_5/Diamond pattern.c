//Printing * pattern Diamond 

#include<stdio.h>

void main()
{

	int i,j,no,s;
	
		printf("Enter the size of Diamond:");
	scanf("%d",&no);
	
	
for (int i = 1; i <= no; i++) {
    for (int s = 0; s < no - i; s++) printf(" ");
    for (int j = 0; j < i; j++) printf("* ");
    printf("\n");
}

for ( i = no - 1; i >= 1; i--) {
    for ( s = 0; s < no - i; s++) printf(" ");
    for ( j = 0; j < i; j++) printf("* ");
    printf("\n");
    
}


}