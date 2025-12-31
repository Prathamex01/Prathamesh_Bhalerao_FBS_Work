package com.demo.JavaEE;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
//Business Logic
public class VerifyUser {

	public boolean isValid(String v1,String v2) {
		
		Connectivity ref=new DatabaseConnectivity();
			return	ref.checkUser(v1, v2);
		
	}
}
