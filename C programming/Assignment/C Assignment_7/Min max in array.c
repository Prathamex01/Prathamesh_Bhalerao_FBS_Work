//Array Min and Max

#include <stdio.h>

void main()
{
	int arr[5];
	int min;
	int max;
	
	for(int i=0;i<5;i++)
	{
	
	printf("Enter the element %d:",i+1);
	
	scanf("%d",&arr[i]);
	
}
 min=arr[0];
	 max=arr[0];
	
	for(int i=1;i<5;i++)
	{
	
		if(arr[i]<min)
	min=arr[i];
	
	if(arr[i]>max)
	max=arr[i];
	
}
printf("The elements are:\n");
	for(int i=0;i<5;i++)
	printf("%d\n",arr[i]);
	
printf("The minimum element is %d\n",min);
printf("The Maximum element is %d\n",max);


}