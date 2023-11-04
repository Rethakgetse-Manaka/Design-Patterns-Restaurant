#include "Tab.h"
#include "TabMemento.h"
#include "Bill.h"
#include "CompositeBill.h"
Tab::Tab(int customerID, std::string customerName, Bill* bill)
    : customerID(customerID), customerName(customerName), bill(bill) {}

Tab::~Tab() {
    // Destructor
}


void Tab::restoreMemento(TabMemento* memento) {
    // Restore the tab's state from the memento
    customerID = memento->getCustomerID();
    customerName = memento->getCustomerName();
    bill=memento->findBill(customerID);
}

int Tab::getCustomerID() const {
    return customerID;
}

 std::string Tab::getCustomerName() {
    return customerName;
}

TabMemento* Tab::getMemento() {
    return new TabMemento(customerID, customerName, bill);
}

Bill* Tab::findBill(int customerID) {
    if (bill) {
        return bill->findBill(customerID);
    }
    return nullptr;
}

