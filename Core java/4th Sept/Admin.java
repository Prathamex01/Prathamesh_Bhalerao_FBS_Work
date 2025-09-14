class Admin
{ 
   int id;

String name;//Reference
double salary;
double allowance;


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
 
void setAllowance(double a)
{
  this.allowance=a;
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

double getAllowance()
{
  return this.allowance;
}


void display()
{
  System.out.println("The id is "+this.id);
System.out.println("The name is "+this.name);
System.out.println("The salary is "+this.salary);
System.out.println("The allowance is "+this.allowance);
}

 }//class Admin ends here

class Test
{ 
public static void main(String[]args)
{
  Admin a1=new Admin();

a1.setId(1);
a1.setName("Prathamesh");
a1.setSalary(25000);
a1.setAllowance(4000);
 

a1.display();


Admin a2=new Admin();
a2.setId(2);
a2.setName("Rana");
a2.setSalary(28000);
a2.setAllowance(4500);

a2.display();

//System.out.println(e1.id);
//System.out.println(e1.name);
//System.out.println(e1.salary);


//System.out.println(e2.id);
//System.out.println(e2.name);
//System.out.println(e2.salary);
}

  
}//class Test ends here
