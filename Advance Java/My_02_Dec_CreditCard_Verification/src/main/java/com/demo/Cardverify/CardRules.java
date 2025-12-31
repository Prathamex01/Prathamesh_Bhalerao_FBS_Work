package com.demo.Cardverify;

public class CardRules implements VerifyCard {

	
	public boolean verify(String v1, String v2, String v3, String v4, String v5) {

	       DatabaseConnectivity db = new DatabaseConnectivity();
	        return db.isValidcard(v1,v2,v3,v4,v5);
	}

	
}
