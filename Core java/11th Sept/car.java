import java.util.Scanner;
class Car
{
	String model;
	int year;
	double price;
	String brand;
	
	void setModel(String model)
	{
		this.model=model;
	}
	
	void setYear(int year)
	{
		this.year=year;
	}
	
	void setPrice(double price)
	{
		this.price=price;	
	}
	
	void setBrand(String brand)
	{
		this.brand=brand;
	}
	String getModel()
	{
		return this.model;
	}
	int getYear()
	{
		return this.year;
	}
	double getPrice()
	{
		return this.price;
	}
	String getBrand()
	{
		return this.brand;
	}

	void display()
	{
	
		System.out.println("Model:"+this.model);
		System.out.println("Year:"+this.year);
		System.out.println("Price:"+this.price);
		System.out.println("Brand:"+this.brand);
	}
	Car()
	{
		this.model="Creta";	
		this.year=2024;
		this.price=5024.20;
		this.brand="Hyundai";
		System.out.println("Default call:");
	}
	Car(String m,int y,double p, String b)
	{
		this.model=m;	
		this.year=y;
		this.price=p;
		this.brand=b;
		System.out.println("parameter call:");
	}


}
class Test
{
	public static void main(String []a)
	{
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter a Model");
		String m=sc.nextLine();

		System.out.println("Enter a year");
		int y=sc.nextInt();

		System.out.println("Enter a price");
		double p=sc.nextDouble();	
		sc.nextLine();

		System.out.println("Enter a brand");
		String i=sc.nextLine();
	
		Car d1=new Car();
		d1.display();
		Car c2=new Car(m,y,p,i);
		c2.display();
	}
}	
