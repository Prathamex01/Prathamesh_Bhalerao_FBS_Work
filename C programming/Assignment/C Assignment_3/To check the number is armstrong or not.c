//To check whether the given number is Armstrong number or not

#include <Stdio.h>

void main(){
	
	int no=153;
	int orignal =no;
	int sum=0;
	
	while(no>0){
		
		int digit =no%10;
		sum=sum+digit*digit*digit;
		no=no/10;
	}
	
	if(sum== orignal)
	  printf("Armstrong");
	  
	  else {
	  	printf("Not Armstrong");
	  }
}