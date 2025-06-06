//Print last 2 digit of the given number

void main(){
	
	int num;
	printf("Enter a number :");
	scanf ("%d",&num);
	
	int r1= num%10;
	int q1=num/10;
	int r2=q1%10;
	
	
	printf("The last digit are: %d%d",r2,r1);
}