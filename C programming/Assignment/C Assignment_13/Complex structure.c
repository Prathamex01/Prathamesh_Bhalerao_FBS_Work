//complex imaginary real

#include<stdio.h>


typedef struct  complex
{
	int real;
int imaginary ;

	
}complex;

struct complex storecomplex();
void displaycomplex(complex );
void main()
{
	complex c1,c2;
	
c1=storecomplex();
	displaycomplex(c1);
		printf("\n");
	
c2=storecomplex();
	displaycomplex(c2);
}

struct complex storecomplex()
{
 complex  temp;
	printf("Enter the real number:");
	scanf("%d",&temp.real);
	
	printf("Enter the imaginary number:");
	scanf("%d",&temp.imaginary);
	
	return temp;
}

void displaycomplex(complex t1)
{
		printf("The real number is: %d\n",t1.real);
		printf("The imaginary number is: %d\n",t1.imaginary);
		
}
 
