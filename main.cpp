#include <iostream>
#include "BankAccount.h"
#include "CheckingAccount.h"

int main() {  // sandbox to play with objects
    std::cout<< "-------------BankAccount Objects--------------\n";
    //static instantiation (compile time) - destructed when it goes out of scope
    // BankAccount customer1("Mick Mouse","1234567",2350.50);
    // customer1.display();
    // customer1.withdraw(500);
    // customer1.display();
    // //dynamic instantiation (run time(while program is running)) - destructed when we delete it in the program
    // BankAccount* customer2 = new BankAccount("Don Duck", "7654321", 1250.75);
    // customer2->display();
    // delete customer2;
    std::cout<< "-------------CheckingAccount Objects--------------\n";
    //static instantiation (compile time) - destructed when it goes out of scope
    CheckingAccount customer3("Minnie Mouse","3456789",2000.00, 300.00);
    customer3.display();
    customer3.withdraw(2200);
    customer3.display();
    customer3.withdraw(50);
    customer3.display();
    //dynamic instantiation -  when you don't know how many objects you need
    BankAccount* customer4 = new CheckingAccount("Goofy", "9876543", 1000.00, 200.00);
    customer4->display();
    customer4->withdraw(1100);
    customer4->display();
    delete customer4;

    return 0;
}
