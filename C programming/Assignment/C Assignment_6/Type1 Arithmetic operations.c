//To perfrom arthimetic operations using functions

#include<stdio.h>
void Operations();
void main()
{
	Operations();
	
}
void Operations(){
		
		{
	
	int a , b;
	char op;
	int res;
	
	printf("Enter first number:");
		scanf("%d",&a);
		
	printf("Enter second number:");
	scanf("%d",&b);
	
	printf("Enter one operator '+','-','*','/','%%':");
	fflush(stdin);
	scanf("%c",&op);
	
	if(op=='+'){
	 printf("res=%d\n",a+b)	;
}
	 
	 else if(op=='-'){
	 	
	 	printf("res=%d\n",a-b);
	 	
		 }
		 else if(op=='*'){
		 	
		 	printf("res=%d",a*b);
		 }
		 
		 else if (op=='/'){
		 	
		 	printf("res=%d",a/b);
		 	
		 }
		 else if (op=='%'){
		 	
		 	printf("res=%d",a%b);
		 }
		 
		 else {
		 	
		 	printf("Enter correct values");
		 }
		 }
		 
	}