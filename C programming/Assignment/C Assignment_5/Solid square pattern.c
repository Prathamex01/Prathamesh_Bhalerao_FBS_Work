//Printing * pattern solid square

#include<stdio.h>

void main()
{
	int i,j,no;
	
	printf("Enter the Size of the Square:");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		for(j=0;j<no;j++)
		{
			printf(" * ");
			
		}
			printf("\n");
	}
	

}