class Date
{ 
   int day,month,year;
String dow;//Reference
         
 }//class Date ends here

class Test
{ 
public static void main(String[]args)
{
  Date d1;
d1=new Date();

//System.out.println(d1);


Date d2=new Date();
//System.out.println(d2);

d1.dow="Wed";
System.out.println(d1.dow);


}

  }//class Test ends here
