//To check the number is strong number or not

#include <stdio.h>

void main(){
	
	int no=145;
	int original=no;
	int sum=0;
	
	while(no>0) {
		
		int digit=no%10;
		
		int fact=1;
		int i=1;
		while (i<=digit){
			fact=fact*i;
			i++;
		}
		
		sum=sum+fact;
		no=no/10;
	
	}
	
	if(sum==original)
	printf("Strong number\n");
	
	
	else
	printf("Not strong number\n");
	

}