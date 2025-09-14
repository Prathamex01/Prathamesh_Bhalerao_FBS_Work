class PlacedStudent
{ 
   int fbrollno;

String name;//Reference
String designation;
String companyname;
double  distance;

void setFBRollno(int y)
{
  this.fbrollno=y;
}


void setName(String str)
{
   this.name=str;
}         


void setDesignation(String str)
{
  this.designation=str;
}

void setCompanyName(String str)
{
  this.companyname=str;
}

void setDistance(double d)
{
  this.distance=d;
}

int getRollno()
{
  return this.fbrollno;

}

String getName()
{
  return this.name;
}

double getDistance()
{
return this.distance;
}

String getCompanyName()
{
  return this.companyname;
}

String getDesignation()
{
  return this.designation;

}



void display()
{
System.out.println("The fbsrollno is "+this.fbrollno);
System.out.println("The Name is "+this.name);
System.out.println("The Company name is "+this.companyname);
System.out.println("The Designation is "+this.designation);
System.out.println("The Distance  is "+this.distance+"Km");



}
 }//class PlacedStudent ends here


class Test
{ 
public static void main(String[]args)
{
  PlacedStudent s1=new PlacedStudent();

s1.setFBRollno(1);
s1.setName("Prathamesh");
s1.setDistance(20);
s1.setCompanyName("Accenture");
s1.setDesignation("Software Engineer");

s1.display();

PlacedStudent s2=new PlacedStudent();

s2.setFBRollno(2);
s2.setName("Rana");
s2.setDistance(25);
s2.setCompanyName("Amdocs");
s2.setDesignation(" Associate Software Engineer");

s2.display();

//System.out.println(s1.rollno);
//System.out.println(s1.name);
//System.out.println(s1.marks);

//System.out.println(s2.rollno);
//System.out.println(s2.name);
//System.out.println(s2.marks);



}
  
}//class Test ends here
