package main.bank;

import java.util.*;

public abstract class BankAccount extends Bank implements AccountOperation {
     long accountNumber;
     String accountHoldername;
     double balance;
     long accountHolderAadhar;
     long nomineeAadhar;
     boolean accountStatus;
     List<Transaction> transactions = new ArrayList<>();
     static int transactionCounter = 1;

    public BankAccount() {
        super();
        this.accountNumber = 0;
        this.accountHoldername = "not given";
        this.balance = 0.0;
        this.accountHolderAadhar = 0;
        this.nomineeAadhar = 0;
        this.accountStatus = true;
    }

    public BankAccount(long accountNumber, String accountHoldername, double balance, long accountHolderAadhar,long nomineeAadhar) {
        super();
        this.accountNumber = accountNumber;
        this.accountHoldername = accountHoldername;
        this.balance = balance;
        this.accountHolderAadhar = accountHolderAadhar;
        this.nomineeAadhar = nomineeAadhar;
        this.accountStatus = true;
    }

    public long getAccountNumber() {
        return accountNumber;
    }

    public void setAccountNumber(long accountNumber) {
        this.accountNumber = accountNumber;
    }

    public String getAccountHoldername() {
        return accountHoldername;
    }

    public void setAccountHoldername(String accountHoldername) {
        this.accountHoldername = accountHoldername;
    }

    public double getBalance() {
        return balance;
    }

    protected void setBalance(double balance) {
        this.balance = balance;
    }

    public long getAccountHolderAadhar() {
        return accountHolderAadhar;
    }

    public void setAccountHolderAadhar(long accountHolderAadhar) {
        this.accountHolderAadhar = accountHolderAadhar;
    }

    public long getNomineeAadhar() {
        return nomineeAadhar;
    }

    public void setNomineeAadhar(long nomineeAadhar) {
        this.nomineeAadhar = nomineeAadhar;
    }

    public boolean isAccountStatus() {
        return accountStatus;
    }

    public void setAccountStatus(boolean accountStatus) {
        this.accountStatus = accountStatus;
    }

    public List<Transaction> getTransactions() {
        return transactions;
    }

    
    public void deposit(double amount) {
        if (amount <= 0) {
            System.out.println("Deposit amount must be positive.");
            return;
        }
        this.balance += amount;
        Transaction t = new Transaction(transactionCounter++, new Date(), "Deposit", amount, this.balance);
        transactions.add(t);
        System.out.println("Deposited " + amount + ". New balance = " + this.balance);
    }

   
    public abstract void withdraw(double amount) throws InvalidTransactionException;

     protected void addTransaction(String type, double amount) {
        Transaction t = new Transaction(transactionCounter++, new Date(), type, amount, this.balance);
        transactions.add(t);
    }

    
    public void showDetails() {
        System.out.println(this.toString());
    }

    
    public String toString() {
        return "Account Number       : " + accountNumber + "\n" +
               "Account Holder Name  : " + accountHoldername + "\n" +
               "Balance              : " + balance + "\n" +
               "Aadhar Number        : " + accountHolderAadhar + "\n" +
               "Nominee Aadhar       : " + nomineeAadhar + "\n" +
               "Account Status       : " + (accountStatus ? "Active" : "Inactive");
    }
    
    

}


