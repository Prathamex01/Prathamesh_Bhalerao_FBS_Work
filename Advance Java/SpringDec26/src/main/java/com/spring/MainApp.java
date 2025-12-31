package com.spring;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class MainApp {
	public static void main(String[] args) {
		ApplicationContext ctx=new ClassPathXmlApplicationContext("config.xml");
		Student stud = (Student)ctx.getBean("stud");
		stud.takeExams();
		
		//stud.takeTest("AS");
		//stud.conductExams();
	}
}
