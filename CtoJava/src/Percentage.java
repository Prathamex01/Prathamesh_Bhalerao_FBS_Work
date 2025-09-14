
public class Percentage {

	public static void main(String[] args) {
		int sub1=85;
		int sub2=60;
		int sub3=60;
		int sub4=90;
		int sub5=65;
		 
		int total_marks= sub1+sub2+sub3+sub4+sub5;
		  double percentage= (total_marks/500.00)*100;
		  
		 System.out.printf("The total marks are: %d\n",total_marks);
		  
		 System.out.printf("Percentage: %f", percentage);
	}

}
