//Merging Array using Functions
#include<stdio.h>
	void  Merge(int*,int*,int*  ,int ,int );
	 
void main()
{
	int arr[5];
	int brr[5];
	
	int merged[10];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter the elements for the first array %d:",i+1);
		scanf("%d",&arr[i]);
	}
		printf("\n");
		
	for(int i=0;i<5;i++)
	{
		printf("Enter the elements for the second array %d:",i+1);
		scanf("%d",&brr[i]);
	}
	
	printf("\n");
	
	 Merge(arr,brr,merged,5,5);
	
	   printf("The merged array is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }
	 
	
	 
	 	 printf("\n");
	 }
	 
	
	 
	 	void Merge(int *arr1, int *arr2, int *merged, int size1, int size2) 
		 {
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
	 	
}




	 
	 
	 