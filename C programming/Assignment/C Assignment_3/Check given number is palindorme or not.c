//To check given number is palindrome or not

#include <stdio.h>

void main(){
	
	int no=121;
	int original=no;
	int rev=0;
	
	while (no!=0){
		
		int digit=no%10;
		
		rev=rev*10+digit;
		no=no/10;
		
	}
	
	if (original==rev)
	printf("Palindrome\n");
	
	else
	printf("Not palindrome");
	
	}