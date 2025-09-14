class Salesmanager
{ 
   int id,target;

String name;//Reference
double salary,incentive;


void setId(int y)
{
  this.id=y;
}


void setName(String str)
{
   this.name=str;
}         


void setSalary(double s)
{
  this.salary=s;
}

void setIncentive(double i)
{
  this.incentive=i;
}

void setTarget(int t)
{
  this.target=t;
}

int getId()
{
 return this.id;
}


String getName()
{
 return this.name;

}

double getSalary()
{
 return this.salary;

}

double getIncentive()
{
 return this.incentive;

}

int getTarget()
{
 return this.target;
}

void display()
{
System.out.println("The id is " + this.id);
System.out.println("The Name is " + this.name);
System.out.println("The Salary is "+ this.salary);
System.out.println("The Incentive is "+ this.incentive);
System.out.println("The Target is "+this.target);

}


Salesmanager()//Default constructor
{
  this.id=1;
this.name="Prathamesh";
this.salary=25000;
this.incentive=4000;
this.target=500;

System.out.println("in default constructor");

}

Salesmanager(int i,String str,double d,double h,int t)
{
 this.id=i;
this.name=str;
this.salary=d;
this.incentive=h;
this.target=t;

System.out.println("in parameterized constructor");

}

 }//class Salesmanager ends here


class Test
{ 
public static void main(String[]args)
{
  Salesmanager m1=new Salesmanager();


m1.display();


 Salesmanager m2=new Salesmanager(2,"Rana",22000,7000,450);


m2.display();

//System.out.println(m1.id);
//System.out.println(m1.name);
//System.out.println(m1.salary);
//System.out.println(m1.incentive);
//System.out.println(m1.target);

//System.out.println(m2.id);
//System.out.println(m2.name);
//System.out.println(m2.salary);
//System.out.println(m2.incentive);
//System.out.println(m2.target);



}

  
}//class Test ends here
