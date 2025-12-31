package com.demo.maven;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name="student")
public class Student {
	
	@Id
	@Column(name="rollno")
int Rollno;
	@Column(name="name")
String name;
	@Column(name="address")
String Address;
public Student() {
	
}
public Student(int rollno, String name, String address) {
	super();
	Rollno = rollno;
	this.name = name;
	Address = address;
}
public int getRollno() {
	return Rollno;
}
public void setRollno(int rollno) {
	Rollno = rollno;
}
public String getName() {
	return name;
}
public void setName(String name) {
	this.name = name;
}
public String getAddress() {
	return Address;
}
public void setAddress(String address) {
	Address = address;
}


	
}
