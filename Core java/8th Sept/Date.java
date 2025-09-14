class Date
{ 
   int day,year,month;

String dow;//Reference

void setDay(int d)
{
   this.day=d;
}         

void setdow(String str)
{
  this.dow=str;

}
void setmonth(int m)
{
  this.month=m;
}

void setyear(int y)
{
  this.year=y;
}

int getMonth()
{
  return this.month;

}

int getDay()
{
  return this.day;
}

int getYear()
{
return this.year;
}

void display()
{
System.out.println(this.day+"/"+this.month+"/"+this.year+"/ "+this.dow);

}

Date ()//Default
{
  this.day=7;
this.month=1;
this.year=2023;
this.dow="Saturday";

System.out.println("In default constructor");
}

Date(int d,int m,int y,String str)//parameterized
{
  this.day=d;
this.month=m;
this.year=y;
this.dow=str;

System.out.println("In parameterized constructor");
}

 }//class Date ends here

class Test
{ 
public static void main(String[]args)
{
  Date d1;
d1=new Date();
//d1.setDay(3);
//d1.setdow("Wednesday");
//d1.setmonth(9);
//d1.setyear(2025);
 
d1.display();

Date d2=new Date(14,8,2025,"Thursday");
//d2.setDay(04);
//d2.setdow("Thursday");
//d2.setmonth(8);
//d2.setyear(2023);

d2.display();



//System.out.println(d1.day);
//System.out.println(d1.dow);
//System.out.println(d1.month);
//System.out.println(d1.year);


//System.out.println(d2.day);
//System.out.println(d2.dow);
//System.out.println(d2.month);
//System.out.println(d2.year);




}

  }//class Test ends here
