
public class Swapping {

	public static void main(String[] args) {
		int a=10, b=20, temp;
		
		//Before swapping 

		System.out.printf ("Numbers before swapping: a=%d, b=%d\n", a,b);

		//After swapping 

		temp=a;
		a=b;
		b=temp;
		System.out.printf("Numbers after swapping: a=%d, b=%d\n", a,b);

	}

}
