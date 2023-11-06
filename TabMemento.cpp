#include "TabMemento.h"
//#include "Bill.h"


TabMemento::TabMemento(int customerID, std::string customerName, double amount)
    : customerID(customerID), customerName(customerName), amount(amount) {}

int TabMemento::getCustomerID() const {
    return customerID;
}

 std::string TabMemento::getCustomerName() {
    return customerName;
}

double TabMemento::getAmount() const
{
    return amount;
}

// Bill* TabMemento::findBill(int customerID) {
//     if (bill) {
//         return bill->findBill(customerID);
//     }
//     return nullptr;
// }

void TabMemento::printMemento() {
    // std::cout << "Customer ID: " << customerID << std::endl;
    std::cout << "Customer Name: " << customerName << std::endl;

    std::cout<< "Tab Amount: " << amount << std::endl;
}


