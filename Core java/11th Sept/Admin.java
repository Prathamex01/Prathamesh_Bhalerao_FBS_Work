import java.util.Scanner;
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

  Admin() {
        this.id = 1;
        this.name = "Default Admin";
        this.salary = 20000;
        this.allowance = 3000;
        System.out.println("In Default Constructor");
    }

    // Parameterized constructor
    Admin(int id, String name, double salary, double allowance) {
        this.id = id;
        this.name = name;
        this.salary = salary;
        this.allowance = allowance;
        System.out.println("In Parameterized Constructor");
    }


 }//class Admin ends here

class Test
{ 
public static void main(String[]args)
{

Scanner sc=new Scanner(System.in);

  Admin a1=new Admin();

a1.display();


Admin a2=new Admin(2, "Rana", 28000, 4500);

a2.display();

  System.out.print("Enter id: ");
        int id = sc.nextInt();
        sc.nextLine(); 

        System.out.print("Enter name: ");
        String name = sc.nextLine();

        System.out.print("Enter salary: ");
        double salary = sc.nextDouble();

        System.out.print("Enter allowance: ");
        double allowance = sc.nextDouble();

        Admin a3 = new Admin(id, name, salary, allowance);
        a3.display();

        sc.close();
    }

 
}//class Test ends here
