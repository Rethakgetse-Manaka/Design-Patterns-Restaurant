#ifndef BILL_H
#define BILL_H

#include <iostream>
#include "Order.h"

/**
 * @brief The Bill class represents a bill for a customer or group of customers.
 * 
 * This class provides functionality for printing the bill, adding and removing customers, finding a customer's bill,
 * getting the order associated with the bill, and getting the total amount due for the bill.
 */
class Bill
{
private:

public:
    Bill();
    virtual void printBill() ;
    virtual void addPerson(Bill* Bill) ;
    virtual Bill* findBill(int customerId);
    virtual void removePerson(int customerId) ;
    virtual Order* getOrder() =0;
    virtual double getBillTotal() =0;
    virtual ~Bill();
};

#endif