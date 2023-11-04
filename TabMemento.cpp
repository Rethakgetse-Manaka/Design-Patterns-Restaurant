#include "TabMemento.h"
#include "Bill.h"


TabMemento::TabMemento(int customerID, std::string customerName, Bill* bill)
    : customerID(customerID), customerName(customerName), bill(bill) {}

int TabMemento::getCustomerID() const {
    return customerID;
}

 std::string TabMemento::getCustomerName() {
    return customerName;
}

Bill* TabMemento::findBill(int customerID) {
    if (bill) {
        return bill->findBill(customerID);
    }
    return nullptr;
}

void TabMemento::printMemento() {
    std::cout << "Customer ID: " << customerID << std::endl;
    std::cout << "Customer Name: " << customerName << std::endl;

    if (bill) {
        std::cout << "Bill Amount: " << bill->findBill(customerID) << std::endl;
    } else {
        std::cout << "No Bill Found" << std::endl;
    }
}


