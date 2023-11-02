#ifndef BILL_H
#define BILL_H

#include <iostream>
#include "Order.h"

class Bill
{
private:

public:
    Bill();
    virtual void printBill() ;
    virtual void addPerson(Bill* Bill) ;
    virtual void removePerson(Bill* Bill) ;
    virtual Order* getOrder() =0;
    virtual double getBillTotal() =0;
    ~Bill();
};

#endif