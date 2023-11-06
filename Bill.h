#ifndef BILL_H
#define BILL_H

#include <iostream>
#include "Order.h"
// class Order;

class Bill
/**
 * @brief The Bill class is an abstract class that represents a bill for a customer.
 * 
 * This class provides methods for printing the bill, adding and removing persons from the bill,
 * finding a bill by customer ID, getting the order, and getting the total bill amount.
 * 
 * This class is abstract and cannot be instantiated directly.
 */
{
private:

public:
    Bill();
    virtual void printBill() ;
    virtual void addPerson(Bill* Bill) ;
    virtual Bill* findBill(int customerId) =0;
    virtual void removePerson(int customerId) ;
    virtual Order* getOrder() =0;
    virtual double getBillTotal() =0;
    virtual ~Bill();
};

#endif