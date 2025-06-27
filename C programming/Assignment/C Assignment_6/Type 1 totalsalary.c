//Calculating total salary using functions

#include<stdio.h>
void Totalsalary();
void main()
{
	Totalsalary();
	
}

void Totalsalary()
{
	{
		double base;
	double da,ta,hra,t_sal;
	
	printf("Enter the base salary:");
	scanf("%lf",&base);
	
	if (base<=5000)
	{
		da=base*0.10;
		ta=base*0.20;
		hra=base*0.25;	
	}
	
	else 
	{
		
		da=base*0.15;
		ta=base*0.25;
		hra=base*0.30;
	}
	
	t_sal=base+da+ta+hra;
	
	printf("The total salary is %lf",t_sal);
}
	
}