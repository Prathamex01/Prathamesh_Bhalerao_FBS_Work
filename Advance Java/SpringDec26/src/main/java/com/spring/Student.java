package com.spring;

public class Student {
	boolean valid;

	public Student() {
		// TODO Auto-generated constructor stub
	}
	
	public Student(boolean valid) {
		 
		this.valid = valid;
	}

	public boolean isValid() {
		return valid;
	}

	public void setValid(boolean valid) {
		this.valid = valid;
	}
	
	public void takeExams() {
		if(valid == true)
		{
			System.out.println("Appearing for exams");
		}else {
			System.out.println("You cannot appear for exam");
		}
	}
	
	public void takeTest(String ref) {
		System.out.println("Test method");
	}
	
	public void conductExams() {
		System.out.println("Conduct method");
	}
}
