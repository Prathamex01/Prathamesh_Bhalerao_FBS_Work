package com.demo.containment;

import jakarta.persistence.Embeddable;

@Embeddable

public class Address {
String city;
String area;
public Address() {
	
}
public Address(String city, String area) {
	
	this.city = city;
	this.area = area;
}
public String getCity() {
	return city;
}
public void setCity(String city) {
	this.city = city;
}
public String getArea() {
	return area;
}
public void setArea(String area) {
	this.area = area;
}
@Override
public String toString() {
	return " [city=" + city + ", area=" + area + "]";
}
	
	
}
