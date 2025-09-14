class Date
{ 
   int day,year;

String dow;//Reference
String month;
void setDay(int d)
{
   this.day=d;
}         

void setdow(String str)
{
  this.dow=str;

}
void setmonth(String str)
{
  this.month=str;
}

void setyear(int y)
{
  this.year=y;
}


 }//class Date ends here

class Test
{ 
public static void main(String[]args)
{
  Date d1;
d1=new Date();
d1.setDay(03);
d1.setdow("Wednesday");
d1.setmonth("September");
d1.setyear(2025);



Date d2=new Date();
d2.setDay(04);
d2.setdow("Thursday");
d2.setmonth("September");
d2.setyear(2025);


System.out.println(d1.day);
System.out.println(d1.dow);
System.out.println(d1.month);
System.out.println(d1.year);


System.out.println(d2.day);
System.out.println(d2.dow);
System.out.println(d2.month);
System.out.println(d2.year);




}

  }//class Test ends here
