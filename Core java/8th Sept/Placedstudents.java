
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

  // Default constructor
    PlacedStudent() {
        this.fbrollno = 0;
        this.name = "Default Student";
        this.companyname = "Default Company";
        this.designation = "Trainee";
        this.distance = 0.0;
        System.out.println("In Default Constructor");
    }

 PlacedStudent(int fbrollno, String name, String companyname, String designation, double distance) {
        this.fbrollno = fbrollno;
        this.name = name;
        this.companyname = companyname;
        this.designation = designation;
        this.distance = distance;
        System.out.println("In Parameterized Constructor");
    }

 }//class PlacedStudent ends here


class Test
{ 
public static void main(String[]args)
{
  
 
  PlacedStudent s1=new PlacedStudent();


s1.display();

PlacedStudent s2=new PlacedStudent(1, "Rana", "Amdocs", "Associate Software Engineer", 25.0);


s2.display();

}

  
}//class Test ends here
