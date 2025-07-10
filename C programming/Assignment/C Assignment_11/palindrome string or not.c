//To check string is palindrome or not 

#include<stdio.h>
#include<string.h>

void main()
{
	char str [20];
	char rev[20];
	
	
	printf("Enter the string:");
	scanf("%s",str);
	
	int len =strlen (str);
		int temp;
		
		  strcpy(rev, str);
		  
		  
	for (int i=0; i<len/2; i++) {
		temp=rev[i];
		rev[i]=rev[len-1-i];
		rev[len-1-i]=temp;
	}
	 if (strcmp(str, rev) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}




