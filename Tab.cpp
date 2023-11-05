#include "Tab.h"
#include "TabMemento.h"
#include "Bill.h"
#include "CompositeBill.h"
Tab::Tab(int customerID, std::string customerName, double amount)
    : customerID(customerID), customerName(customerName), amount(amount) {}

Tab::~Tab() {
    // Destructor
}


void Tab::restoreMemento(TabMemento* memento) {
    // Restore the tab's state from the memento
    
    customerID = memento->getCustomerID();
    customerName = memento->getCustomerName();
    amount = memento->getAmount();
    std::cout << customerName << "'s tab is restored"<<std::endl;
}

int Tab::getCustomerID() const {
    return customerID;
}

 std::string Tab::getCustomerName() {
    return customerName;
}

TabMemento* Tab::getMemento() {
    return new TabMemento(customerID, customerName, amount);
}



