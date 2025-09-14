class Calculator{

void add (int a , int b)
{
  int c=a+b;
System.out.println("Sum is ="+c);
System.out.println("In integer function");
}

void add (double a , double b)
{
  double c=a+b;
System.out.println("Sum is ="+c);
System.out.println("In double function");
}

void add (double d , int b)
{
  double s=d+b;
System.out.println("Sum is ="+s);
System.out.println("In double & integer function");
}

void add (int a , double b)
{
  double c=a+b;
System.out.println("Sum is ="+c);
System.out.println("In integer & double function");
}


//Subtraction

 void sub(int a, int b) {
        int c = a - b;
        System.out.println("Difference is = " + c);
        System.out.println("In integer function");
    }

    void sub(double a, double b) {
        double c = a - b;
        System.out.println("Difference is = " + c);
        System.out.println("In double function");
    }

    void sub(double d, int b) {
        double s = d - b;
        System.out.println("Difference is = " + s);
        System.out.println("In double & integer function");
    }

    void sub(int a, double b) {
        double c = a - b;
        System.out.println("Difference is = " + c);
        System.out.println("In integer & double function");
    }


//Multiplication

 void mul(int a, int b) {
        int c = a * b;
        System.out.println("Product is = " + c);
        System.out.println("In integer function");
    }

    void mul(double a, double b) {
        double c = a * b;
        System.out.println("Product is = " + c);
        System.out.println("In double function");
    }

    void mul(double d, int b) {
        double s = d * b;
        System.out.println("Product is = " + s);
        System.out.println("In double & integer function");
    }

    void mul(int a, double b) {
        double c = a * b;
        System.out.println("Product is = " + c);
        System.out.println("In integer & double function");
    }

// Division

void div(int a, int b) {
        if (b != 0) {
            int c = a / b;
            System.out.println("Quotient is = " + c);
        } else {
            System.out.println("Error: Division by zero (int)");
        }
        System.out.println("In integer function");
    }

    void div(double a, double b) {
        if (b != 0) {
            double c = a / b;
            System.out.println("Quotient is = " + c);
        } else {
            System.out.println("Error: Division by zero (double)");
        }
        System.out.println("In double function");
    }

    void div(double d, int b) {
        if (b != 0) {
            double s = d / b;
            System.out.println("Quotient is = " + s);
        } else {
            System.out.println("Error: Division by zero (double & int)");
        }
        System.out.println("In double & integer function");
    }

    void div(int a, double b) {
        if (b != 0) {
            double c = a / b;
            System.out.println("Quotient is = " + c);
        } else {
            System.out.println("Error: Division by zero (int & double)");
        }
        System.out.println("In integer & double function");
    }

}//class calculator ends here


class Test{

public static void main(String[] args)
{
 Calculator c1=new Calculator();
int a=10,b=20;

//Addition
c1.add(10,10.2);
c1.add(a,b);
c1.add(10.2,20.2);

//Subtraction
c1.sub(20,10);
c1.sub(15.5,3.5);

//Multiply

c1.mul(5,6);
c1.mul(2.5,3.5);


//Division

c1.div(20, 5);
 c1.div(10.0, 4);
  c1.div(10, 0);

}

}//class Test ends here