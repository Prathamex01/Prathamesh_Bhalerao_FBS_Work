package com.spring;

import org.aspectj.lang.JoinPoint;

public class CheckValidity {

	public CheckValidity() {
		
	}
	
	public void hasPaid(JoinPoint jp) {
		Student target=(Student)jp.getTarget();
		System.out.println("Checking if fee paid or not");
		System.out.println(jp.getTarget().getClass().getName());
		target.valid=true;
	}
}
