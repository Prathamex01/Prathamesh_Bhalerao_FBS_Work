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


 }//class Student ends here


class Test
{ 
public static void main(String[]args)
{
  Student s1=new Student();

s1.setRollno(1);
s1.setName("Prathamesh");
s1.setMarks(85);

s1.display();

Student s2=new Student();

s2.setRollno(2);
s2.setName("Rana");
s2.setMarks(90);

s2.display();

//System.out.println(s1.rollno);
//System.out.println(s1.name);
//System.out.println(s1.marks);

//System.out.println(s2.rollno);
//System.out.println(s2.name);
//System.out.println(s2.marks);



}
  
}//class Test ends here
