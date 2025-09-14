                    
class ElectricityBill
{
	int id;
	String name;
	int unit;
	static double RateperUnit;
         static{//Default rate per unit
		RateperUnit=12;
                 }

	void setId(int i)
	{
		this.id=i;
	}
	void setName(String name)
	{
		this.name=name;
	}
	
        void setUnit(int u)
	{ 
          this.unit=u;

              }

	 static void setRateperUnit(double Rp )
	{
		RateperUnit=Rp;
	}
	int getId()
	{
		return id;
	}
	String getName()
	{
		return name;
	}
	
	double getRateperUnit()
	{
		return RateperUnit ;
	}

   int getUnit()
	{ 
          return unit;

              }

void display()
	{
		System.out.println("Bill id is: "+this.id);
		System.out.println(" Name is: "+this.name);
		System.out.println("Unit is: "+this.unit);

                System.out.println();
}


          

	
	ElectricityBill()
	{
               System.out.println("Default constructor");
		this.id=1;
		this.name="Default";
		
                  this.unit=80;
	}
	ElectricityBill(int a,String n,int u)
	{
            System.out.println("Parameterized constructor");
		this.id=a;
		this.name=n;
		
                  this.unit=u;
	}

void CalculateBill (){

                   System.out.println("The bill for "+this.id+" is "+this.unit*RateperUnit);
                                   }
	


}//class ElectricityBill ends 

class Test
{
	public static void main (String [] args)
	{
		
		ElectricityBill b1=new ElectricityBill();
		 b1.CalculateBill();
		b1.display();
            
		ElectricityBill b2=new ElectricityBill(2,"Pratik",200);
                b2.CalculateBill();
		b2.display();

               ElectricityBill b3=new ElectricityBill(3,"Rushi",150);
		b3. CalculateBill();
		b3.display();
                  
                

	}
}//class Test ends	