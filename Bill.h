#ifndef BILL_H
#define BILL_H

#include <iostream>
#include "Order.h"
// class Order;

class Bill
/**
 * @brief The Bill class is an abstract class that represents a bill for a customer.
 * 
 * This class provides methods to print the bill, add a person to the bill, find a bill by customer ID,
 * remove a person from the bill, get the order associated with the bill, and get the total amount of the bill.
 * 
 * This class is meant to be inherited by concrete bill classes that implement the abstract methods.
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