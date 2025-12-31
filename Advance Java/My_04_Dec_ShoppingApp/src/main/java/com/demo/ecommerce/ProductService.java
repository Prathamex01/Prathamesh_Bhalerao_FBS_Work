package com.demo.ecommerce;

import java.io.IOException;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.PrintWriter;

@WebServlet("/productservlet")
public class ProductService extends HttpServlet {

    @Override
    protected void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
        
        System.out.println("Inside the product servlet");
        
        // Get selected items from checkboxes
        String[] items = req.getParameterValues("items");

        res.setContentType("text/html");
        PrintWriter out = res.getWriter();
        
        out.println("<h2>Your Selected Products</h2>");

        if(items != null) {
            out.println("<ul>");
            for(String item : items) {
                out.println("<li>" + item + "</li>");
            }
            out.println("</ul>");
        } else {
            out.println("<p>No product selected!</p>");
        }
    }
}