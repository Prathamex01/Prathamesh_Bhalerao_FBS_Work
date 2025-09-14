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

 }//class Salesmanager ends here


class Test
{ 
public static void main(String[]args)
{
  Salesmanager m1=new Salesmanager();

m1.setId(1);
m1.setName("Prathamesh");
m1.setSalary(25000);
m1.setIncentive(5000);
m1.setTarget(500);

 Salesmanager m2=new Salesmanager();

m2.setId(2);
m2.setName("Rana");
m2.setSalary(28000);
m2.setIncentive(7000);
m2.setTarget(700);


System.out.println(m1.id);
System.out.println(m1.name);
System.out.println(m1.salary);
System.out.println(m1.incentive);
System.out.println(m1.target);

System.out.println(m2.id);
System.out.println(m2.name);
System.out.println(m2.salary);
System.out.println(m2.incentive);
System.out.println(m2.target);



}

  
}//class Test ends here
