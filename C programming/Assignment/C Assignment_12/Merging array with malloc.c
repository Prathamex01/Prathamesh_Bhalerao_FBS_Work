//Merging Array using Functions
#include<stdio.h>
#include<stdlib.h>
	void  Merge(int*,int*,int*  ,int ,int );
	 
void main()
{
	int *arr;
	int *brr;
	
	int *merged;
	
	int size;
		
		 printf("Enter the size of array: ");
    scanf("%d", &size);
	
	 arr = (int*)malloc(size * sizeof(int));
	 brr= (int*)malloc(size * sizeof(int));
	  merged = (int*)malloc(2* size *sizeof(int));
	 
	
	
	for(int i=0;i<size;i++)
	{
		printf("Enter the elements for the first array %d:",i+1);
		scanf("%d",&arr[i]);
	}
		printf("\n");
		
	for(int i=0;i<size;i++)
	{
		printf("Enter the elements for the second array %d:",i+1);
		scanf("%d",&brr[i]);
	}
	
	printf("\n");
	
	 Merge(arr,brr,merged,size,size);
	
	   printf("The merged array is:\n");
    for (int i = 0; i < size*2; i++) {
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




	 
	 
	 