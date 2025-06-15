//Strong numbers for a given range 

#include<stdio.h>

void main()
{
	
	int no;
	
	printf("Enter the number:");
	scanf("%d",&no);
	
	printf("Strong numbers between 1 and %d are:\n",no);
	
	for(int i=1;i<=no;i++)
	{
		
		int num=i;
		int sum=0;
		
		while(num>0)
		{
			int digit=num%10;
			
			int fact=1;
			for (int j=1;j<=digit;j++)
			{
				fact=fact*j;
			}
			
			sum=sum+fact;
			num=num/10;
			}
			if (sum==i){
				
				printf("%d\n",i);
			}
		}
		
	}
	
	
	