#ifndef BILL_H
#define BILL_H

#include <iostream>
#include "Order.h"
// class Order;

class Bill
{
private:

public:
    Bill();
    virtual void printBill() ;
    virtual void addPerson(Bill* Bill) ;
    virtual void removePerson(int customerId) ;
    virtual Order* getOrder() =0;
    virtual double getBillTotal() =0;
    virtual ~Bill();
};

#endif