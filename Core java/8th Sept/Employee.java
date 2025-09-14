class Employee
{ 
   int id;

String name;//Reference
double salary;


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

void display()
{
  System.out.println("The id is "+this.id);
System.out.println("The name is "+this.name);
System.out.println("The salary is "+this.salary);

}

Employee ()//Default constructor
{
   this.id=1;
this.name="Prathamesh";
this.salary=25000;
System.out.println("In default constructor");

 }

Employee(int i,String str,double d)//Parameterized constructor
{
   this.id=i;
this.name=str;
this.salary=d;
System.out.println("In parametrized constructor");

}


}//class Employee ends here

class Test
{ 
public static void main(String[]args)
{
  Employee e1=new Employee();


e1.display();


Employee e2=new Employee(2,"Rana",28000);
e2.display();

//System.out.println(e1.id);
//System.out.println(e1.name);
//System.out.println(e1.salary);


//System.out.println(e2.id);
//System.out.println(e2.name);
//System.out.println(e2.salary);
}

  
}//class Test ends here
