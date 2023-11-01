#ifndef BILL_H
#define BILL_H

#include <iostream>
#include "Order.h"

class Bill
{
private:
    /* data */
public:
    Bill();
    virtual void printBill() ;
    virtual void addPerson(Bill* Bill) ;
    virtual void removePerson(Bill* Bill) ;
    ~Bill();
};

#endif