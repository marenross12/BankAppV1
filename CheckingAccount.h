
#ifndef BANKAPP_CHECKINGACCOUNT_H
#define BANKAPP_CHECKINGACCOUNT_H
#include <iostream>
#include <ostream>

#include "BankAccount.h"

class CheckingAccount: public BankAccount {
private:
    double m_overdraftLimit;
public:
    CheckingAccount(const std::string &accHolder, const std::string &accNum, double balance, double overdraftLimit):BankAccount(accHolder, accNum, balance) {
        m_overdraftLimit = overdraftLimit;
    }
    ~CheckingAccount() {
        std::cout<<"\nChecking Account object has been DESTROYED!"<<std::endl;
    }
    bool withdraw(double amount) { //override base class withdraw method - form of polymorphism
        if (amount <= m_balance + m_overdraftLimit) {
            if (amount > m_balance) {
                m_overdraftLimit += (m_balance - amount);
            }
            m_balance -= amount;
            return true;
        }
        if (m_balance < 0 && amount<= m_overdraftLimit) {
            m_overdraftLimit -= amount;
            m_balance -= amount;
            return true;
        }

        return false;

    }
    void display() {
        BankAccount::display();
        std::cout<< "Overdraft Limit: $" << m_overdraftLimit << std::endl;
    }
};






#endif //BANKAPP_CHECKINGACCOUNT_H
