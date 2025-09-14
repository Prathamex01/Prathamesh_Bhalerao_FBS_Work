class Bank {

    void loanApproval(Student s1) {
        if (s1.getPercentage() > 80) {
            System.out.println("Loan approved = 2 Lakh");
        } else if (s1.getPercentage() > 60) {
            System.out.println("Loan approved = 1 Lakh");
        } else if (s1.getPercentage() >= 40) {
            System.out.println("Loan approved = 50K");
        } else {
            System.out.println("No Loan approved, sorry");
        }
    }

    void loanApproval(Employee e1) {
        if (e1.getAnnualSalary() > 12) {
            System.out.println("Loan approved = 7 Lakh");
        } else if (e1.getAnnualSalary() >= 10) {
            System.out.println("Loan approved = 6 Lakh");
        } else if (e1.getAnnualSalary() >= 6) {
            System.out.println("Loan approved = 5 Lakh");
        } else if (e1.getAnnualSalary() >= 4) {
            System.out.println("Loan approved = 4 Lakh");
        } else {
            System.out.println("Loan Not approved, sorry");
        }
    }
} // class Bank ends


class Student {
    int id;
    String name;
    double percentage;

    Student() {
        this.id = 0;
        this.name = "abc";
        this.percentage = 0;
    }

    Student(int i, String str, double p) {
        this.id = i;
        this.name = str;
        this.percentage = p;
    }

    void setId(int i) {
        this.id = i;
    }

    void setName(String str) {
        this.name = str;
    }

    void setPercentage(double p) {
        this.percentage = p;
    }

    int getId() {
        return this.id;
    }

    String getName() {
        return this.name;
    }

    double getPercentage() {
        return this.percentage;
    }

    void display() {
        System.out.println("The Id is: " + this.id);
        System.out.println("The Name is: " + this.name);
        System.out.println("The Percentage is: " + this.percentage);
    }
} // class Student ends


class Employee {
    int id;
    String name;
    double annualSalary;

    Employee() {
        this.id = 0;
        this.name = "xyz";
        this.annualSalary = 0;
    }

    Employee(int e, String ptr, double s) {
        this.id = e;
        this.name = ptr;
        this.annualSalary = s;
    }

    void setId(int e) {
        this.id = e;
    }

    void setName(String ptr) {
        this.name = ptr;
    }

    void setAnnualSalary(double s) {
        this.annualSalary = s;
    }

    int getId() {
        return this.id;
    }

    String getName() {
        return this.name;
    }

    double getAnnualSalary() {
        return this.annualSalary;
    }

    void display() {
        System.out.println("The Id is: " + this.id);
        System.out.println("The Name is: " + this.name);
        System.out.println("The Annual Salary is: " + this.annualSalary + " LPA");
    }
} // class Employee ends


class Test {
    public static void main(String[] args) {
        Bank b1 = new Bank();

        Student s1 = new Student(1, "Pratham", 85);
        s1.display();
        b1.loanApproval(s1);

        Employee e1 = new Employee(101, "Rana", 13.0);
        e1.display();
        b1.loanApproval(e1);
    }
} // class Test ends
