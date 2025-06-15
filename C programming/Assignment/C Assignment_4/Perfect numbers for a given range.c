//Print perfect number for a given range 

#include <stdio.h>

void main()
{
	
	int no;
	int i,j,sum;
	
	printf("Enter the number:");
	scanf("%d",&no);
	
	printf("Perfect numbers from 1 to %d are:\n",no);
	
	for (int i=1;i<=no;i++)
	{
		sum=0;
		
		for (j=1;j<=i/2;j++)
		{
			if (i%j==0){
				
				sum=sum+j;
			}
		}
		
		if (sum==i)
		{
		printf("%d\n",i);
			
		}
	} 
	
}