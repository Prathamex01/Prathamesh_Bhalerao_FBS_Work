package com.demo.maven;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

public class MainApp {

	public static void main(String[] args) {
		Student s1=new Student(3,"Rana","Gujrat");
		
		Configuration cfg=new Configuration();
		cfg.configure("DemoFile.xml");
          SessionFactory factory=cfg.buildSessionFactory(); 
          Session session=factory.openSession();
		Transaction tr=session.beginTransaction();
		
		
		session.persist(s1);
		
		
		tr.commit();
		
		session.close();
		
	}

}
