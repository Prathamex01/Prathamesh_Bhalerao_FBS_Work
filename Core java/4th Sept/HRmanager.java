class HRmanager
{ 
   int id;

String name;//Reference
double salary;
double commission;


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
 
void setCommission(double c)
{
  this.commission=c;
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

double getCommission()
{
  return this.commission;
}


void display()
{
  System.out.println("The id is "+this.id);
System.out.println("The name is "+this.name);
System.out.println("The salary is "+this.salary);
System.out.println("The commission is "+this.commission);
}

 }//class HRmanager ends here

class Test
{ 
public static void main(String[]args)
{
  HRmanager h1=new HRmanager();

h1.setId(1);
h1.setName("Prathamesh");
h1.setSalary(25000);
h1.setCommission(4000);
 

h1.display();


HRmanager h2=new HRmanager();

h2.setId(2);
h2.setName("Rana");
h2.setSalary(28000);
h2.setCommission(7000);
 
h2.display();

//System.out.println(e1.id);
//System.out.println(e1.name);
//System.out.println(e1.salary);


//System.out.println(e2.id);
//System.out.println(e2.name);
//System.out.println(e2.salary);
}

  
}//class Test ends here
