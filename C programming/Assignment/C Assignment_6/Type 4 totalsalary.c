//Calculating total salary

#include<stdio.h>

double Totalsalary(double);
void main()
{
	
		double base;

	printf("Enter the base salary:");
	scanf("%lf",&base);
	
double t_sal= Totalsalary(base);
printf("%lf",t_sal);
	
}

double Totalsalary(double base)

	{
		double da,ta,hra,t_sal;
	
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
	
	return t_sal;
}
	

	