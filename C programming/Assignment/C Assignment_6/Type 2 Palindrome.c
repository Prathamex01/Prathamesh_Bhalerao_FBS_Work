//To Check Palindrome

#include<stdio.h>

int isPalindrome();
void main(){
	
int res= isPalindrome();
 if (res==1)
	 printf("The no is Palindrome");
	 
	 else
	 printf("The no is not palindrome");
	  
}

int isPalindrome()
{
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	
	  int r1, r2, r3, q1, rev;
	  
	  r1=no%10;
	   
	  q1=no/10;
	  
	  r2=q1%10;
	  
	r3=q1/10;

	rev=r1*100+r2*10+r3;
	 
	 printf("\nno=%d",no);
	 
	printf(" \nrev=%d", rev);
	
	
	if (no==rev)
	{
		
	return 1;
	
	}
	
	else {
		
		return 0;
		
	}
}
