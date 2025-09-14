import java.util.Scanner;
class Student
{ 
   int rollno;

String name;//Reference
double marks;


void setRollno(int y)
{
  this.rollno=y;
}


void setName(String str)
{
   this.name=str;
}         


void setMarks(double m)
{
  this.marks=m;
}

int getRollno()
{
  return this.rollno;

}

String getName()
{
  return this.name;
}

double getMarks()
{
return this.marks;
}

void display()
{
System.out.println("The rollno is "+this.rollno);
System.out.println("The Name is "+this.name);
System.out.println("The Marks are "+this.marks);

}

Student ()//Default Constructor
{
  this.rollno=1;
this.name="Prathamesh";
this.marks=85;
System.out.println("in default constructor");

}

Student(int i,String str,double m)
{
 this.rollno=i;
this.name=str;
this.marks=m;
System.out.println("in parameterized constructor");
}
 }//class Student ends here


class Test
{ 
public static void main(String[]args)
{
Scanner sc=new Scanner(System.in);


  Student s1=new Student();
s1.display();

Student s2=new Student(2,"Rana",95);
s2.display();


System.out.println("Enter roll no:");
int roll=sc.nextInt();
sc.nextLine();

System.out.println("Enter name:");
String name=sc.nextLine();

System.out.println("Enter marks:");
double marks=sc.nextDouble();

Student s3=new Student(roll,name,marks);
s3.display();

sc.close();



}
  
}//class Test ends here
