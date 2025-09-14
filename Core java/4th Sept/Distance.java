class Distance{

double feet;
double inches;



void setFeet(double f)
{
 this.feet=f;

}

void setInches(double i)
{
 this.inches=i;

}



double getFeet()
{
  return this.feet;
}

double getInches()
{
  return this.inches;
}



void display()
{
 System.out.println("The distance is "+this.feet+" feets and");
System.out.println(+this.inches+ " inches");

}

}//class Distance ends here


class Test{
public static void main(String[]args)
{
 Distance d1=new Distance();
d1.setFeet(50);
d1.setInches(25);


d1.display();

 Distance d2=new Distance();
d2.setFeet(60);
d2.setInches(30);

d2.display();

}

}//class Test ends here