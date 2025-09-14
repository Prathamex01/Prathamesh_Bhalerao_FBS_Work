class Product{
int id;
String name;//References
int quantity;
double price;


void setId(int a)
{
  this.id=a;
}

void setName(String str)
{
 this.name=str;
}

void setQuantity(int d)
{
  this.quantity=d;
}

void setPrice(double p)
{
 this.price=p;

}

int getId()
{
  return this.id;
}

String getName()
{
  return this.name;
}

double getPrice()
{
  return this.price;
}

int getQuantity()
{
  return this.quantity;
}


void display()
{
 System.out.println("The id is "+this.id);
System.out.println("The product name is "+this.name);
System.out.println("The price is "+this.price);
System.out.println("The quantity is "+this.quantity);


}

}//class Product ends here


class Test{
public static void main(String[]args)
{
 Product p1=new Product();
p1.setId(1);
p1.setName("Iphone");
p1.setPrice(55000);
p1.setQuantity(500);

p1.display();

Product p2=new Product();
p2.setId(2);
p2.setName("Macbook");
p2.setPrice(75000);
p2.setQuantity(550);

p2.display();


}

}//class Test ends here