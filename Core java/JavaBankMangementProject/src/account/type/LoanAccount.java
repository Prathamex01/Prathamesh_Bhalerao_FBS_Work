package account.type;

import main.bank.BankAccount;
import main.bank.InvalidTransactionException;

public class LoanAccount extends BankAccount {
    double loanAmount;
    double outstanding;

    public LoanAccount(long accountNumber, String accountHoldername, double balance, long accountHolderAadhar,long nomineeAadhar, double loanAmount) {
        super(accountNumber, accountHoldername, balance, accountHolderAadhar, nomineeAadhar);
        this.loanAmount = loanAmount;
        this.outstanding = loanAmount;
    }

    public double getLoanAmount() {
        return loanAmount;
    }

    public double getOutstanding() {
        return outstanding;
    }

    
    public void deposit(double amount) {
        if (amount <= 0) {
            System.out.println("Repayment amount must be positive.");
            return;
        }
        System.out.println("Deducting amount: " + amount + 
                " from outstanding. Previous outstanding: " + (this.outstanding + amount) + 
                ", New outstanding: " + this.outstanding);
        if (this.outstanding < 0) {
            double extra = -this.outstanding;
            this.outstanding = 0;
            setBalance(getBalance() + extra);
        }
        addTransaction("Repayment", amount);
        System.out.println("Repayment " + amount + ". Outstanding = " + this.outstanding + ", balance=" + getBalance());
    }

    
    public void withdraw(double amount) throws InvalidTransactionException {
        throw new InvalidTransactionException("Cannot withdraw from loan account.");
    }

  
    public String toString() {
        return "LoanAccount " + super.toString() + ", loanAmount=" + loanAmount + ", outstanding=" + outstanding;
    }
}

