class Printer{

void print (int a)
{
  int d=a;
System.out.println("Printing integer "+d);
}

void print (char c)
{
  char ch=c;
System.out.println("Printing character "+ch);
}
void print (String str)
{
  String s=str;
System.out.println("Printing string "+s);
}

}//class Printer ends here

class Test{

public static void main(String[] args)
{
 Printer p1=new Printer();
p1.print('A');
p1.print(10);
p1.print("Firstbit");
}

}//class Test ends here