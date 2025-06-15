//Prime numbers for a given range 

#include<stdio.h>

void main() {

	
	int no;
	int isPrime=1;
	
	printf("Enter a number:");
	scanf("%d",&no);
	
	 printf("Prime numbers from 1 to %d are:\n", no);
	 
	 
	for (int i=2;i<=no;i++) {
	
		int isPrime=1;
	

for (int j = 2; j < i; j++) {
	
            if (i % j == 0) {
                isPrime = 0;  
                
                break;
            }
        }
    
	 if (isPrime==1)
	 
	 printf("%d\n",i);
	 

}
}
	 
	

