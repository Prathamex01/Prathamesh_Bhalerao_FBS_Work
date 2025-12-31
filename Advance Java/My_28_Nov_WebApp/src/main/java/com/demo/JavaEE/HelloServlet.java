package com.demo.JavaEE;

import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
//This is a Service Layer component
@WebServlet("/authenticate")

public class HelloServlet extends HttpServlet {

	public void service(HttpServletRequest req, HttpServletResponse res) throws IOException
	{
	   System.out.println(" Inside the Server Bhai ");
		String user=req.getParameter("userName");
		String pwd=req.getParameter("password");
		VerifyUser ref=new VerifyUser();
		boolean result=ref.isValid(user,pwd);
		PrintWriter out=res.getWriter();
		if(result==true) {
			
			out.print(" Valid User ");
			
		}else {
			
			out.println(" Invalid User ");
		}
		
	}
	
}
