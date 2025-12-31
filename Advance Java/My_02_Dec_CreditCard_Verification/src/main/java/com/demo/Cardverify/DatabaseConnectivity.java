package com.demo.Cardverify;
//Data Persistence layer
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class DatabaseConnectivity implements CardConnectivity{

	@Override
	public boolean isValidcard(String v1, String v2, String v3, String v4,String v5) {
		
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/fbs","root","12345");
			
			String query="select * from credit_card_verification where card_no=? and name =? and expiry_date=? and cvv=? AND bank_balance=?" ;
			PreparedStatement pstmt=con.prepareStatement(query);
			 pstmt.setString(1, v1.trim());
	            pstmt.setString(2, v2.trim());
	            pstmt.setString(3, v3.trim());
	            pstmt.setString(4, v4.trim());
	            pstmt.setString(5, v5.trim());

			ResultSet rs=pstmt.executeQuery();
			
			return rs.next();
			
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
		
		
		
		
		return false;
	}

	
	
}
