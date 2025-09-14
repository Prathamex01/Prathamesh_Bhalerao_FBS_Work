import java.util.Scanner;

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
Scanner sc=new Scanner(System.in);

  Salesmanager m1=new Salesmanager();


m1.display();


 Salesmanager m2=new Salesmanager(2,"Rana",22000,7000,450);


m2.display();

System.out.println("Enter id:");
int id=sc.nextInt();
sc.nextLine();

System.out.println("Enter name:");
String name=sc.nextLine();

System.out.println("Enter salary:");
double salary=sc.nextDouble();

System.out.println("Enter incentive:");
double incentive=sc.nextDouble();

System.out.println("Enter Target:");
int target=sc.nextInt();

Salesmanager m3=new Salesmanager(id,name,salary,incentive,target);
m3.display();
sc.close();


}

  
}//class Test ends here
