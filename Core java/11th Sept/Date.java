import java.util.Scanner;

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
  Scanner sc=new Scanner(System.in);

  Date d1;
d1=new Date();

 
d1.display();

Date d2=new Date(14,8,2025,"Thursday");

d2.display();

System.out.println("Enter day:");
int day=sc.nextInt();

System.out.println("Enter month:");
int month=sc.nextInt();

System.out.println("Enter year:");
int year=sc.nextInt();

sc.nextLine();

System.out.println("Enter day of week:");
String dow=sc.nextLine();

Date d3=new Date(day,month,year,dow);
d3.display();
sc.close();


}

  }//class Test ends here
