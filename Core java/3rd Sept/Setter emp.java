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


 }//class Employee ends here

class Test
{ 
public static void main(String[]args)
{
  Employee e1=new Employee();

e1.setId(1);
e1.setName("Prathamesh");
e1.setSalary(25000);



Employee e2=new Employee();
e2.setId(2);
e2.setName("Rana");
e2.setSalary(28000);


System.out.println(e1.id);
System.out.println(e1.name);
System.out.println(e1.salary);


System.out.println(e2.id);
System.out.println(e2.name);
System.out.println(e2.salary);
}

  
}//class Test ends here
