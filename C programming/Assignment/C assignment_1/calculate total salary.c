//Calculating total salary on the basis of base salary

void main(){
	
	double base=15000;
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
	
	printf("The total salary is %lf",t_sal);
}
