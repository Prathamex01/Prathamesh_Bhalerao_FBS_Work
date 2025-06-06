//Write a program to check the 3 digit number is palindrome or not

void main(){
	int no=121;
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
		
		printf(" \nThe number is Palindrome");
	
	}
	
	else {
		
		printf("\nThe number is not a Palindrome");
		
		
	}
	

	
}