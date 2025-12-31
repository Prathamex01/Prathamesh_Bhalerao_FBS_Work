package com.demo.Cardverify;
//Service Layer
import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

@WebServlet("/authenticate")

public class CardServlet extends HttpServlet{

	public void service(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException {
		 System.out.println(" Jinklas Mitra ");
		 String cardnumber=req.getParameter("card_no");
			String name=req.getParameter("name");
			String expirydate=req.getParameter("expiry_date");
			String cvv=req.getParameter("cvv");
			String bank_balance=req.getParameter("bank_balance");
			
			CardRules rules = new CardRules();
	        boolean status = rules.verify(cardnumber, name, expirydate, cvv,bank_balance);

	        if (status) {
	        	PrintWriter out = res.getWriter(); 
	        	out.println("first servlet valid user");
	        	//res.sendRedirect("hello.html");
	        	
	        	  req.setAttribute("balance", bank_balance); 
		            
		        	RequestDispatcher rd = req.getRequestDispatcher("ViewServlet");
		        	rd.include(req, res);

		        	//  res.getWriter().println("Card Verified Successfully!");
		        } else {
		            res.getWriter().println("Invalid Card Details!");
		            res.getWriter().println("Chips Packet ka fodla!");
		        }
		        if(status==true)
		        {
		        
		        	System.out.println(" Sher dikh gaya ");
		        
				System.out.println("CARD_NO     = " + req.getParameter("card_no"));
				System.out.println("NAME        = " + req.getParameter("name"));
				System.out.println("EXPIRY_DATE = " + req.getParameter("expiry_date"));
				System.out.println("CVV         = " + req.getParameter("cvv"));
				System.out.println("BANK_BALANCE = " + req.getParameter("bank_balance"));        
		        }
		        else
		        {
		        	System.out.println("Sher nhi Dikha");
		        }
		}
		
	        	
	        	
	}        	
