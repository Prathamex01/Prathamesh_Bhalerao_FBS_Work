//To find greatest of three numbers using functions

#include<stdio.h>
void Greatest();
void main()
{
	Greatest();
	
}

void Greatest()
{
	{
	
	int a,b,c;

	printf("Enter three numbers:");
	
	scanf("%d %d %d",&a, &b, &c);
	
	if(a>b && a>c)

			{
			printf("%d is greater.\n",a);
		}
	
	else if (b>c) {
		printf("%d is greater.\n",b);
	}
	
	
	else {
	
	
			printf("%d is greater.\n",c);
		}
		
	
	
}

	
}