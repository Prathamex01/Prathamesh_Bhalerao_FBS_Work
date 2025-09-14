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

 }//class Employee ends here

class Test
{ 
public static void main(String[]args)
{
  Employee e1=new Employee();

e1.setId(1);
e1.setName("Prathamesh");
e1.setSalary(25000);
 
e1.display();


Employee e2=new Employee();
e2.setId(2);
e2.setName("Rana");
e2.setSalary(28000);

e2.display();

//System.out.println(e1.id);
//System.out.println(e1.name);
//System.out.println(e1.salary);


//System.out.println(e2.id);
//System.out.println(e2.name);
//System.out.println(e2.salary);
}

  
}//class Test ends here
