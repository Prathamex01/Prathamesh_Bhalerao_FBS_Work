//To check the given nunber is prime or not 

# include <stdio.h>

void main (){
 int no=14;
 int i=2;
 int status=1;
 
 if(no<=1){
 	status=0;
 }
 else {
 	while(i<no){
 		
 		if (no%i==0){
 			
 			status=0;
 			
 			break;
 			
		 }
		 i++;
	 }
 }
 
 if (status ==1)
 printf("Prime");
 
 else
 printf("Not prime");
 
 
}