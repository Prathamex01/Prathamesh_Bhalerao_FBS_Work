package com.demo.Cardverify;



import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;



@WebServlet("/ViewServlet")
public class ViewServlet extends HttpServlet {

	public void service(HttpServletRequest req,HttpServletResponse res)
	{
		try {
			PrintWriter out=res.getWriter();
			out.println("Second Servlet");
		
			
            String balance = (String) req.getAttribute("balance");

            
           
            out.println("\n BALANCE = " + balance );

		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}

