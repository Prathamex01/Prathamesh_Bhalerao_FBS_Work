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


 }//class Student ends here


class Test
{ 
public static void main(String[]args)
{
  Student s1=new Student();

s1.setRollno(1);
s1.setName("Prathamesh");
s1.setMarks(85);

Student s2=new Student();

s2.setRollno(2);
s2.setName("Rana");
s2.setMarks(90);


System.out.println(s1.rollno);
System.out.println(s1.name);
System.out.println(s1.marks);

System.out.println(s2.rollno);
System.out.println(s2.name);
System.out.println(s2.marks);



}
  
}//class Test ends here
