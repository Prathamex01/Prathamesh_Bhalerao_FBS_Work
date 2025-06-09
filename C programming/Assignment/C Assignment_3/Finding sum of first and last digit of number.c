//To find the sum of first and last digit of the given number

#include <stdio.h>

void main(){
	
	int no=12345;
	int num=no;
	
	int lastdigit=no%10;
	
	while (num>=10){
		num=num/10;
	}
	int firstdigit=num;
	
	int sum=firstdigit + lastdigit;
	printf("Sum=%d\n",sum);
}