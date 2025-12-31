package com.demo.spring;

public class ShowGreeting implements Greetable {
String msg;
String from;




	public ShowGreeting(String msg, String from) {
	super();
	this.msg = msg;
	this.from = from;
}


	public String getFrom() {
		return from;
	}


	public void setFrom(String from) {
		this.from = from;
	}


	public ShowGreeting(String msg) {
	super();
	this.msg = msg;
}


	public String getMsg() {
		return msg;
	}


	public void setMsg(String msg) {
		this.msg = msg;
	}


	public ShowGreeting() {
	super();
}


	@Override
	public void greet() {
		System.out.println("Hello !!!");
	}

}
