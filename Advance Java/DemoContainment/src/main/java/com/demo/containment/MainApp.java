package com.demo.containment;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

public class MainApp {

	public static void main(String[] args) {
		
		Student s1=new Student(3,"Rana", new Address("Pune", "Katraj"));
		Configuration cfg=new Configuration();
		cfg.configure("Demo.xml");
          SessionFactory factory=cfg.buildSessionFactory(); 
          Session session=factory.openSession();
		Transaction tr=session.beginTransaction();
		session.persist(s1);
		tr.commit();
	//	Student ref=session.find(Student.class,2);
		//session.remove(ref);
	//ref.setName("Prathamesh");
	//ref.address.setArea("Karvenagar");
	//session.merge(ref);
	
		
		
		//System.out.println(ref);
		
		session.close();
		
	}

}
