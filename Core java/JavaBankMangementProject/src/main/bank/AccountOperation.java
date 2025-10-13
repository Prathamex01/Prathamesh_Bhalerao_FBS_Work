package main.bank;

public interface AccountOperation {
    void deposit(double amount);
    void withdraw(double amount) throws InvalidTransactionException;
    void showDetails();
}


