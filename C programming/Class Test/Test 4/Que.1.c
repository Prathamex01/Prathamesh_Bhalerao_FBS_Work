//Program to print factors

#include<stdio.h>

void main() {

	int start;
	int end;

	printf("Enter the start:");
	scanf("%d",&start);

	printf("Enter the ending:");
	scanf("%d",&end);

	for(int i=start; i<=end; i++) {
		
		
		for(int j=1; j<=i; j++) {
			
		if(i%j==0)
		
		printf(" The factors of %d are %d\n",start,j);
		

		
	}

}

}