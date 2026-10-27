
#ifndef BANKAPPV1_BANKACCOUNT_H
#define BANKAPPV1_BANKACCOUNT_H
#include <string>

class BankAccount {
private:
    std::string m_accHolder;
    std::string m_accNum;
protected:
    double m_balance;
public:
    BankAccount(const std::string &accHolder, const std::string &accNum, double balance);
   virtual ~BankAccount(); // default destructor
    virtual void deposit(double amount);
   virtual bool withdraw(double amount)=0; //bankaccount is now an abstract class: inherits responsibility of implementing
    virtual void display(); //overrides method if using pointer
};


#endif //BANKAPPV1_BANKACCOUNT_H
