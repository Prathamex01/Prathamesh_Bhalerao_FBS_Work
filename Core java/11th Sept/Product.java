import java.util.Scanner;

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
 // Default constructor
    Product() {
        this.id = 0;
        this.name = "Default Product";
        this.price = 0.0;
        this.quantity = 0;
        System.out.println("In Default Constructor");
    }

    // Parameterized constructor
    Product(int id, String name, double price, int quantity) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.quantity = quantity;
        System.out.println("In Parameterized Constructor");
    }

}//class Product ends here


class Test{
public static void main(String[]args)
{
 Scanner sc=new Scanner(System.in);
  
 Product p1=new Product();

p1.display();

Product p2=new Product(1, "MacBook", 75000, 550);

p2.display();

 System.out.print("Enter Product ID: ");
        int id = sc.nextInt();
        sc.nextLine(); 

        System.out.print("Enter Product Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Product Price: ");
        double price = sc.nextDouble();

        System.out.print("Enter Product Quantity: ");
        int quantity = sc.nextInt();

        Product p3 = new Product(id, name, price, quantity);
        p3.display();

        sc.close();
    }



}//class Test ends here