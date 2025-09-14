                    
class Bank
{
	int accno;
	String holdername;
	double balance;
	static double intrestRate;
         static{
		intrestRate=10;
                 }

	void setAccno(int no)
	{
		this.accno=no;
	}
	void setHoldername(String name)
	{
		this.holdername=name;
	}
	void setBalance(double balance)
	{
		this.balance=balance;
	}
	 static void setintrestRate(double iR )
	{
		intrestRate=iR;
	}
	int getAccno()
	{
		return accno;
	}
	String getHoldername()
	{
		return holdername;
	}
	double getBalance()
	{
		return balance;
	}
	double getintrestRate()
	{
		return intrestRate ;
	}
	void display()
	{
		System.out.println("Account no: "+this.accno);
		System.out.println("Holder Name: "+this.holdername);
		System.out.println("Balance: "+this.balance);
		System.out.println("intrestRate: "+this.intrestRate);

                System.out.println();

	}
	Bank()
	{
               System.out.println("Default constructor");
		this.accno=001;
		this.holdername="Default";
		this.balance=2000;
		//this.intrestRate=6.5;

	}
	Bank(int a,String n,double iR,double ba)
	{
            System.out.println("Parameterized constructor");
		this.accno=a;
		this.holdername=n;
		this.balance=ba;
		//this.intrestRate=iR;
	}
}//class Bankacc ends 

class Test
{
	public static void main (String [] args)
	{
		
		Bank b1=new Bank();
		
		b1.display();

		Bank b2=new Bank(002,"Pratik",9.3,2000);
		b2.display();

               Bank b3=new Bank(003,"Rushi",9.5,20000);
		b3.display();
                  
                  b1.display();
                   b2.display();
			b3.display();

			Bank.setintrestRate(4.5);
  			b1.display();
                        b2.display();
			b3.display();
			

	}
}//class Test ends	